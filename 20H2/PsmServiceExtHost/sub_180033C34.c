/*
 * XREFs of sub_180033C34 @ 0x180033C34
 * Callers:
 *     sub_18000CE90 @ 0x18000CE90 (sub_18000CE90.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 * Callees:
 *     memcmp @ 0x180046816 (memcmp.c)
 */

__int64 __fastcall sub_180033C34(__int64 a1, const wchar_t *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx

  v3 = a1 + 16;
  v4 = 0;
  if ( !wcsicmp(a2, (const wchar_t *)(a1 + 16)) )
    LOBYTE(v4) = memcmp(a2 + 232, (const void *)(v3 + 464), 0x48uLL) == 0;
  return v4;
}
