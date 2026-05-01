/*
 * XREFs of wistd::__function::__func__lambda_7827401fefe7309997d975e8d2eff2b0__long___cdecl(unsigned_short___unsigned___int64_unsigned___int64__)_::operator() @ 0x1803DA100
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_7827401fefe7309997d975e8d2eff2b0__long___cdecl_unsigned_short___unsigned___int64_unsigned___int64____::operator()(
        __int64 a1,
        LPWSTR *a2,
        unsigned __int64 *a3,
        _QWORD **a4)
{
  unsigned __int64 v4; // rbx
  _QWORD *v5; // rdi
  DWORD FullPathNameW; // eax
  const char *v7; // r9
  unsigned int v8; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a3;
  v5 = *a4;
  FullPathNameW = GetFullPathNameW(**(LPCWSTR **)(a1 + 8), *a3, *a2, 0LL);
  v8 = 0;
  *v5 = FullPathNameW;
  if ( FullPathNameW )
  {
    if ( FullPathNameW < v4 )
      *v5 = FullPathNameW + 1LL;
  }
  else
  {
    return (unsigned int)wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x9B,
                           (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                           v7);
  }
  return v8;
}
