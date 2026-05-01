/*
 * XREFs of sub_180029148 @ 0x180029148
 * Callers:
 *     sub_180029064 @ 0x180029064 (sub_180029064.c)
 *     sub_180029B00 @ 0x180029B00 (sub_180029B00.c)
 *     sub_18002A918 @ 0x18002A918 (sub_18002A918.c)
 *     sub_18004226C @ 0x18004226C (sub_18004226C.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall sub_180029148(HKEY a1, const WCHAR *a2, BYTE *lpData, DWORD *lpcbData)
{
  LSTATUS result; // eax

  result = RegQueryValueExW(a1, a2, 0LL, 0LL, lpData, lpcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
