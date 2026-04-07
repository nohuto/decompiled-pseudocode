/*
 * XREFs of ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009BE9C
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800980C0 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180084818 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x18009B2DC (-UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementContinue(
        CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v2; // ebx
  const struct tagRECT *v3; // rdx
  CAnimatedGlassSheet *v4; // rcx
  int updated; // eax
  __int64 v6; // r8
  int v7; // eax
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (const struct tagRECT *)((char *)a2 + 16);
    v4 = *this;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    {
      updated = CAnimatedGlassSheet::UpdateRectAnimation(v4, v3, 0.2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0xAEu);
        return v2;
      }
    }
    else
    {
      v7 = CAnimatedGlassSheet::UpdateRectAnimation(v4, v3, 0.000001);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0xB2u);
        return v2;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        Microsoft_Windows_Dwm_Udwm_Provider_Context,
        (__int64)&UdwmGlassSheetAnimation_Update,
        v6,
        1LL,
        (__int64)v9);
  }
  return v2;
}
