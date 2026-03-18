/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x1407838B0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiGetPdeAddress @ 0x1402AC8AC (MiGetPdeAddress.c)
 *     MiInitializeTbFlushList @ 0x1402AC8CC (MiInitializeTbFlushList.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiLockPageTable @ 0x14037F34C (MiLockPageTable.c)
 *     MiRewritePteWithLockBit @ 0x1403ACEB8 (MiRewritePteWithLockBit.c)
 *     MiUnlockPageTable @ 0x1403ACF00 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiComputeDriverProtection @ 0x140783DD0 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectLargeKernelHalRange(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // r14d
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 PdeAddress; // r13
  char *AnyMultiplexedVm; // rsi
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  BOOL v12; // r15d
  unsigned int v13; // r14d
  unsigned __int64 PteShadow; // rax
  __int64 v15; // r9
  unsigned __int64 ValidPte; // rax
  _KPROCESS *v17; // rdx
  unsigned __int8 v19; // [rsp+20h] [rbp-118h]
  unsigned __int64 v20; // [rsp+28h] [rbp-110h] BYREF
  _BYTE v21[192]; // [rsp+30h] [rbp-108h] BYREF

  memset(v21, 0, 0xB8uLL);
  MiInitializeTbFlushList((__int64)v21, 0, 20);
  v6 = MiComputeDriverProtection(0LL, a3);
  PteAddress = 0LL;
  PdeAddress = MiGetPdeAddress(a2);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v19 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v10 = MiGetPdeAddress(a1);
  if ( v10 < PdeAddress )
  {
    v12 = MiPteInShadowRange((unsigned __int64)&v20);
    v13 = v6 | 0xA4000000;
    while ( 1 )
    {
      if ( !PteAddress )
        goto LABEL_9;
      if ( (v10 & 0xFFF) == 0 )
        break;
LABEL_5:
      PteShadow = MI_READ_PTE_LOCK_FREE(v10);
      v20 = PteShadow;
      if ( v12 )
        PteShadow = MiReadPteShadow((unsigned __int64)&v20, PteShadow);
      ValidPte = MiMakeValidPte(v10, (PteShadow >> 12) & 0xFFFFFFFFFLL, v13, v15);
      MiRewritePteWithLockBit((__int64)AnyMultiplexedVm, (volatile __int64 *)v10, ValidPte);
      v10 += 8LL;
      if ( v10 >= PdeAddress )
        goto LABEL_8;
    }
    MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress, v11);
LABEL_9:
    PteAddress = MiGetPteAddress(v10);
    MiLockPageTable((__int64)AnyMultiplexedVm, PteAddress);
    goto LABEL_5;
  }
LABEL_8:
  MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress, v11);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v19);
  MiInsertTbFlushEntry((__int64)v21, a1, (a2 - a1) >> 21, 1);
  MiFlushTbList((__int64)v21, v17);
  return 0LL;
}
