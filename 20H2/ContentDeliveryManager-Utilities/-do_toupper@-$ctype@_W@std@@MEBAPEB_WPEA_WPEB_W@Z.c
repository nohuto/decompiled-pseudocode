/*
 * XREFs of ?do_toupper@?$ctype@_W@std@@MEBAPEB_WPEA_WPEB_W@Z @ 0x18002A110
 * Callers:
 *     <none>
 * Callees:
 *     _Towupper @ 0x1800B1C18 (_Towupper.c)
 */

wchar_t *__fastcall std::ctype<wchar_t>::do_toupper(__int64 a1, wchar_t *a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  wchar_t *v4; // rbx
  unsigned __int64 v5; // rdi
  const _Ctypevec *v6; // rbp

  v3 = 0LL;
  v4 = a2;
  v5 = (a3 - (unsigned __int64)a2 + 1) >> 1;
  if ( (unsigned __int64)a2 > a3 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (const _Ctypevec *)(a1 + 16);
    do
    {
      *v4 = Towupper(*v4, v6);
      ++v3;
      ++v4;
    }
    while ( v3 != v5 );
  }
  return v4;
}
