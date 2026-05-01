/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fcbb9479051b723b4fda3c8d325a8246___::Run @ 0x1800BDCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CreationThreadDispatcher::RunSync__lambda_852553b0b4df132fc733892ff7774cb3__&_ @ 0x1800BCD28 (CreationThreadDispatcher--RunSync__lambda_852553b0b4df132fc733892ff7774cb3__-_.c)
 */

int *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fcbb9479051b723b4fda3c8d325a8246___::Run(
        __int64 a1)
{
  int v2; // eax
  int v3; // ebx
  int *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CreationThreadDispatcher::RunSync__lambda_852553b0b4df132fc733892ff7774cb3____(
         *(_QWORD *)(a1 + 16),
         *(__int64 **)(a1 + 24));
  v3 = v2;
  if ( v2 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CreationThreadDispatcher.h",
      (const char *)(unsigned int)v2);
  result = *(int **)(a1 + 32);
  *result = v3;
  return result;
}
