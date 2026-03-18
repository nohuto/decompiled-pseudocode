/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1402EF6A4
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402ED278 (KiTryScheduleNextForegroundBoost.c)
 *     KiDirectSwitchThread @ 0x1402EE940 (KiDirectSwitchThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
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
    KxAcquireSpinLock(&qword_140C31CD8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C31CD0;
      v2 = qword_140C31CC8 == (_QWORD)&qword_140C31CC8;
      if ( *(__int64 **)qword_140C31CD0 != &qword_140C31CC8 )
        __fastfail(3u);
      *v1 = &qword_140C31CC8;
      v1[1] = v3;
      *v3 = v1;
      qword_140C31CD0 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140C31CD8);
    if ( v2 )
      KeInsertQueueDpc(&stru_140C31C88, 0LL, 0LL);
  }
}
