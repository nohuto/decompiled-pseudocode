/*
 * XREFs of RtlStringCopyWorkerW @ 0xAC140
 * Callers:
 *     ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102 (-RtlStringCchCopyNW@@YGJPAGIPBGI@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  int v5; // edx
  _WORD *v6; // ecx
  size_t v8; // eax
  __int16 v9; // di

  if ( !v5 )
    goto LABEL_8;
  v8 = cchDest - (_DWORD)v6;
  do
  {
    if ( !pcchNewDestLength )
      break;
    v9 = *(_WORD *)((char *)v6 + v8);
    if ( !v9 )
      break;
    *v6++ = v9;
    pcchNewDestLength = (size_t *)((char *)pcchNewDestLength - 1);
    --v5;
  }
  while ( v5 );
  if ( !v5 )
LABEL_8:
    --v6;
  *v6 = 0;
  return v5 != 0 ? 0 : -2147483643;
}
