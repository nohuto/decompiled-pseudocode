/*
 * XREFs of _GetgpniFontsDirectoryAndScratch@12 @ 0xD4CB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__stdcall GetgpniFontsDirectoryAndScratch(PWSTR **a1, _DWORD *a2, _DWORD *a3)
{
  wchar_t *result; // eax

  *a1 = &gpniScratch.Name.Buffer;
  *a2 = &gpniScratch;
  result = gpwszFontsDirectory;
  *a3 = gpwszFontsDirectory;
  return result;
}
