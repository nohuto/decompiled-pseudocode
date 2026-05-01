/*
 * XREFs of ?GetShouldShowTitleBarBackButton@CTaskWindow@@UEAA_NXZ @ 0x180064B50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18012AB18 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CTaskWindow::GetShouldShowTitleBarBackButton(CTaskWindow *this)
{
  char v1; // bl
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, HSTRING, int *); // rsi
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  int v8; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v9; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v10; // [rsp+40h] [rbp-18h] BYREF

  v1 = 0;
  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = *(int (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)v2 + 408LL);
    v10 = 0LL;
    v4 = WindowsCreateStringReference(L"BackVisible", 0xBu, &v9, &v10);
    if ( v4 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
      JUMPOUT(0x180064BF7LL);
    }
    if ( v3(v2, v10, &v8) >= 0 )
      return v8 == 0;
  }
  return v1;
}
