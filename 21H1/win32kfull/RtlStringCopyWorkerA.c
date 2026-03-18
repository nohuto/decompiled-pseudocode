/*
 * XREFs of RtlStringCopyWorkerA @ 0xE7C2A
 * Callers:
 *     _EditionInitializeWppLogging@8 @ 0xE7B64 (_EditionInitializeWppLogging@8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerA(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  _BYTE *v5; // ecx
  int v6; // edx
  char *v7; // esi
  char v8; // al

  v6 = 16;
  v7 = (char *)("win32kfull" - v5);
  do
  {
    if ( v6 == -2147483630 )
      break;
    v8 = v5[(_DWORD)v7];
    if ( !v8 )
      break;
    *v5++ = v8;
    --v6;
  }
  while ( v6 );
  if ( !v6 )
    --v5;
  *v5 = 0;
  return v6 != 0 ? 0 : -2147483643;
}
