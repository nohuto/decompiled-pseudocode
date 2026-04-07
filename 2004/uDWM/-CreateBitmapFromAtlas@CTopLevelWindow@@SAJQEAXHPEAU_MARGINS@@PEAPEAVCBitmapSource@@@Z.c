/*
 * XREFs of ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800468BC
 * Callers:
 *     ?Initialize@CDirectTouchVisual@@MEAAJXZ @ 0x180046160 (-Initialize@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180046A04 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJXZ @ 0x1800A23B0 (-Initialize@CTextTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CTouchDragVisual@@MEAAJXZ @ 0x1800A42A0 (-Initialize@CTouchDragVisual@@MEAAJXZ.c)
 *     ?Initialize@CTetherVisual@@MEAAJXZ @ 0x1800A5230 (-Initialize@CTetherVisual@@MEAAJXZ.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJXZ @ 0x1800A5A20 (-Initialize@CPenBarrelKeyVisual@@MEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800A6154 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJXZ @ 0x1800A6C00 (-Initialize@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180047578 (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180049944 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800537BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005382C (_Init_thread_header.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapFromAtlas(
        void *const a1,
        int iPartId,
        struct _MARGINS *a3,
        struct CBitmapSource **a4)
{
  HRESULT ThemeMargins; // eax
  unsigned int v9; // ebx
  HRESULT ThemeRect; // eax
  const struct CBitmapSource *AtlasImageFromTheme; // rax
  int v12; // eax
  struct tagRECT pRect; // [rsp+40h] [rbp-48h] BYREF

  if ( dword_1800E7DAC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E7DAC);
    if ( dword_1800E7DAC == -1 )
    {
      dword_1800E5100 = -2147023728;
      Init_thread_footer(&dword_1800E7DAC);
    }
  }
  if ( a3 && (ThemeMargins = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a3), v9 = ThemeMargins, ThemeMargins < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E5100, 1LL, ThemeMargins, 0x1BAu);
  }
  else
  {
    ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &pRect);
    v9 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E5100, 1LL, ThemeRect, 0x1BEu);
    }
    else
    {
      InflateRect(&pRect, -1, -1);
      AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
      v12 = CBitmapSource::Create(AtlasImageFromTheme, &pRect, a3, a4);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E5100, 1LL, v12, 0x1C6u);
    }
  }
  return v9;
}
