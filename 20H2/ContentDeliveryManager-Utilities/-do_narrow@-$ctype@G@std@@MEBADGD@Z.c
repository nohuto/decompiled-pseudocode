/*
 * XREFs of ?do_narrow@?$ctype@G@std@@MEBADGD@Z @ 0x18002A270
 * Callers:
 *     <none>
 * Callees:
 *     _Wcrtomb @ 0x1800B1940 (_Wcrtomb.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

char __fastcall std::ctype<unsigned short>::do_narrow(__int64 a1, wchar_t a2, char a3)
{
  int v4; // eax
  char Byte; // dl
  mbstate_t v7; // [rsp+20h] [rbp-28h] BYREF

  v7._Wchar = 0;
  v4 = Wcrtomb((char *)&v7._Byte, a2, &v7, (const _Cvtvec *)(a1 + 48));
  Byte = v7._Byte;
  if ( v4 != 1 )
    return a3;
  return Byte;
}
