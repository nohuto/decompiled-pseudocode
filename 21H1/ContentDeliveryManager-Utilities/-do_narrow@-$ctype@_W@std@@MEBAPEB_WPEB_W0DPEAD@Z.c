/*
 * XREFs of ?do_narrow@?$ctype@_W@std@@MEBAPEB_WPEB_W0DPEAD@Z @ 0x1800280C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wcrtomb @ 0x1800AF730 (_Wcrtomb.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

wchar_t *__fastcall std::ctype<wchar_t>::do_narrow(__int64 a1, wchar_t *a2, unsigned __int64 a3, char a4, _BYTE *a5)
{
  wchar_t *v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  const _Cvtvec *v10; // r14
  wchar_t v11; // dx
  int v12; // eax
  char Byte; // dl
  mbstate_t v15; // [rsp+20h] [rbp-48h] BYREF

  v7 = a2;
  v8 = 0LL;
  v9 = (a3 - (unsigned __int64)a2 + 1) >> 1;
  if ( (unsigned __int64)a2 > a3 )
    v9 = 0LL;
  if ( v9 )
  {
    v10 = (const _Cvtvec *)(a1 + 48);
    do
    {
      v11 = *v7;
      v15._Wchar = 0;
      v12 = Wcrtomb((char *)&v15._Byte, v11, &v15, v10);
      Byte = v15._Byte;
      if ( v12 != 1 )
        Byte = a4;
      ++v7;
      *a5 = Byte;
      ++v8;
      ++a5;
    }
    while ( v8 != v9 );
  }
  return v7;
}
