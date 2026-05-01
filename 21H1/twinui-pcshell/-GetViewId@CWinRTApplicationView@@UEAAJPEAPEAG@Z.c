/*
 * XREFs of ?GetViewId@CWinRTApplicationView@@UEAAJPEAPEAG@Z @ 0x1800347E0
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18000BDA0 (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z @ 0x18000CF40 (-SetShowInSwitchers@CWinRTApplicationView@@UEAAJH@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800348A0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWinRTApplicationView::GetViewId(CWinRTApplicationView *this, unsigned __int16 **a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // eax
  void *v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-30h] BYREF
  LPVOID pv[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *a2 = 0LL;
  pv[0] = 0LL;
  v3 = *((_QWORD *)this + 24);
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v4 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v3 + 40LL))(v3, pv);
  if ( v4 >= 0 )
  {
    memset(v8, 0, sizeof(v8));
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           v8,
           L"WRT:%s",
           pv[0]);
    v4 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
        (const char *)(unsigned int)v5,
        v8[0]);
      v6 = (void *)v8[0];
    }
    else
    {
      v6 = 0LL;
      *a2 = (unsigned __int16 *)v8[0];
      v4 = 0;
    }
    if ( v6 )
      CoTaskMemFree(v6);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)v4;
}
