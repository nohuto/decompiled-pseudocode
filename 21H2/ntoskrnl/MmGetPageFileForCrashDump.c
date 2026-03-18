/*
 * XREFs of MmGetPageFileForCrashDump @ 0x14096F688
 * Callers:
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MmGetPageFileForCrashDump(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rsi
  unsigned __int64 v3; // r14
  char *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140C553A8, 0LL);
  if ( Count )
  {
    v5 = (char *)&unk_140C590E0;
    v6 = Count;
    do
    {
      v7 = *(_QWORD *)v5;
      if ( (*(_WORD *)(*(_QWORD *)v5 + 204LL) & 0x850) == 0 && *(_QWORD *)(v7 + 16) > v3 )
      {
        v2 = *(_QWORD *)(v7 + 224);
        v3 = *(_QWORD *)(v7 + 16);
        if ( a1 )
          *a1 = *(_OWORD *)(v7 + 96);
      }
      v5 += 8;
      --v6;
    }
    while ( v6 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C553A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(qword_140C553A8);
  KeAbPostRelease((ULONG_PTR)qword_140C553A8);
  v8 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v8 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v2;
}
