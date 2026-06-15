/*
 * XREFs of sub_1800087F4 @ 0x1800087F4
 * Callers:
 *     sub_1800086D8 @ 0x1800086D8 (sub_1800086D8.c)
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 *     sub_1801372AC @ 0x1801372AC (sub_1801372AC.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_1801349C4 @ 0x1801349C4 (sub_1801349C4.c)
 *     sub_180135AFC @ 0x180135AFC (sub_180135AFC.c)
 *     sub_180136FC0 @ 0x180136FC0 (sub_180136FC0.c)
 */

void __fastcall sub_1800087F4(_QWORD *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int LastError; // eax
  DWORD v4; // r8d
  struct _TP_TIMER *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-38h] BYREF
  struct _FILETIME *p_pftDueTime; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+64h] [rbp-Ch]

  ThreadpoolTimer = (struct _TP_TIMER *)pv[25];
  if ( !ThreadpoolTimer )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(sub_1800364B0, pv, 0LL);
    pv[25] = ThreadpoolTimer;
    if ( !ThreadpoolTimer )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( (unsigned int)dword_18019C4F0 > 5 )
      {
        v12 = 0;
        pftDueTime.dwLowDateTime = LastError;
        v11 = 4;
        p_pftDueTime = &pftDueTime;
        sub_180109634((int)&dword_18019C4F0, (int)&dword_18016C51D, 0, 0, 3u, &v9);
      }
      return;
    }
  }
  if ( !*((_BYTE *)pv + 209) )
  {
    if ( IsThreadpoolTimerSet(ThreadpoolTimer) )
      return;
    v5 = (struct _TP_TIMER *)pv[25];
    v4 = 86400000;
    goto LABEL_18;
  }
  if ( !*((_BYTE *)pv + 208) )
  {
    v4 = 0;
    v5 = ThreadpoolTimer;
LABEL_18:
    pftDueTime.dwHighDateTime = -1;
    pftDueTime.dwLowDateTime = 1294967296;
    SetThreadpoolTimer(v5, &pftDueTime, v4, 0x7530u);
    return;
  }
  v6 = sub_180135AFC(pv);
  if ( v6 )
  {
    v7 = pv[29];
    if ( !v7 || v6 < v7 )
      sub_180136FC0(pv);
  }
  else if ( pv[25] )
  {
    sub_1801349C4(pv);
  }
}
