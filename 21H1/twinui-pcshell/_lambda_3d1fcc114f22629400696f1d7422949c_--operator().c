/*
 * XREFs of _lambda_3d1fcc114f22629400696f1d7422949c_::operator() @ 0x18005D2A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3d1fcc114f22629400696f1d7422949c___::Run @ 0x18005D4A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_3d1fcc114f22629400696f1d7422949c___--.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002C3A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18005ABE8 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     ?UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@6@@Z @ 0x18005D4C8 (-UpdateDisplayRegions@WindowWrapperBase@@AEAAJPEAUIWindow@WindowManagement@ApplicationModel@Inte.c)
 *     ??$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__@@AEBKAEAK@Z @ 0x18005D8E8 (--$WindowCreated@IAEBQEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEBQEAUHWND__.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1802ACF28 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

__int64 __fastcall lambda_3d1fcc114f22629400696f1d7422949c_::operator()(int **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int *v4; // rcx
  HWND v5; // rsi
  _DWORD *v6; // rcx
  int *v7; // r14
  unsigned __int64 i; // r15
  __int64 v9; // rcx
  unsigned int v10; // ebx
  const WCHAR *StringRawBuffer; // rax
  int updated; // eax
  HWND Ancestor; // rax
  WINBOOL fPending; // [rsp+20h] [rbp-58h] BYREF
  DWORD v16[3]; // [rsp+24h] [rbp-54h] BYREF
  LPVOID Context[2]; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_QWORD *)a1[1];
  v3 = *((_QWORD *)*a1 + 16);
  *((_QWORD *)*a1 + 16) = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = a1[2];
  if ( (*a1)[76] != *v4 )
  {
    v5 = (HWND)*v4;
    *(_QWORD *)&Rect.left = v5;
    Context[0] = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
      && fPending )
    {
      Context[0] = &qword_1805A02A8;
      qword_1805A02A8 = &IamTraceLogging::`vftable';
      atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
      ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_1805A02A8);
      InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_1805A02A8);
    }
    v6 = (_DWORD *)*((_QWORD *)Context[0] + 1);
    if ( v6 && *v6 )
    {
      v16[0] = GetWindowThreadProcessId(v5, (LPDWORD)&fPending);
      LODWORD(Context[0]) = (*(__int64 (__fastcall **)(int *))(*((_QWORD *)*a1 + 2) + 288LL))(*a1 + 4);
      ViewManagerInteropTraceLogging::WindowCreated<unsigned int,HWND__ * const &,unsigned long const &,unsigned long &>(
        Context,
        &Rect,
        v16,
        &fPending);
    }
    v7 = *a1;
    if ( *a1[3] == 1 )
    {
      GetWindowBand(v5, v7 + 129);
      GetWindowRect(v5, &Rect);
      *((float *)*a1 + 124) = (float)Rect.left;
      *((float *)*a1 + 125) = (float)Rect.top;
      *((float *)*a1 + 126) = (float)(Rect.right - Rect.left);
      *((float *)*a1 + 127) = (float)(Rect.bottom - Rect.top);
      Ancestor = GetAncestor(v5, 1u);
      if ( Ancestor )
      {
        *(struct tagRECT *)Context = Rect;
        if ( MapWindowPoints(0LL, Ancestor, (LPPOINT)Context, 2u) )
        {
          *((float *)*a1 + 124) = (float)SLODWORD(Context[0]);
          *((float *)*a1 + 125) = (float)SHIDWORD(Context[0]);
          *((float *)*a1 + 126) = (float)(LODWORD(Context[1]) - LODWORD(Context[0]));
          *((float *)*a1 + 127) = (float)(HIDWORD(Context[1]) - HIDWORD(Context[0]));
        }
      }
      *((_BYTE *)*a1 + 512) = 1;
      EnumPropsExW(v5, LightweightPropertySet::s_PropEnumCallback, (LPARAM)(*a1 + 52));
    }
    else
    {
      for ( i = 0LL; i < *((_QWORD *)v7 + 27); ++i )
      {
        v9 = *(_QWORD *)(*((_QWORD *)v7 + 26) + 8 * i);
        v10 = *(_DWORD *)(v9 + 16);
        StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v9 + 8), 0LL);
        SetPropW(v5, StringRawBuffer, (HANDLE)v10);
      }
    }
    if ( IsWindowVisible(v5) )
      WindowWrapperBase::SetWindowId(*a1, *a1[2], *a1[3]);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
      1u);
    if ( *((_QWORD *)*a1 + 17) )
    {
      updated = WindowWrapperBase::UpdateDisplayRegions(*a1, *((_QWORD *)*a1 + 16));
      if ( updated < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x697,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)updated,
          fPending);
        JUMPOUT(0x180102E9FLL);
      }
    }
  }
  return 0LL;
}
