/*
 * XREFs of wistd::__function::__func__lambda_6450c36ccd55cea2c20a5de9e1c92789__long___cdecl(unsigned_short___unsigned___int64_unsigned___int64__)_::operator() @ 0x1803B9960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_6450c36ccd55cea2c20a5de9e1c92789__long___cdecl_unsigned_short___unsigned___int64_unsigned___int64____::operator()(
        __int64 a1,
        LPWSTR *a2,
        DWORD *a3,
        _QWORD **a4)
{
  _QWORD *v4; // rbx
  DWORD v5; // eax
  const char *v6; // r9
  unsigned int v7; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a4;
  v5 = ExpandEnvironmentStringsW(**(LPCWSTR **)(a1 + 8), *a2, *a3);
  v7 = 0;
  *v4 = v5;
  if ( !v5 )
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x88,
                           (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
                           v6);
  return v7;
}
