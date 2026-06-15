/*
 * XREFs of ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180016310
 * Callers:
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x180013E44 (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CProcess::SetupProcessTerminationWatcher(PVOID pv)
{
  signed int v2; // ebx
  PTP_WAIT ThreadpoolWait; // rax
  signed int LastError; // eax

  v2 = 0;
  ThreadpoolWait = CreateThreadpoolWait(
                     CProcess::ProcessTerminationWatcherCallback,
                     pv,
                     (PTP_CALLBACK_ENVIRON)((char *)ThreadPool + 8));
  *((_QWORD *)pv + 55) = ThreadpoolWait;
  if ( ThreadpoolWait )
  {
    _InterlockedIncrement((volatile signed __int32 *)pv + 2);
    SetThreadpoolWait(*((PTP_WAIT *)pv + 55), *((HANDLE *)pv + 23), 0LL);
  }
  else
  {
    LastError = GetLastError();
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
  }
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v2);
    }
    AudPolicyLogError("CProcess::SetupProcessTerminationWatcher", 3843, v2);
  }
  return (unsigned int)v2;
}
