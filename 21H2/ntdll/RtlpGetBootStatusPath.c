/*
 * XREFs of RtlpGetBootStatusPath @ 0x1800EE344
 * Callers:
 *     RtlCreateBootStatusDataFile @ 0x1800EDE70 (RtlCreateBootStatusDataFile.c)
 * Callees:
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EE39C (RtlpGetBootStatusPathFromRegistry.c)
 */

const wchar_t *__fastcall RtlpGetBootStatusPath(const wchar_t **a1, char *a2)
{
  const wchar_t *result; // rax
  char v5; // r8

  result = (const wchar_t *)RtlpGetBootStatusPathFromRegistry();
  v5 = 0;
  if ( (int)result < 0 )
  {
    result = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( (MEMORY[0x7FFE02F0] & 0x400) == 0 )
      result = L"\\SystemRoot\\bootstat.dat";
    *a1 = result;
  }
  else
  {
    v5 = 1;
  }
  *a2 = v5;
  return result;
}
