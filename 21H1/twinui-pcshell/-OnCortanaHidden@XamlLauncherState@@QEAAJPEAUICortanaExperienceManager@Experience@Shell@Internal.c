/*
 * XREFs of ?OnCortanaHidden@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180082BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18005FA04 (--$OnCortanaHidden@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4.c)
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180082C34 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall XamlLauncherState::OnCortanaHidden(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  int *v3; // rbx
  int v5; // [rsp+20h] [rbp-28h] BYREF
  XamlLauncherState *v6; // [rsp+28h] [rbp-20h]
  char v7; // [rsp+30h] [rbp-18h]

  *((_QWORD *)this + 123) = 0LL;
  v3 = (int *)((char *)this + 64);
  v5 = *((_DWORD *)this + 16);
  v6 = this;
  XamlLauncherState::PostCortanaOrSearchVisibility(this, 0, 0LL);
  if ( *v3 != 8 )
  {
    if ( *v3 == 9 )
    {
      *v3 = 11;
      goto LABEL_3;
    }
    if ( *v3 != 10 )
      goto LABEL_3;
  }
  *v3 = 0;
LABEL_3:
  v7 = 0;
  StartWindowTelemetry::OnCortanaHidden<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v5,
    v3);
  return 0LL;
}
