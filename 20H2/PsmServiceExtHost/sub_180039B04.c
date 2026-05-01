/*
 * XREFs of sub_180039B04 @ 0x180039B04
 * Callers:
 *     sub_180039A90 @ 0x180039A90 (sub_180039A90.c)
 * Callees:
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 *     sub_1800375E8 @ 0x1800375E8 (sub_1800375E8.c)
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 *     sub_180039EE4 @ 0x180039EE4 (sub_180039EE4.c)
 *     sub_180039F88 @ 0x180039F88 (sub_180039F88.c)
 */

void __fastcall sub_180039B04(PVOID pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax

  if ( *(_BYTE *)pv
    && (unsigned __int8)sub_180039F88(pv)
    && (unsigned __int8)sub_180039EE4(*((PSRWLOCK *)pv + 3))
    && !(unsigned __int8)sub_180039EA4() )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 4);
    if ( !*((_BYTE *)pv + 65) )
    {
      if ( !*((_QWORD *)pv + 6) )
      {
        ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_180038550, pv, 0LL);
        sub_1800375E8((struct _TP_TIMER **)pv + 6, ThreadpoolTimer);
      }
      sub_1800375A0((struct _TP_TIMER **)pv + 6, (_BYTE *)pv + 65, 300000LL);
    }
    if ( pv != (PVOID)-32LL )
      ReleaseSRWLockExclusive((PSRWLOCK)pv + 4);
  }
}
