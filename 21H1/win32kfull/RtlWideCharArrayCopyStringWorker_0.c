/*
 * XREFs of RtlWideCharArrayCopyStringWorker_0 @ 0xD7796
 * Callers:
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlWideCharArrayCopyStringWorker_0(
        wchar_t *pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cchToCopy)
{
  int v5; // edx
  int v6; // ecx
  _WORD *v7; // eax
  NTSTATUS v8; // esi
  int v9; // ebx
  int v10; // edi
  size_t v11; // ecx
  NTSTATUS result; // eax

  v7 = (_WORD *)cchDest;
  v8 = 0;
  v9 = 0;
  v10 = 0x7FFF;
  if ( !v5 )
    goto LABEL_13;
  v11 = v6 - cchDest;
  do
  {
    if ( !v10 )
      break;
    if ( !*v7 )
      break;
    *(_WORD *)((char *)v7 + v11) = *v7;
    ++v7;
    --v10;
    ++v9;
    --v5;
  }
  while ( v5 );
  v8 = 0;
  if ( !v5 )
  {
    if ( v10 )
    {
LABEL_13:
      if ( *v7 )
        v8 = -2147483643;
    }
  }
  result = v8;
  *(_DWORD *)pszDest = v9;
  return result;
}
