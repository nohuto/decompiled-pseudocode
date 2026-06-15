/*
 * XREFs of ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x180136EC0
 * Callers:
 *     ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800087C4 (-UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180109524 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1801348B4 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall AtmosCheck::SetExpiryTimer(char *pv, struct _FILETIME a2)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  signed int LastError; // eax
  signed int v6; // [rsp+30h] [rbp-58h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-48h] BYREF
  signed int *v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]

  AtmosCheck::CancelLicenseRefreshTimer((AtmosCheck *)pv);
  pftDueTime = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(pv + 56));
  ThreadpoolTimer = (struct _TP_TIMER *)*((_QWORD *)pv + 25);
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            (PTP_TIMER_CALLBACK)AtmosCheck::StaticAtmosRefreshTimerCallback,
                            pv,
                            0LL),
        (*((_QWORD *)pv + 25) = ThreadpoolTimer) != 0LL) )
  {
    SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0x7530u);
    *((struct _FILETIME *)pv + 29) = a2;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( (unsigned int)dword_18019C4F0 > 5 )
    {
      v11 = 0;
      v6 = LastError;
      v10 = 4;
      v9 = &v6;
      tlgWriteTransfer_EventWriteTransfer(
        (__int64)&dword_18019C4F0,
        (unsigned __int8 *)dword_18016C44D,
        0LL,
        0LL,
        3u,
        &v8);
    }
  }
  if ( pv != (char *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)(pv + 56));
}
