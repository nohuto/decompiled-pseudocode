/*
 * XREFs of sub_180029764 @ 0x180029764
 * Callers:
 *     sub_180029184 @ 0x180029184 (sub_180029184.c)
 *     sub_180029234 @ 0x180029234 (sub_180029234.c)
 *     sub_1800293D0 @ 0x1800293D0 (sub_1800293D0.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall sub_180029764(HKEY a1, const WCHAR *a2, DWORD a3, REGSAM a4, HKEY *a5)
{
  LSTATUS result; // eax

  result = RegCreateKeyExW(a1, a2, 0, 0LL, a3, a4, 0LL, a5, 0LL);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
