/*
 * XREFs of RtlWideCharArrayCopyWorker @ 0xEF378
 * Callers:
 *     ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756 (-RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyWorker(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        const wchar_t *pszSrc,
        size_t cchSrcLength)
{
  int v5; // edx
  int v6; // ecx
  NTSTATUS v7; // edi
  int v8; // eax
  int v10; // ebx
  _WORD *v11; // esi
  NTSTATUS result; // eax

  v7 = 0;
  v8 = v6;
  v10 = 0;
  if ( !v5 )
    goto LABEL_6;
  v11 = (_WORD *)cchDest;
  do
  {
    if ( !pcchNewDestLength )
      break;
    *(_WORD *)((char *)v11 + v8 - cchDest) = *v11;
    ++v11;
    pcchNewDestLength = (size_t *)((char *)pcchNewDestLength - 1);
    ++v10;
    --v5;
  }
  while ( v5 );
  v7 = 0;
  if ( !v5 )
  {
LABEL_6:
    if ( pcchNewDestLength )
      v7 = -2147483643;
  }
  result = v7;
  *(_DWORD *)pszDest = v10;
  return result;
}
