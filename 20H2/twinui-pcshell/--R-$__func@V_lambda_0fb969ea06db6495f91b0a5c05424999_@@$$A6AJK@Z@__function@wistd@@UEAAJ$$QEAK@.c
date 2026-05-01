/*
 * XREFs of ??R?$__func@V_lambda_0fb969ea06db6495f91b0a5c05424999_@@$$A6AJK@Z@__function@wistd@@UEAAJ$$QEAK@Z @ 0x180148260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_0fb969ea06db6495f91b0a5c05424999_,long (unsigned long)>::operator()(
        __int64 a1,
        unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8), *a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E,
      (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
      (const char *)(unsigned int)v2);
  return v3;
}
