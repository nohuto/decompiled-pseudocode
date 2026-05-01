/*
 * XREFs of sub_180025CF8 @ 0x180025CF8
 * Callers:
 *     sub_180020820 @ 0x180020820 (sub_180020820.c)
 *     sub_180021E10 @ 0x180021E10 (sub_180021E10.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180027A18 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_18002A5F4 @ 0x18002A5F4 (sub_18002A5F4.c)
 *     sub_1800355F0 @ 0x1800355F0 (sub_1800355F0.c)
 * Callees:
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 */

HSTRING_HEADER *__fastcall sub_180025CF8(HSTRING_HEADER *hstringHeader, const WCHAR **a2)
{
  HSTRING *v2; // r9
  const WCHAR *v4; // rcx
  unsigned __int64 v5; // rax
  HRESULT StringReference; // eax

  v2 = (HSTRING *)&hstringHeader[1];
  hstringHeader[1].Reserved.Reserved1 = 0LL;
  v4 = *a2;
  v5 = -1LL;
  do
    ++v5;
  while ( v4[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    sub_180011F90(0x80070216);
    __debugbreak();
  }
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    sub_180011F90(0x80070216);
    JUMPOUT(0x180025D70LL);
  }
  StringReference = WindowsCreateStringReference(v4, v5, hstringHeader, v2);
  if ( StringReference < 0 )
  {
    sub_180011F90(StringReference);
    __debugbreak();
  }
  return hstringHeader;
}
