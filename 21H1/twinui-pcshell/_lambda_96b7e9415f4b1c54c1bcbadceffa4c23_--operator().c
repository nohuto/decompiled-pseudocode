/*
 * XREFs of _lambda_96b7e9415f4b1c54c1bcbadceffa4c23_::operator() @ 0x18042ABDC
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_96b7e9415f4b1c54c1bcbadceffa4c23__&_::Run @ 0x18042BC40 (wil--details--functor_wrapper_void__lambda_96b7e9415f4b1c54c1bcbadceffa4c23__-_--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_96b7e9415f4b1c54c1bcbadceffa4c23_::operator()(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 56LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 72LL),
         *(_QWORD *)(*(_QWORD *)a1 + 80LL));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 88LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 72LL),
         *(_QWORD *)(*(_QWORD *)a1 + 88LL));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 72LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 72LL),
         *(_QWORD *)(*(_QWORD *)a1 + 96LL));
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 72LL) + 144LL))(*(_QWORD *)(*(_QWORD *)a1 + 72LL));
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
      (const char *)(unsigned int)v5);
}
