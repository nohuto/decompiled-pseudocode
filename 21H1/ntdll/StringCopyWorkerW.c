/*
 * XREFs of StringCopyWorkerW @ 0x4B2F1261
 * Callers:
 *     _EtwpGetRegDwordValue@12 @ 0x4B2F0EE6 (_EtwpGetRegDwordValue@12.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCopyWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  char *v5; // ecx
  int v6; // edx
  int v7; // esi
  __int16 v8; // ax

  v6 = 2048;
  v7 = (char *)L"ContainerType" - v5;
  do
  {
    if ( v6 == -2147481598 )
      break;
    v8 = *(_WORD *)&v5[v7];
    if ( !v8 )
      break;
    *(_WORD *)v5 = v8;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  if ( !v6 )
    v5 -= 2;
  *(_WORD *)v5 = 0;
  return v6 != 0 ? 0 : -2147024774;
}
