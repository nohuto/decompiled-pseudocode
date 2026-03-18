/*
 * XREFs of KiScheduleNextForegroundBoost @ 0x14039F200
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140290FCC (KiTryScheduleNextForegroundBoost.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
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
    KxAcquireSpinLock(&qword_140C2BB58);
    if ( *v1 == 1LL )
    {
      v3 = (_QWORD *)qword_140C2BB50;
      v2 = qword_140C2BB48 == (_QWORD)&qword_140C2BB48;
      if ( *(__int64 **)qword_140C2BB50 != &qword_140C2BB48 )
        __fastfail(3u);
      *v1 = &qword_140C2BB48;
      v1[1] = v3;
      *v3 = v1;
      qword_140C2BB50 = (__int64)v1;
    }
    KxReleaseSpinLock(&qword_140C2BB58);
    if ( v2 )
      KeInsertQueueDpc(&stru_140C2BB08, 0LL, 0LL);
  }
}
