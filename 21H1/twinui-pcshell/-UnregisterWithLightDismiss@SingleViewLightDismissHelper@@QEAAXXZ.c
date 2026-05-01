/*
 * XREFs of ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x1800655B8
 * Callers:
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800653D4 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180099460 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     _lambda_2a6490a8cf13452a213c8a59fbbd282a_::operator() @ 0x1800A0F80 (_lambda_2a6490a8cf13452a213c8a59fbbd282a_--operator().c)
 *     ?OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801A8CF0 (-OnViewHidden@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801AB470 (-OnViewHidden@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BAF00 (-OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x1801CC534 (-DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?OnViewHidden@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801CD7C0 (-OnViewHidden@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801EAF68 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SingleViewLightDismissHelper::UnregisterWithLightDismiss(SingleViewLightDismissHelper *this)
{
  unsigned int v2; // edi
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v4; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-40h] BYREF
  int *v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]

  if ( *(_QWORD *)this )
  {
    v2 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = 0;
    if ( v2 )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_18059FFB8;
        qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
        qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v3);
        InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
      }
      v4 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( *v4 > 5u )
      {
        v6 = v2;
        v9 = (int *)&v6;
        v10 = 4;
        v11 = 0;
        tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_180500CAA, 0LL, 0LL, 3u, &v8);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 40LL))(*(_QWORD *)this, v2);
    }
  }
}
