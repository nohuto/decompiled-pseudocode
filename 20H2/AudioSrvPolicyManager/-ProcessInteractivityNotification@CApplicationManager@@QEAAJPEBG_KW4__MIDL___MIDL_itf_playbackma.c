/*
 * XREFs of ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020668
 * Callers:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x1800208B0 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     PbmReportAppInteractivityChange @ 0x1800230D0 (PbmReportAppInteractivityChange.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019A8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate.c)
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x1800113D0 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180011444 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z @ 0x180011B94 (-PostDelayedInteractivityNotification@CApplication@@IEAAJPEAVIPBMWorkItem@@@Z.c)
 *     ?CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ @ 0x180011D1C (-CleanupDelayedInteractivityNotification@CApplication@@IEAAJXZ.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001DBC4 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z @ 0x18002C5AC (-CreateInstance@CAppStateChangedWorkItem@@SAJPEBG_KHKPEAPEAVIPBMWorkItem@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ProcessInteractivityNotification(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edi
  int Application; // ebx
  CApplication *v15; // r14
  struct IPBMWorkItem *v16; // rdi
  int v17; // eax
  int v19; // [rsp+40h] [rbp-30h] BYREF
  struct IPBMWorkItem *v20; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22[3]; // [rsp+58h] [rbp-18h] BYREF
  CApplication *v23; // [rsp+A0h] [rbp+30h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v22[1] = (__int64)v9;
  v19 = 0;
  v20 = 0LL;
  v10 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v10 > 4u )
  {
    LODWORD(v23) = a4 == 0;
    v21 = a3;
    v22[0] = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      (unsigned __int8 *)dword_18004638C,
      v11,
      v12,
      (void **)v22,
      (__int64)&v21,
      (__int64)&v23);
  }
  v13 = 1;
  Application = CApplicationManager::GetApplication((CApplicationManager *)a1, a2, a3, a5, &v23, 1, &v19);
  if ( Application < 0 )
    goto LABEL_24;
  EnterCriticalSection(v9);
  v22[0] = (__int64)v9;
  v15 = v23;
  if ( a4 == 2
    && *((_DWORD *)v23 + 52)
    && !(unsigned int)CApplication::GetTotalActiveRenderStreamCount(v23)
    && (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v15) )
  {
    if ( v9 )
      LeaveCriticalSection(v9);
  }
  else
  {
    if ( v9 )
      LeaveCriticalSection(v9);
    v13 = 0;
  }
  Application = CAppStateChangedWorkItem::CreateInstance(a2, a3, a4 == 0, a5, &v20);
  if ( Application < 0 )
    goto LABEL_20;
  if ( v13 )
  {
    v16 = v20;
    v17 = CApplication::PostDelayedInteractivityNotification((const wchar_t **)v15, (const wchar_t *)v20);
    goto LABEL_18;
  }
  Application = CApplication::CleanupDelayedInteractivityNotification(v15);
  if ( Application < 0 )
  {
LABEL_20:
    v16 = v20;
    goto LABEL_21;
  }
  v16 = v20;
  v17 = (*(__int64 (__fastcall **)(struct IPBMWorkItem *))(*(_QWORD *)v20 + 16LL))(v20);
LABEL_18:
  Application = v17;
  if ( v17 >= 0 )
    v16 = 0LL;
LABEL_21:
  if ( v16 )
    (*(void (__fastcall **)(struct IPBMWorkItem *, __int64))(*(_QWORD *)v16 + 8LL))(v16, 1LL);
  if ( Application < 0 )
  {
LABEL_24:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Bu,
        &WPP_386a857d2e283c5fe15986819513c374_Traceguids,
        Application);
    }
    AudPolicyLogError("CApplicationManager::ProcessInteractivityNotification", 3238, Application);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return (unsigned int)Application;
}
