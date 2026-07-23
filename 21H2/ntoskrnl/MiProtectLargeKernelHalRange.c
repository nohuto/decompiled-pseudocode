/*
 * XREFs of MiProtectLargeKernelHalRange @ 0x1407A1670
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPdeAddress @ 0x14025BEDC (MiGetPdeAddress.c)
 *     MiInitializeTbFlushList @ 0x14025BEFC (MiInitializeTbFlushList.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiLockPageTable @ 0x140381CBC (MiLockPageTable.c)
 *     MiRewritePteWithLockBit @ 0x1403B6D88 (MiRewritePteWithLockBit.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiComputeDriverProtection @ 0x1407A1B90 (MiComputeDriverProtection.c)
 */

__int64 __fastcall MiProtectLargeKernelHalRange(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v6; // r14d
  unsigned __int64 PteAddress; // rdi
  unsigned __int64 PdeAddress; // r13
  char *AnyMultiplexedVm; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned __int64 v13; // rbx
  BOOL v14; // r15d
  unsigned int v15; // r14d
  unsigned __int64 PteShadow; // rax
  unsigned __int64 ValidPte; // rax
  _KPROCESS *v18; // rdx
  unsigned __int8 v20; // [rsp+20h] [rbp-118h]
  unsigned __int64 v21; // [rsp+28h] [rbp-110h] BYREF
  _BYTE v22[192]; // [rsp+30h] [rbp-108h] BYREF

  memset(v22, 0, 0xB8uLL);
  MiInitializeTbFlushList((__int64)v22, 0, 20);
  v6 = MiComputeDriverProtection(0LL, a3);
  PteAddress = 0LL;
  PdeAddress = MiGetPdeAddress(a2);
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v20 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v10, v11, v12);
  v13 = MiGetPdeAddress(a1);
  if ( v13 < PdeAddress )
  {
    v14 = MiPteInShadowRange((unsigned __int64)&v21);
    v15 = v6 | 0xA4000000;
    while ( 1 )
    {
      if ( !PteAddress )
        goto LABEL_9;
      if ( (v13 & 0xFFF) == 0 )
        break;
LABEL_5:
      PteShadow = MI_READ_PTE_LOCK_FREE(v13);
      v21 = PteShadow;
      if ( v14 )
        PteShadow = MiReadPteShadow((unsigned __int64)&v21, PteShadow);
      ValidPte = MiMakeValidPte(v13, (PteShadow >> 12) & 0xFFFFFFFFFLL, v15);
      MiRewritePteWithLockBit((__int64)AnyMultiplexedVm, (volatile __int64 *)v13, ValidPte);
      v13 += 8LL;
      if ( v13 >= PdeAddress )
        goto LABEL_8;
    }
    MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
LABEL_9:
    PteAddress = MiGetPteAddress(v13);
    MiLockPageTable((__int64)AnyMultiplexedVm, PteAddress);
    goto LABEL_5;
  }
LABEL_8:
  MiUnlockPageTable((__int64)AnyMultiplexedVm, PteAddress);
  MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v20);
  MiInsertTbFlushEntry((__int64)v22, a1, (a2 - a1) >> 21, 1);
  MiFlushTbList((__int64)v22, v18);
  return 0LL;
}
