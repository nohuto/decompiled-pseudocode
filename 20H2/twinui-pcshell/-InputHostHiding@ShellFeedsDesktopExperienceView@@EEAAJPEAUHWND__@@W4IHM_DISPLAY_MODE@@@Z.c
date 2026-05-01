/*
 * XREFs of ?InputHostHiding@ShellFeedsDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1800A6FB0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009CEB4 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x1800A7114 (-IsViewVisible@ShellFeedsDesktopExperienceView@@AEAA_NXZ.c)
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A86DC (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801740DC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::InputHostHiding(__int64 a1)
{
  ShellFeedsDesktopExperienceView *v1; // rbx
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rcx
  int v4; // ecx
  int v5; // r9d
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = (ShellFeedsDesktopExperienceView *)(a1 - 40);
  if ( !ShellFeedsDesktopExperienceView::IsViewVisible((ShellFeedsDesktopExperienceView *)(a1 - 40)) )
    return 0LL;
  v3 = FeedsMicrosoftTelemetryProvider::Provider(v2);
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( tlgKeywordOn((__int64)v3, 0x200000000000LL) )
    {
      v10 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v4,
        (unsigned int)&unk_1805077A1,
        0,
        v5,
        (__int64)&v10);
    }
  }
  v6 = ShellFeedsDesktopExperienceView::PositionShellFeedsWindow(v1);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x21F,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
