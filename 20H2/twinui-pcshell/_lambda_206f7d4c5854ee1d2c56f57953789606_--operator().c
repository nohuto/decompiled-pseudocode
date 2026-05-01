/*
 * XREFs of _lambda_206f7d4c5854ee1d2c56f57953789606_::operator() @ 0x180064EA0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_206f7d4c5854ee1d2c56f57953789606___::Run @ 0x180064D80 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_206f7d4c5854ee1d2c56f57953789606___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_206f7d4c5854ee1d2c56f57953789606_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  unsigned int i; // edi
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 16);
    for ( i = 0; i < v9; ++i )
    {
      v10 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 32LL))(
             *(_QWORD *)(a1 + 8),
             i,
             &GUID_c179334c_4295_40d3_bea1_c654d965605a,
             &v10) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))a1)(v10, v4);
      v6 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    return 0LL;
  }
}
