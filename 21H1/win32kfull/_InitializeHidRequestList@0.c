/*
 * XREFs of _InitializeHidRequestList@0 @ 0xEC8FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__stdcall InitializeHidRequestList()
{
  int *result; // eax

  dword_275508 = (int)&gHidRequestTable;
  gHidRequestTable = (int)&gHidRequestTable;
  dword_275510 = (int)&dword_27550C;
  dword_27550C = (int)&dword_27550C;
  result = &dword_275514;
  dword_275518 = (int)&dword_275514;
  dword_275514 = (int)&dword_275514;
  return result;
}
