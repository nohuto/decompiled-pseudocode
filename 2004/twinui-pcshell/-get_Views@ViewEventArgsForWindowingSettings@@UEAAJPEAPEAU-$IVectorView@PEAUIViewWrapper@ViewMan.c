/*
 * XREFs of ?get_Views@ViewEventArgsForWindowingSettings@@UEAAJPEAPEAU?$IVectorView@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1802BACD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForWindowingSettings::get_Views(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 48);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        842LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
        (const char *)(unsigned int)v3);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x34D,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ViewEventArgs.h",
                           v4);
  }
  return result;
}
