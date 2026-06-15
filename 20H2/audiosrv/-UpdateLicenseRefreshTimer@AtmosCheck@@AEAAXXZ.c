/*
 * XREFs of ?UpdateLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1800087C4
 * Callers:
 *     _lambda_ec703c986ad76684d6e21ab1fd48d19c_::operator() @ 0x1800086A8 (_lambda_ec703c986ad76684d6e21ab1fd48d19c_--operator().c)
 *     _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073194 (_lambda_e0385c1b3dccbc375408929e287d16bb_--operator().c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x1801371AC (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180109524 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x1801348B4 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ @ 0x180135A08 (-GetNearestLicenseExpiryDate@AtmosCheck@@AEAA_KXZ.c)
 *     ?SetExpiryTimer@AtmosCheck@@AEAAX_K@Z @ 0x180136EC0 (-SetExpiryTimer@AtmosCheck@@AEAAX_K@Z.c)
 */

void __fastcall AtmosCheck::UpdateLicenseRefreshTimer(_QWORD *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int LastError; // eax
  DWORD v4; // r8d
  struct _TP_TIMER *v5; // rcx
  unsigned __int64 NearestLicenseExpiryDate; // rax
  unsigned __int64 v7; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+38h] [rbp-38h] BYREF
  struct _FILETIME *p_pftDueTime; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+64h] [rbp-Ch]

  ThreadpoolTimer = (struct _TP_TIMER *)pv[25];
  if ( !ThreadpoolTimer )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(AtmosCheck::StaticAtmosRefreshTimerCallback, pv, 0LL);
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
        tlgWriteTransfer_EventWriteTransfer((int)&dword_18019C4F0, (int)&dword_18016C44D, 0, 0, 3u, &v9);
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
  NearestLicenseExpiryDate = AtmosCheck::GetNearestLicenseExpiryDate((AtmosCheck *)pv);
  if ( NearestLicenseExpiryDate )
  {
    v7 = pv[29];
    if ( !v7 || NearestLicenseExpiryDate < v7 )
      AtmosCheck::SetExpiryTimer(pv, NearestLicenseExpiryDate);
  }
  else if ( pv[25] )
  {
    AtmosCheck::CancelLicenseRefreshTimer((AtmosCheck *)pv);
  }
}
