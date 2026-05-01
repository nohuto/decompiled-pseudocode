/*
 * XREFs of sub_180065A10 @ 0x180065A10
 * Callers:
 *     sub_180039A90 @ 0x180039A90 (sub_180039A90.c)
 * Callees:
 *     sub_1800375A0 @ 0x1800375A0 (sub_1800375A0.c)
 *     sub_1800375E8 @ 0x1800375E8 (sub_1800375E8.c)
 *     sub_180039EA4 @ 0x180039EA4 (sub_180039EA4.c)
 *     sub_18003A0E8 @ 0x18003A0E8 (sub_18003A0E8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

void __fastcall sub_180065A10(PVOID pv, int a2, __int16 a3, int a4)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v9; // [rsp+20h] [rbp-58h] BYREF
  __int16 v10; // [rsp+24h] [rbp-54h]
  __int16 v11; // [rsp+26h] [rbp-52h]
  int v12; // [rsp+28h] [rbp-50h]

  if ( *(_BYTE *)pv && !sub_180039EA4() )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 5);
    v11 = 0;
    v9 = a2;
    v10 = a3;
    v12 = a4;
    sub_18003A0E8((__int64)pv + 248, &v9, 0xCuLL);
    if ( !*((_BYTE *)pv + 64) )
    {
      if ( !*((_QWORD *)pv + 7) )
      {
        ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_180063DD0, pv, 0LL);
        sub_1800375E8((struct _TP_TIMER **)pv + 7, ThreadpoolTimer);
      }
      sub_1800375A0((struct _TP_TIMER **)pv + 7, (_BYTE *)pv + 64, 5000LL);
    }
    if ( pv != (PVOID)-40LL )
      ReleaseSRWLockExclusive((PSRWLOCK)pv + 5);
  }
}
