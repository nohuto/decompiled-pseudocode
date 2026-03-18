/*
 * XREFs of RtlStringCopyWideCharArrayWorker @ 0x157D68
 * Callers:
 *     ?RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z @ 0x157CFD (-RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWideCharArrayWorker(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        const wchar_t *pszSrc,
        size_t cchSrcLength)
{
  int v5; // edx
  _WORD *v6; // ecx
  size_t v8; // esi

  if ( !v5 )
    goto LABEL_6;
  v8 = cchDest - (_DWORD)v6;
  do
  {
    if ( !pcchNewDestLength )
      break;
    *v6 = *(_WORD *)((char *)v6 + v8);
    ++v6;
    pcchNewDestLength = (size_t *)((char *)pcchNewDestLength - 1);
    --v5;
  }
  while ( v5 );
  if ( !v5 )
LABEL_6:
    --v6;
  *v6 = 0;
  return v5 != 0 ? 0 : -2147483643;
}
