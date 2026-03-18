/*
 * XREFs of RtlStringCopyWorkerA @ 0x1C005F0A4
 * Callers:
 *     RtlStringCchCatA @ 0x1C005EFFC (RtlStringCchCatA.c)
 *     RtlStringCchCatNA @ 0x1C005F04C (RtlStringCchCatNA.c)
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
  NTSTATUS v5; // r8d
  signed __int64 v7; // r10
  char v8; // r9

  v5 = 0;
  if ( cchDest )
  {
    v7 = pszSrc - pszDest;
    while ( cchToCopy )
    {
      v8 = pszDest[v7];
      if ( v8 )
      {
        *pszDest = v8;
        --cchToCopy;
        ++pszDest;
        if ( --cchDest )
          continue;
      }
      if ( cchDest )
        break;
      goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    --pszDest;
    v5 = -2147483643;
  }
  *pszDest = 0;
  return v5;
}
