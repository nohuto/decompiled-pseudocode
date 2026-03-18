/*
 * XREFs of MiFreeRetpolineImportInfo @ 0x1408601A8
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     VslFreeSecureImageIat @ 0x140550458 (VslFreeSecureImageIat.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineImportInfo(__int64 a1)
{
  unsigned __int64 v1; // rax
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v3; // r14
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rbp
  __int64 v6; // rcx
  void *v7; // rdi
  bool v8; // zf
  __int64 v9; // rax

  if ( *(_QWORD *)(a1 + 112) )
  {
    v1 = MiSectionControlArea(*(_QWORD *)(a1 + 112));
    CurrentThread = KeGetCurrentThread();
    v3 = v1;
    v4 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 32LL);
    --CurrentThread->SpecialApcDisable;
    v5 = (volatile signed __int64 *)(v4 + 24);
    ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
    v6 = *(_QWORD *)(v4 + 88);
    v7 = *(void **)(v6 + 16);
    *(_QWORD *)(v6 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    v8 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v8 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( (MiFlags & 0x8000) != 0 )
      VslFreeSecureImageIat(*(_QWORD *)(*(_QWORD *)(v3 + 96) + 56LL));
    MiWalkEntireImage(v3, qword_140C4F428, 0x10u, 0xFFFFFFFF);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 320);
    v7 = *(void **)(v9 + 16);
    *(_QWORD *)(v9 + 16) = 0LL;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
