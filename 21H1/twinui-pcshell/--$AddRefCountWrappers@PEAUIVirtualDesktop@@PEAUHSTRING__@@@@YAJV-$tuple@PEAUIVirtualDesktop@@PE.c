/*
 * XREFs of ??$AddRefCountWrappers@PEAUIVirtualDesktop@@PEAUHSTRING__@@@@YAJV?$tuple@PEAUIVirtualDesktop@@PEAUHSTRING__@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@1@@Z @ 0x18040EC08
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification2@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x18040EFF4 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification2@@PEAUIVirtualDesktop@@PEAUH.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18008459C (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _lambda_cafe84ea791b9a72e56862a03cfc88cc_::operator()_IVirtualDesktop___&_HSTRING_____&_ @ 0x18040E954 (_lambda_cafe84ea791b9a72e56862a03cfc88cc_--operator()_IVirtualDesktop___-_HSTRING_____-_.c)
 */

__int64 __fastcall AddRefCountWrappers<IVirtualDesktop *,HSTRING__ *>(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  HSTRING v4; // rax
  HSTRING string; // [rsp+20h] [rbp-10h] BYREF
  __int64 v7; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  char *v9; // [rsp+50h] [rbp+20h] BYREF
  char **v10; // [rsp+60h] [rbp+30h] BYREF
  char ***v11; // [rsp+68h] [rbp+38h] BYREF

  LODWORD(v9) = 0;
  v10 = &v9;
  v11 = &v10;
  lambda_cafe84ea791b9a72e56862a03cfc88cc_::operator()_IVirtualDesktop_____HSTRING_______(
    (int ***)&v11,
    (__int64 *)&string,
    a1 + 1,
    a1);
  v3 = (unsigned int)v9;
  if ( (int)v9 >= 0 )
  {
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)(a2 + 8), &v7);
    WindowsDeleteString(*(HSTRING *)a2);
    v4 = string;
    string = 0LL;
    v3 = 0;
    *(_QWORD *)a2 = v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  WindowsDeleteString(string);
  return v3;
}
