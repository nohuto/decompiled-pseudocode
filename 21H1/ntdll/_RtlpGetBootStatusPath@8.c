/*
 * XREFs of _RtlpGetBootStatusPath@8 @ 0x4B350D73
 * Callers:
 *     _RtlCreateBootStatusDataFile@4 @ 0x4B350940 (_RtlCreateBootStatusDataFile@4.c)
 * Callees:
 *     _RtlpGetBootStatusPathFromRegistry@4 @ 0x4B350DA9 (_RtlpGetBootStatusPathFromRegistry@4.c)
 */

char __fastcall RtlpGetBootStatusPath(const wchar_t **a1, char *a2)
{
  char result; // al
  const wchar_t *v5; // eax

  if ( RtlpGetBootStatusPathFromRegistry() < 0 )
  {
    v5 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( (MEMORY[0x7FFE02F0] & 0x400) == 0 )
      v5 = L"\\SystemRoot\\bootstat.dat";
    *a1 = v5;
    result = 0;
  }
  else
  {
    result = 1;
  }
  *a2 = result;
  return result;
}
