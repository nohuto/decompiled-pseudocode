/*
 * XREFs of ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x18009BA60
 * Callers:
 *     ?NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z @ 0x18009B240 (-NotifyFeedsButtonVisibilityChanged@ShellFeedsExperienceManagerImpl@@UEAAJE@Z.c)
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009B670 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_GetViewWrapper@ShellFeedsExperienceManagerImpl@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18009CDAC (-_GetViewWrapper@ShellFeedsExperienceManagerImpl@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInter.c)
 *     ?_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009CE54 (-_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_IsViewCloaked@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x18009CFC8 (-_IsViewCloaked@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x18009DE54 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@wil@@QEAA_NXZ @ 0x18009E4B4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsPerfImprovements@@@details@w.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRPCErrors_36398261@@@details@wil@@QEAA_NXZ @ 0x18009E538 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FixRPCErrors_36398261@@.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18014DE38 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801F8464 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::Poke(ShellFeedsExperienceManagerImpl *this, HSTRING string)
{
  PCWSTR StringRawBuffer; // rdi
  const struct _tlgProvider_t *v5; // rcx
  int v6; // ecx
  bool v7; // di
  unsigned int v8; // eax
  __int64 v9; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v5 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v5 > 5u && tlgKeywordOn((__int64)v5, 0x200000000000LL) )
  {
    v15 = 0x1000000LL;
    v16 = (__int64)StringRawBuffer;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
      v6,
      (int)&dword_180505BCA,
      (__int64)&v16,
      (__int64)&v15);
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FixRPCErrors_36398261>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FixRPCErrors_36398261>::GetImpl'::`2'::impl) )
  {
    v7 = !*(_QWORD *)ShellFeedsExperienceManagerImpl::_GetViewWrapper(this, &v15)
      || ShellFeedsExperienceManagerImpl::_IsViewCloaked(this);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    if ( !v7 )
      return 0LL;
    v8 = ShellFeedsExperienceManagerImpl::_Show(this, string, 0LL);
    v9 = 542LL;
    goto LABEL_14;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsPerfImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_FeedsPerfImprovements>::GetImpl'::`2'::impl) )
  {
    if ( !ShellFeedsExperienceManagerImpl::_IsViewCloaked(this) )
      return 0LL;
    v8 = ShellFeedsExperienceManagerImpl::_Show(this, string, 0LL);
    v9 = 559LL;
LABEL_14:
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)v8,
      v13);
    ShellFeedsExperienceManagerImpl::_Hide(this);
    *((_QWORD *)this + 21) = _Xtime_get_ticks();
    return 0LL;
  }
  v11 = ShellFeedsExperienceManagerImpl::_Show(this, string, 0LL);
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
  return v12;
}
