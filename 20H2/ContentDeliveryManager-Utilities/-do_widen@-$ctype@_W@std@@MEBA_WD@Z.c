/*
 * XREFs of ?do_widen@?$ctype@_W@std@@MEBA_WD@Z @ 0x18002A180
 * Callers:
 *     <none>
 * Callees:
 *     _Mbrtowc @ 0x1800B03A0 (_Mbrtowc.c)
 */

__int64 __fastcall std::ctype<wchar_t>::do_widen(__int64 a1, char a2)
{
  int v2; // eax
  wchar_t v3; // cx
  wchar_t v5; // [rsp+40h] [rbp+8h] BYREF
  char v6; // [rsp+48h] [rbp+10h] BYREF
  mbstate_t v7; // [rsp+50h] [rbp+18h] BYREF

  v7._Wchar = 0;
  v6 = a2;
  v2 = Mbrtowc(&v5, &v6, 1uLL, &v7, (const _Cvtvec *)(a1 + 48));
  v3 = v5;
  if ( v2 < 0 )
    return (wchar_t)-1;
  return v3;
}
