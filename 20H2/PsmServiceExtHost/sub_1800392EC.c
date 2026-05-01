/*
 * XREFs of sub_1800392EC @ 0x1800392EC
 * Callers:
 *     sub_180046410 @ 0x180046410 (sub_180046410.c)
 * Callees:
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 *     sub_1800375E8 @ 0x1800375E8 (sub_1800375E8.c)
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 *     sub_18003A0E8 @ 0x18003A0E8 (sub_18003A0E8.c)
 */

void __fastcall sub_1800392EC(char *pv, __int64 a2, __int64 a3)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  if ( *pv && !(unsigned __int8)sub_180039EA4() )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 1);
    v6 = 16669694;
    v7 = a3;
    sub_18003A0E8(pv + 48, &v6, 16LL);
    if ( !pv[24] )
    {
      if ( !*((_QWORD *)pv + 2) )
      {
        ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)pfnti, pv, 0LL);
        sub_1800375E8((struct _TP_TIMER **)pv + 2, ThreadpoolTimer);
      }
      sub_1800375A0((struct _TP_TIMER **)pv + 2, pv + 24, 300000LL);
    }
    if ( pv != (char *)-8LL )
      ReleaseSRWLockExclusive((PSRWLOCK)pv + 1);
  }
}
