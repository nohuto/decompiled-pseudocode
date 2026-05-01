/*
 * XREFs of _lambda_609f8103609db179fd7ee2c103db6114_::operator() @ 0x1802DDB54
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_609f8103609db179fd7ee2c103db6114___::Run @ 0x1802DFA20 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_609f8103609db179fd7ee2c103db6114___--.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180049D9C (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_609f8103609db179fd7ee2c103db6114_::operator()(HSTRING **a1)
{
  int v2; // eax
  int v3; // eax
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Windows::Internal::String::Initialize(*a1 + 35, a1[1]);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2450LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2);
    v3 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, _QWORD))(*(_QWORD *)(*a1)[13] + 136LL))((*a1)[13], *a1[1], *a1[2]);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2451LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v3);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x995,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v4);
  }
  return 0LL;
}
