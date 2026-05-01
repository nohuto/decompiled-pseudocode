/*
 * XREFs of sub_18000BF98 @ 0x18000BF98
 * Callers:
 *     sub_18003EB10 @ 0x18003EB10 (sub_18003EB10.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000BF98(HANDLE hObject)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  CloseHandle(hObject);
  SetLastError(LastError);
}
