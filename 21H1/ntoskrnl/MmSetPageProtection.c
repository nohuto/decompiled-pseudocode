/*
 * XREFs of MmSetPageProtection @ 0x140376CE0
 * Callers:
 *     sub_1403E5F30 @ 0x1403E5F30 (sub_1403E5F30.c)
 *     MmAllocateIsrStack @ 0x140781D84 (MmAllocateIsrStack.c)
 *     KeWriteProtectProcessorState @ 0x14099AC10 (KeWriteProtectProcessorState.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     VslpIumPhase0Initialize @ 0x140A8D480 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiLockPageAndSetDirty @ 0x140224410 (MiLockPageAndSetDirty.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  __int64 v7; // r9
  char v8; // di
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 ValidPte; // rax
  __int64 v12; // rbx
  _KPROCESS *v13; // rdx
  BOOL v14; // r14d
  int v15; // edi
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD v23[2]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v24[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v24, 0, 0xB8uLL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v8 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  ValidPte = MiMakeValidPte(v9, 0LL, ProtectionMask | 0xA0000000, v7);
  v24[3] = 0LL;
  LODWORD(v24[1]) = 20;
  v12 = ValidPte;
  MiInsertTbFlushEntry((__int64)v24, a1, v10, 0);
  if ( v10 )
  {
    v14 = MiPteInShadowRange((unsigned __int64)v23);
    v15 = v8 & 4;
    do
    {
      v16 = MI_READ_PTE_LOCK_FREE(v9);
      v23[0] = v16;
      v17 = v16;
      if ( v14
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)v23 >> 3) & 0x1FF)) & 0x20) != 0 )
            v17 = v16 | 0x20;
        }
      }
      v18 = (v17 >> 12) & 0xFFFFFFFFFLL;
      v19 = (v18 << 12) | v12 & 0xFFFF000000000FFFuLL;
      v20 = v19;
      if ( v15 )
      {
        v19 |= 0x42uLL;
        if ( (v23[0] & 0x42) == 0 )
          v19 = v20;
      }
      else if ( ((*(_QWORD *)(48 * v18 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        MiLockPageAndSetDirty(48 * v18 - 0x58000000000LL, 0LL, v18);
      }
      v12 = v19 | 0x20;
      MiWriteValidPteNewProtection(v9, v12);
      v9 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  MiFlushTbList((__int64)v24, v13);
  return 1;
}
