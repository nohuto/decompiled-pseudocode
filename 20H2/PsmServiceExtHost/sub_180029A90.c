/*
 * XREFs of sub_180029A90 @ 0x180029A90
 * Callers:
 *     sub_180029A00 @ 0x180029A00 (sub_180029A00.c)
 *     sub_180037A20 @ 0x180037A20 (sub_180037A20.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall sub_180029A90(HKEY a1, const WCHAR *a2, DWORD a3, const BYTE *lpData, DWORD cbData)
{
  LSTATUS result; // eax

  result = RegSetValueExW(a1, a2, 0, a3, lpData, cbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
