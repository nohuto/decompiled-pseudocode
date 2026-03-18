/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x1C01802D4
 * Callers:
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C01801D8 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  NTSTATUS result; // eax
  __int64 v6; // r10
  size_t v7; // r11
  signed __int64 v8; // rbx

  result = 0;
  v6 = 0x7FFFLL;
  v7 = 0LL;
  if ( !cchDest )
    goto LABEL_13;
  v8 = (char *)pszDest - (char *)pszSrc;
  do
  {
    if ( !v6 )
      break;
    if ( !*pszSrc )
      break;
    *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v8) = *pszSrc;
    --v6;
    ++pszSrc;
    ++v7;
    --cchDest;
  }
  while ( cchDest );
  if ( !cchDest && v6 )
  {
LABEL_13:
    if ( *pszSrc )
      result = -2147483643;
  }
  *pcchNewDestLength = v7;
  return result;
}
