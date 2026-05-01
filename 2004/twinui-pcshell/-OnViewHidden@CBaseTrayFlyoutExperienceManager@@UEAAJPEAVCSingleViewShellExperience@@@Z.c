/*
 * XREFs of ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A13A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x180065CD8 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180067B30 (-ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x180067BA8 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x1800A0784 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x1800A28CC (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801BA794 (-Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewHidden(
        CBaseTrayFlyoutExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  CBaseTrayFlyoutExperienceManager *v2; // rdi
  int updated; // eax
  const struct _tlgProvider_t *v6; // rax
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseTrayFlyoutExperienceManager *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CBaseTrayFlyoutExperienceManager *)((char *)this - 48);
  updated = CBaseTrayFlyoutExperienceManager::UpdateFocusOnDismiss((CBaseTrayFlyoutExperienceManager *)((char *)this - 48));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x118,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)updated);
  CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(v2, 0);
  v6 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v12 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (_DWORD)v6,
      (unsigned int)&unk_180506451,
      0,
      v7,
      (__int64)&v12);
  }
  SingleViewLightDismissHelper::UnregisterWithLightDismiss((CBaseTrayFlyoutExperienceManager *)((char *)this + 240));
  v8 = CExperienceManagerAnimationHelper::End((CBaseTrayFlyoutExperienceManager *)((char *)this + 288));
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v8);
  CSingleViewShellExperience::ShowBorder((__int64)this + 24, 0, 0LL, 0LL, 0);
  v9 = *((_QWORD *)this + 42);
  if ( v9 )
    (*(void (__fastcall **)(__int64, struct CSingleViewShellExperience *))(*(_QWORD *)v9 + 80LL))(v9, a2);
  return 0LL;
}
