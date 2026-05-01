/*
 * XREFs of ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x1800D4A20
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetAndCreateIconFromGlyphAsync$_ResumeCoro$2 @ 0x1800D5AA0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetAndCreateIconFr_ea_1800D5AA0.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800D497C (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     ?IconFontFamily@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800D4E18 (-IconFontFamily@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Inte.c)
 *     ?IconGlyph@?$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800D4E60 (-IconGlyph@-$consume_Windows_Internal_UI_Shell_IWindowTabView@UIWindowTabView@Shell@UI@Internal@.c)
 *     ?RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z @ 0x1800D5724 (-RenderTransparentCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKAEBUCRect@Geometry@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18013BB60 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AE618 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x1801E7F38 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801F263C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1?DeleteDC@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803C4CD8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHDC__@@P6AHPEAU1@@Z$1-DeleteDC@@YAH0@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180420FEC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@Y.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180442714 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1-close@12.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@Z$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x180444DEC (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 */

// Hidden C++ exception states: #wind=12
HICON *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromGlyphForSize(
        __int64 a1,
        HICON *a2,
        __int64 a3)
{
  LONG v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  LONG v8; // edi
  const unsigned __int16 *StringRawBuffer; // rax
  HFONT v10; // r13
  HDC CompatibleDC; // r14
  HBITMAP v12; // r15
  PCWSTR v13; // r12
  unsigned __int16 v14; // r9
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow *v15; // rcx
  const struct Geometry::CRect *offset; // [rsp+28h] [rbp-D8h]
  HSTRING string; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v19; // [rsp+40h] [rbp-C0h] BYREF
  HBITMAP v20; // [rsp+48h] [rbp-B8h] BYREF
  HFONT v21; // [rsp+50h] [rbp-B0h] BYREF
  UINT32 v22; // [rsp+58h] [rbp-A8h] BYREF
  HDC v23; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+68h] [rbp-98h]
  unsigned int v25[4]; // [rsp+70h] [rbp-90h] BYREF
  UINT32 length; // [rsp+80h] [rbp-80h] BYREF
  HICON *v27; // [rsp+88h] [rbp-78h]
  void *ppvBits; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v29[16]; // [rsp+98h] [rbp-68h] BYREF
  BITMAPINFO pbmi; // [rsp+A8h] [rbp-58h] BYREF
  LOGFONTW lf; // [rsp+E0h] [rbp-20h] BYREF

  v3 = a3;
  v27 = a2;
  v24 = a3;
  v19 = 0LL;
  string = 0LL;
  v5 = a1 + 48;
  v6 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconGlyph(
         a1 + 48,
         &v20);
  winrt::hstring::operator=(&v19, v6);
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v20);
  v7 = winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabView<winrt::Windows::Internal::UI::Shell::IWindowTabView>::IconFontFamily(
         v5,
         &v20);
  winrt::hstring::operator=(&string, v7);
  winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v20);
  memset_0(&lf, 0, sizeof(lf));
  v8 = -HIDWORD(v24);
  lf.lfHeight = -HIDWORD(v24);
  lf.lfWeight = 400;
  lf.lfCharSet = 0;
  lf.lfQuality = 5;
  StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
  StringCchCopyW(lf.lfFaceName, 0x20uLL, StringRawBuffer);
  v10 = CreateFontIndirectW(&lf);
  v21 = v10;
  if ( v10 )
  {
    CompatibleDC = CreateCompatibleDC(0LL);
    v23 = CompatibleDC;
    if ( CompatibleDC )
    {
      pbmi.bmiHeader.biSize = 44;
      memset(&pbmi.bmiHeader.biSizeImage, 0, 24);
      pbmi.bmiHeader.biWidth = v3;
      pbmi.bmiHeader.biHeight = v8;
      *(_QWORD *)&pbmi.bmiHeader.biPlanes = 2097153LL;
      v12 = CreateDIBSection(CompatibleDC, &pbmi, 0, &ppvBits, 0LL, 0);
      v20 = v12;
      if ( v12 && (v13 = WindowsGetStringRawBuffer(v19, &v22), v22 == 1) )
      {
        wil::SelectObject(v29, CompatibleDC, v12);
        v25[0] = 0;
        v25[1] = 0;
        v25[2] = v3;
        v25[3] = HIDWORD(v24);
        GDIHelpers::RenderTransparentCenteredGlyph(CompatibleDC, (HDC)v10, (HFONT)*v13, v14, (unsigned int)v25, offset);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::select_result),&public: static void wil::select_result::close(wil::select_result),wistd::integral_constant<unsigned __int64,0>,wil::select_result,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(wil::select_result),&public: static void wil::select_result::close(wil::select_result),wistd::integral_constant<unsigned __int64,0>,wil::select_result,void *,0,std::nullptr_t>>>(v29);
        *a2 = winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIconFromBitmap(v15, v12);
      }
      else
      {
        *a2 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(&v20);
    }
    else
    {
      *a2 = 0LL;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HDC__ *,int (*)(HDC__ *),&int DeleteDC(HDC__ *),wistd::integral_constant<unsigned __int64,0>,HDC__ *,HDC__ *,0,std::nullptr_t>>>(&v23);
  }
  else
  {
    *a2 = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>>(&v21);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&v19);
  return a2;
}
