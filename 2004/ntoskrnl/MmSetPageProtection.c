/*
 * XREFs of MmSetPageProtection @ 0x140377AF0
 * Callers:
 *     sub_1403E6D70 @ 0x1403E6D70 (sub_1403E6D70.c)
 *     MmAllocateIsrStack @ 0x140787708 (MmAllocateIsrStack.c)
 *     KeWriteProtectProcessorState @ 0x14099C3B0 (KeWriteProtectProcessorState.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 *     VslpIumPhase0Initialize @ 0x140A8CA68 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiMakeProtectionMask @ 0x1402ACEC0 (MiMakeProtectionMask.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiLockPageAndSetDirty @ 0x1402B7090 (MiLockPageAndSetDirty.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
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
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  _QWORD v24[2]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v25[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v25, 0, 0xB8uLL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(a1) )
    return 0;
  ProtectionMask = MiMakeProtectionMask(a3);
  v8 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  ValidPte = MiMakeValidPte(v9, 0LL, ProtectionMask | 0xA0000000, v7);
  v25[3] = 0LL;
  LODWORD(v25[1]) = 20;
  v12 = ValidPte;
  MiInsertTbFlushEntry((__int64)v25, a1, v10, 0);
  if ( v10 )
  {
    v14 = MiPteInShadowRange((unsigned __int64)v24);
    v15 = v8 & 4;
    do
    {
      v16 = MI_READ_PTE_LOCK_FREE(v9);
      v24[0] = v16;
      v18 = v16;
      if ( v14
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)v24 >> 3) & 0x1FF)) & 0x20) != 0 )
            v18 = v16 | 0x20;
        }
      }
      v19 = (v18 >> 12) & 0xFFFFFFFFFLL;
      v20 = (v19 << 12) | v12 & 0xFFFF000000000FFFuLL;
      v21 = v20;
      if ( v15 )
      {
        v20 |= 0x42uLL;
        if ( (v24[0] & 0x42) == 0 )
          v20 = v21;
      }
      else if ( ((*(_QWORD *)(48 * v19 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        MiLockPageAndSetDirty(48 * v19 - 0x58000000000LL, 0LL, v19, v17);
      }
      v12 = v20 | 0x20;
      MiWriteValidPteNewProtection(v9, v12);
      v9 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  MiFlushTbList((__int64)v25, v13);
  return 1;
}
