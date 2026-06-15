/*
 * XREFs of ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180011D1C
 * Callers:
 *     ??_ECApplication@@MEAAPEAXI@Z @ 0x180010090 (--_ECApplication@@MEAAPEAXI@Z.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x180011B94 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020668 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 * Callees:
 *     WPP_SF_S @ 0x18000A610 (WPP_SF_S.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CleanupDelayedInteractivityNotification(CApplication *this)
{
  struct _TP_TIMER *v2; // r10
  __int64 v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 496);
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_QWORD *)this + 67) )
  {
    v2 = (struct _TP_TIMER *)*((_QWORD *)this + 67);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids,
        *((const wchar_t **)this + 3));
      v2 = (struct _TP_TIMER *)*((_QWORD *)this + 67);
    }
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 67), 1);
    v3 = *((_QWORD *)this + 68);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
    *((_QWORD *)this + 68) = 0LL;
  }
  if ( v6 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v6 = 0;
  }
  return 0LL;
}
