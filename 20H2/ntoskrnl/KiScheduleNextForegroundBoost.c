/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x140314968
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402DBE28 (KiTryScheduleNextForegroundBoost.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
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
    KxAcquireSpinLock(&qword_140C31D98);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C31D90;
      v2 = qword_140C31D88 == (_QWORD)&qword_140C31D88;
      if ( *(__int64 **)qword_140C31D90 != &qword_140C31D88 )
        __fastfail(3u);
      *v1 = &qword_140C31D88;
      v1[1] = v3;
      *v3 = v1;
      qword_140C31D90 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140C31D98);
    if ( v2 )
      KeInsertQueueDpc(&stru_140C31D48, 0LL, 0LL);
  }
}
