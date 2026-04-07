/*
 * XREFs of ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009C644
 * Callers:
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180098838 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180085078 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x18009B96C (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementEnd(
        CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v2; // ebx
  CAnimatedGlassSheet *v4; // rcx
  int updated; // eax
  __int64 v6; // r8
  int v7; // eax
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v4 = *this;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    {
      updated = CAnimatedGlassSheet::UpdateAlphaAnimation(v4, 0.0, 0.2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xCBu);
        return v2;
      }
    }
    else
    {
      v7 = CAnimatedGlassSheet::UpdateAlphaAnimation(v4, 0.0, 0.000001);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xCFu);
        return v2;
      }
    }
    this[2] = 0LL;
    *((_BYTE *)this + 24) = 0;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmGlassSheetFadeOut_Start,
        v6,
        1LL,
        (__int64)v9);
  }
  return v2;
}
