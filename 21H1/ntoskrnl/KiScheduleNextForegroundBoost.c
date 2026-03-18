/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x1403347E4
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1403323B8 (KiTryScheduleNextForegroundBoost.c)
 *     KiDirectSwitchThread @ 0x140333A80 (KiDirectSwitchThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
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
    KxAcquireSpinLock(&qword_140C31EF8);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C31EF0;
      v2 = qword_140C31EE8 == (_QWORD)&qword_140C31EE8;
      if ( *(__int64 **)qword_140C31EF0 != &qword_140C31EE8 )
        __fastfail(3u);
      *v1 = &qword_140C31EE8;
      v1[1] = v3;
      *v3 = v1;
      qword_140C31EF0 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140C31EF8);
    if ( v2 )
      KeInsertQueueDpc(&stru_140C31EA8, 0LL, 0LL);
  }
}
