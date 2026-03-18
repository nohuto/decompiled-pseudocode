/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x1407B8294
 * Callers:
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     VslFreeSecureImageIat @ 0x1404F8D68 (VslFreeSecureImageIat.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineImportInfo(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v2; // r14
  __int64 v3; // rdi
  volatile signed __int64 *v4; // rsi
  __int64 v5; // rcx
  void *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

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
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v7, v8, v9);
    if ( (MiFlags & 0x10000) != 0 )
      VslFreeSecureImageIat(*(_QWORD *)(*(_QWORD *)(v2 + 96) + 56LL));
    MiWalkEntireImage(v2, qword_140C4CBB0, 16, 0xFFFFFFFFLL);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 296);
    v6 = *(void **)(v10 + 16);
    *(_QWORD *)(v10 + 16) = 0LL;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
