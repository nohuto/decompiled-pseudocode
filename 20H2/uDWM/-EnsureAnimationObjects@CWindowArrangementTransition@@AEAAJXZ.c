/*
 * XREFs of ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18009BD68
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18009C040 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180025E70 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800491A0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800537CC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005383C (_Init_thread_header.c)
 *     ?Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z @ 0x18009A7E4 (-Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z.c)
 *     ?Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18009B738 (-Create@CRippleEffect@@SAJPEAPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::EnsureAnimationObjects(struct CAnimatedGlassSheet **this)
{
  unsigned int v2; // ebx
  int v3; // eax
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  int v6; // eax
  struct CBitmapSource *v8[12]; // [rsp+30h] [rbp-78h] BYREF

  if ( dword_1800E5FD8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E5FD8);
    if ( dword_1800E5FD8 == -1 )
    {
      dword_1800E5F28 = -2147023728;
      Init_thread_footer(&dword_1800E5FD8);
    }
  }
  v2 = 0;
  if ( *this || (v3 = CAnimatedGlassSheet::Create(this), v2 = v3, v3 >= 0) )
  {
    if ( !this[1] )
    {
      Theme = (void *)CDesktopManager::GetTheme(0);
      BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(Theme, 59, 0xCu, 0LL, v8);
      v2 = BitmapsFromAtlasImageStrip;
      if ( BitmapsFromAtlasImageStrip >= 0 )
      {
        v6 = CRippleEffect::Create(v8, this + 1);
        v2 = v6;
        if ( v6 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E5F28, 1LL, v6, 0x45u);
      }
      else if ( (_WORD)BitmapsFromAtlasImageStrip == 1168 )
      {
        return 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E5F28, 1LL, BitmapsFromAtlasImageStrip, 0x3Fu);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E5F28, 1LL, v3, 0x2Du);
  }
  return v2;
}
