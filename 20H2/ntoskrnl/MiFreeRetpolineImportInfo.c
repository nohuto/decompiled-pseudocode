/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x1407C9C94
 * Callers:
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     VslFreeSecureImageIat @ 0x1404FCC48 (VslFreeSecureImageIat.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
    MiWalkEntireImage(v2, qword_140C4CAF0, 16, 0xFFFFFFFF);
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
