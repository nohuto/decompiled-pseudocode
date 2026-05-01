/*
 * XREFs of _lambda_8088ac128f6a40b740480a4497e5982c_::operator() @ 0x1802D638C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8088ac128f6a40b740480a4497e5982c___::Run @ 0x1802D8250 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8088ac128f6a40b740480a4497e5982c___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_8088ac128f6a40b740480a4497e5982c_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h]
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = **a1;
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 128LL))(v2);
    v5 = 0;
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        253LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v3);
    if ( v9 )
    {
      if ( v9 == 1 )
        *(_DWORD *)*a1[1] = 4;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)**a1 + 104LL))(**a1, &v10);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          265LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v6);
      if ( (unsigned int)(v10 - 2) <= 1 )
        v5 = 2;
      *(_DWORD *)*a1[1] = v5;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x120,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v4);
  }
  return 0LL;
}
