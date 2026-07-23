/*
 * XREFs of MmSetPageProtection @ 0x1403797D0
 * Callers:
 *     sub_1403EA4E0 @ 0x1403EA4E0 (sub_1403EA4E0.c)
 *     MmAllocateIsrStack @ 0x14079FB38 (MmAllocateIsrStack.c)
 *     KeWriteProtectProcessorState @ 0x1409A0058 (KeWriteProtectProcessorState.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 *     VslpIumPhase0Initialize @ 0x140A905C8 (VslpIumPhase0Initialize.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiLockPageAndSetDirty @ 0x14031A7BC (MiLockPageAndSetDirty.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall MmSetPageProtection(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int ProtectionMask; // eax
  char v7; // di
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int64 ValidPte; // rax
  __int64 v11; // rbx
  _KPROCESS *v12; // rdx
  BOOL v13; // r14d
  int v14; // edi
  __int64 v15; // rax
  _DWORD *v16; // r9
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
  v7 = ProtectionMask;
  if ( ProtectionMask > 7 || (ProtectionMask & 5) == 5 || (ProtectionMask & 2) != 0 && (MiFlags & 0x10000) != 0 )
    return 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  ValidPte = MiMakeValidPte(v8, 0LL, ProtectionMask | 0xA0000000);
  v24[3] = 0LL;
  LODWORD(v24[1]) = 20;
  v11 = ValidPte;
  MiInsertTbFlushEntry((__int64)v24, a1, v9, 0);
  if ( v9 )
  {
    v13 = MiPteInShadowRange((unsigned __int64)v23);
    v14 = v7 & 4;
    do
    {
      v15 = MI_READ_PTE_LOCK_FREE(v8);
      v23[0] = v15;
      v17 = v15;
      if ( v13
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v15 & 1) != 0
        && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)v23 >> 3) & 0x1FF)) & 0x20) != 0 )
            v17 = v15 | 0x20;
        }
      }
      v18 = (v17 >> 12) & 0xFFFFFFFFFLL;
      v19 = (v18 << 12) | v11 & 0xFFFF000000000FFFuLL;
      v20 = v19;
      if ( v14 )
      {
        v19 |= 0x42uLL;
        if ( (v23[0] & 0x42) == 0 )
          v19 = v20;
      }
      else if ( ((*(_QWORD *)(48 * v18 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
      {
        MiLockPageAndSetDirty(48 * v18 - 0x58000000000LL, 0LL, v18, v16);
      }
      v11 = v19 | 0x20;
      MiWriteValidPteNewProtection(v8, v11);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  MiFlushTbList((__int64)v24, v12);
  return 1;
}
