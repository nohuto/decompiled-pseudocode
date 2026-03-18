/*
 * XREFs of RtlStringCopyWorkerA_0 @ 0x1CFEC7
 * Callers:
 *     ?RtlStringCbCopyA@@YGJPADIPBD@Z @ 0x1CFE94 (-RtlStringCbCopyA@@YGJPADIPBD@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerA_0(
        NTSTRSAFE_PSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZCH pszSrc,
        size_t cchToCopy)
{
  int v5; // edx
  _BYTE *v6; // ecx
  int v7; // esi
  size_t v8; // eax
  char v9; // bl

  if ( !v5 )
    goto LABEL_7;
  v7 = 2147483646;
  v8 = cchDest - (_DWORD)v6;
  do
  {
    if ( !v7 )
      break;
    v9 = v6[v8];
    if ( !v9 )
      break;
    *v6++ = v9;
    --v7;
    --v5;
  }
  while ( v5 );
  if ( !v5 )
LABEL_7:
    --v6;
  *v6 = 0;
  return v5 != 0 ? 0 : -2147483643;
}
