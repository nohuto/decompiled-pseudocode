/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x1407CDF54
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     VslFreeSecureImageIat @ 0x1404FE7E8 (VslFreeSecureImageIat.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineImportInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v2; // r14
  __int64 v3; // rdi
  volatile signed __int64 *v4; // rsi
  __int64 v5; // rcx
  void *v6; // rdi
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(a1 + 112) )
  {
    v2 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 96) + 32LL);
    --CurrentThread->SpecialApcDisable;
    v4 = (volatile signed __int64 *)(v3 + 24);
    ExAcquirePushLockExclusiveEx(v3 + 24, 0LL);
    v5 = *(_QWORD *)(v3 + 96);
    v6 = *(void **)(v5 + 16);
    *(_QWORD *)(v5 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (MiFlags & 0x10000) != 0 )
      VslFreeSecureImageIat(*(_QWORD *)(*(_QWORD *)(v2 + 96) + 56LL));
    MiWalkEntireImage(v2, qword_140C4CC70, 16, 0xFFFFFFFF);
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 296);
    v6 = *(void **)(v7 + 16);
    *(_QWORD *)(v7 + 16) = 0LL;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
