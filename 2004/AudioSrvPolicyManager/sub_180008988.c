/*
 * XREFs of sub_180008988 @ 0x180008988
 * Callers:
 *     sub_180038118 @ 0x180038118 (sub_180038118.c)
 *     sub_180038890 @ 0x180038890 (sub_180038890.c)
 *     sub_180038B40 @ 0x180038B40 (sub_180038B40.c)
 *     sub_180038D50 @ 0x180038D50 (sub_180038D50.c)
 *     sub_180038F40 @ 0x180038F40 (sub_180038F40.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180008988(HKEY hKey)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  RegCloseKey(hKey);
  SetLastError(LastError);
}
