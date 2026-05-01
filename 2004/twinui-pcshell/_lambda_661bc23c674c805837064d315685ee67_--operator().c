/*
 * XREFs of _lambda_661bc23c674c805837064d315685ee67_::operator() @ 0x1804793BC
 * Callers:
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x18047918C (Windows--Internal--AssignedAccess--AssignedAccessConfigurationHelper--FindUserInfoIf__lambda_661.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?close_reset@?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAUHSTRING__@@@Z @ 0x1801B2408 (-close_reset@-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@ZU-$integ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_661bc23c674c805837064d315685ee67_::operator()(const wchar_t ***a1, __int64 a2)
{
  char v4; // bl
  const wchar_t *StringRawBuffer; // rax
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF
  HSTRING string; // [rsp+50h] [rbp+18h] BYREF

  string = 0LL;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 88LL))(a2, &v7) < 0 )
    goto LABEL_7;
  v4 = 1;
  if ( v7 > 1 )
    goto LABEL_7;
  if ( string )
    wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>::close_reset(string);
  if ( (*(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL))(a2, &string) < 0
    || (StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL), _o__wcsicmp(**a1, StringRawBuffer)) )
  {
LABEL_7:
    v4 = 0;
  }
  if ( string )
    WindowsDeleteString(string);
  return v4;
}
