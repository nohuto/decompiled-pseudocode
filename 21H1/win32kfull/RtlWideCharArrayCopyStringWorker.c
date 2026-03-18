/*
 * XREFs of RtlWideCharArrayCopyStringWorker @ 0x99934
 * Callers:
 *     ?RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0x998EA (-RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
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
  int v5; // edx
  int v6; // ecx
  const wchar_t *v7; // eax
  int v8; // ebx
  int v9; // edi
  NTSTATUS v10; // esi
  NTSTATUS result; // eax

  v7 = L"\\Registry\\Machine";
  v8 = 0;
  v9 = 0x7FFF;
  if ( !v5 )
    goto LABEL_7;
  do
  {
    if ( !v9 )
      break;
    if ( !*v7 )
      break;
    *(const wchar_t *)((char *)v7 + v6 - (_DWORD)L"\\Registry\\Machine") = *v7;
    ++v7;
    --v9;
    ++v8;
    --v5;
  }
  while ( v5 );
  v10 = 0;
  if ( !v5 && v9 && *v7 )
LABEL_7:
    v10 = -2147483643;
  result = v10;
  *(_DWORD *)pszDest = v8;
  return result;
}
