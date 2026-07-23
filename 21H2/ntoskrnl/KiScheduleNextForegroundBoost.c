/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x140235F3C
 * Callers:
 *     KiTryScheduleNextForegroundBoost @ 0x14027A338 (KiTryScheduleNextForegroundBoost.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 */

void __fastcall KiScheduleNextForegroundBoost(__int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // di
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 880);
  if ( *(_QWORD *)(a1 + 880) == 1LL )
  {
    v2 = 0;
    KxAcquireSpinLock(&qword_140C31F38);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C31F30;
      v2 = qword_140C31F28 == (_QWORD)&qword_140C31F28;
      if ( *(__int64 **)qword_140C31F30 != &qword_140C31F28 )
        __fastfail(3u);
      *v1 = &qword_140C31F28;
      v1[1] = v3;
      *v3 = v1;
      qword_140C31F30 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140C31F38);
    if ( v2 )
      KeInsertQueueDpc(&stru_140C31EE8, 0LL, 0LL);
  }
}
