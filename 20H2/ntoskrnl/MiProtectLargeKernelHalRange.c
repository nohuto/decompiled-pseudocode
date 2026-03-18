/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x140796F50
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiGetPdeAddress @ 0x140236A3C (MiGetPdeAddress.c)
 *     MiInitializeTbFlushList @ 0x140236A5C (MiInitializeTbFlushList.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiLockPageTable @ 0x140381A6C (MiLockPageTable.c)
 *     MiRewritePteWithLockBit @ 0x1403B54A8 (MiRewritePteWithLockBit.c)
 *     MiUnlockPageTable @ 0x1403B54F0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiComputeDriverProtection @ 0x140797470 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectLargeKernelHalRange(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // r14d
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 PdeAddress; // r13
  char *AnyMultiplexedVm; // rsi
  unsigned __int64 v10; // rbx
  BOOL v11; // r15d
  unsigned int v12; // r14d
  unsigned __int64 PteShadow; // rax
  __int64 v14; // r9
  unsigned __int64 ValidPte; // rax
  _KPROCESS *v16; // rdx
  unsigned __int8 v18; // [rsp+20h] [rbp-118h]
  unsigned __int64 v19; // [rsp+28h] [rbp-110h] BYREF
  unsigned int v20[48]; // [rsp+30h] [rbp-108h] BYREF

  memset(v20, 0, 0xB8uLL);
  MiInitializeTbFlushList((__int64)v20, 0, 20);
  v6 = MiComputeDriverProtection(0LL, a3);
  PteAddress = 0LL;
  PdeAddress = MiGetPdeAddress(a2);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v18 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v10 = MiGetPdeAddress(a1);
  if ( v10 < PdeAddress )
  {
    v11 = MiPteInShadowRange((unsigned __int64)&v19);
    v12 = v6 | 0xA4000000;
    while ( 1 )
    {
      if ( !PteAddress )
        goto LABEL_9;
      if ( (v10 & 0xFFF) == 0 )
        break;
LABEL_5:
      PteShadow = MI_READ_PTE_LOCK_FREE(v10);
      v19 = PteShadow;
      if ( v11 )
        PteShadow = MiReadPteShadow((unsigned __int64)&v19, PteShadow);
      ValidPte = MiMakeValidPte(v10, (PteShadow >> 12) & 0xFFFFFFFFFLL, v12, v14);
      MiRewritePteWithLockBit((__int64)AnyMultiplexedVm, (volatile __int64 *)v10, ValidPte);
      v10 += 8LL;
      if ( v10 >= PdeAddress )
        goto LABEL_8;
    }
    MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
LABEL_9:
    PteAddress = MiGetPteAddress(v10);
    MiLockPageTable((__int64)AnyMultiplexedVm, PteAddress);
    goto LABEL_5;
  }
LABEL_8:
  MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v18);
  MiInsertTbFlushEntry((__int64)v20, a1, (a2 - a1) >> 21, 1);
  MiFlushTbList(v20, v16);
  return 0LL;
}
