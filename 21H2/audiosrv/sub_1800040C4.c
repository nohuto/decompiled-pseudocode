/*
 * XREFs of sub_1800040C4 @ 0x1800040C4
 * Callers:
 *     sub_180004014 @ 0x180004014 (sub_180004014.c)
 *     sub_180004350 @ 0x180004350 (sub_180004350.c)
 *     sub_1800F9630 @ 0x1800F9630 (sub_1800F9630.c)
 *     sub_18012DC50 @ 0x18012DC50 (sub_18012DC50.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800040C4(HANDLE hObject)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  CloseHandle(hObject);
  SetLastError(LastError);
}
