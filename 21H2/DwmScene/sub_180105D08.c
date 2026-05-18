/*
 * XREFs of sub_180105D08 @ 0x180105D08
 * Callers:
 *     sub_18010489C @ 0x18010489C (sub_18010489C.c)
 *     sub_18010510C @ 0x18010510C (sub_18010510C.c)
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180125270 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Xinvalid_argument@std@@YAXPEBD@Z @ 0x18012543E (-_Xinvalid_argument@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall sub_180105D08(char *a1, _QWORD *a2, unsigned int a3)
{
  char *v5; // rbx
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 result; // rax
  char *v9; // [rsp+20h] [rbp-28h] BYREF

  v5 = a1;
  v6 = (_DWORD *)o__errno(a1, a2);
  v7 = v6;
  if ( *((_QWORD *)v5 + 3) >= 0x10uLL )
    v5 = *(char **)v5;
  *v6 = 0;
  result = o_strtol(v5, &v9, a3);
  if ( v5 == v9 )
  {
    std::_Xinvalid_argument("invalid stoi argument");
    __debugbreak();
  }
  if ( *v7 == 34 )
  {
    std::_Xout_of_range("stoi argument out of range");
    JUMPOUT(0x180105DA0LL);
  }
  if ( a2 )
    *a2 = v9 - v5;
  return result;
}
