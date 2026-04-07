/*
 * XREFs of ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18003D060
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x18003CF94 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180027BBC (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z @ 0x18003D118 (-CreateFormatConverterToPBGRA@@YAJPEAUIWICBitmapSource@@PEAPEAUIWICBitmap@@@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x180056228 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Update(CBitmapSource *this, HICON a2)
{
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct IWICBitmap *v8; // [rsp+50h] [rbp+18h] BYREF
  struct IWICBitmapSource *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, HICON, struct IWICBitmapSource **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                               + 39)
                                                                            + 176LL))(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
         a2,
         &v9);
  if ( v3 < 0 )
  {
    DoStackCaptureDirect(v3, 0x187u);
    v5 = 0;
  }
  else
  {
    v4 = CreateFormatConverterToPBGRA(v9, &v8);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x193u);
    }
    else
    {
      v6 = CBitmapSource::Update(this, v8);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x195u);
    }
  }
  if ( v8 )
    ((void (__fastcall *)(struct IWICBitmap *))v8->lpVtbl->Release)(v8);
  if ( v9 )
    ((void (__fastcall *)(struct IWICBitmapSource *))v9->lpVtbl->Release)(v9);
  return v5;
}
