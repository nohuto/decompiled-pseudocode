/*
 * XREFs of MiFreeSessionId @ 0x14096DC98
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140693EA8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiSessionCreateInternal @ 0x1407F336C (MiSessionCreateInternal.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall MiFreeSessionId(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  $CEA84C04E3712D858E5667A507841A2A *v3; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50618, 0LL);
  _bittestandreset((signed __int32 *)qword_140C53490->Buffer, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50618, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C50618);
  LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&qword_140C50618);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v3 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v3->ApcState.ApcListHead[0].Flink != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
