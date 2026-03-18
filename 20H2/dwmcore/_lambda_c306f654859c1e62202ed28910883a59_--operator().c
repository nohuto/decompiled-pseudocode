/*
 * XREFs of _lambda_c306f654859c1e62202ed28910883a59_::operator() @ 0x1800EC690
 * Callers:
 *     wil::details::lambda_call__lambda_c306f654859c1e62202ed28910883a59___::_lambda_call__lambda_c306f654859c1e62202ed28910883a59___ @ 0x1800EC670 (wil--details--lambda_call__lambda_c306f654859c1e62202ed28910883a59___--_lambda_call__lambda_c306.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180184894 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_c306f654859c1e62202ed28910883a59_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 16);
  v3 = *(_QWORD *)(v1 + 200);
  v4 = *(_QWORD *)(*(_QWORD *)(v1 + 216) + 16LL);
  *(_BYTE *)(v2 + 1435) = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v2 + 264) + 152LL))(
         *(_QWORD *)(v2 + 264),
         v4,
         v3);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribbleframebuffer.cpp",
      (const char *)(unsigned int)v5,
      v7);
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x400,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\legacyswapchain.cpp",
      (const char *)v6,
      v8);
  }
}
