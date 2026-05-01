/*
 * XREFs of sub_180029AC8 @ 0x180029AC8
 * Callers:
 *     sub_180029A00 @ 0x180029A00 (sub_180029A00.c)
 *     sub_180029B00 @ 0x180029B00 (sub_180029B00.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall sub_180029AC8(int a1)
{
  switch ( a1 )
  {
    case 4:
      return L"Pure";
    case 2:
      return L"Mixed";
    case 8:
      return L"System";
  }
  __int2c();
  return 0LL;
}
