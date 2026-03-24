/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1402B7D5C
 * Callers:
 *     KiDirectSwitchThread @ 0x14024C840 (KiDirectSwitchThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140258DC8 (KiTryScheduleNextForegroundBoost.c)
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
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
    KxAcquireSpinLock(&qword_140C31FB8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C31FB0;
      v2 = qword_140C31FA8 == (_QWORD)&qword_140C31FA8;
      if ( *(__int64 **)qword_140C31FB0 != &qword_140C31FA8 )
        __fastfail(3u);
      *v1 = &qword_140C31FA8;
      v1[1] = v3;
      *v3 = v1;
      qword_140C31FB0 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140C31FB8);
    if ( v2 )
      KeInsertQueueDpc(&stru_140C31F68, 0LL, 0LL);
  }
}
