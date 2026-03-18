/*
 * XREFs of RtlStringCopyWorkerW_0 @ 0x140272358
 * Callers:
 *     RtlStringCbCopyNW @ 0x1402722F8 (RtlStringCbCopyNW.c)
 *     RtlStringCchCopyNW @ 0x14036EF30 (RtlStringCchCopyNW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCopyWorkerW_0(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  NTSTRSAFE_PWSTR v5; // r8
  signed __int64 v7; // r9
  wchar_t v8; // cx
  NTSTRSAFE_PWSTR v9; // rcx
  NTSTATUS result; // eax

  v5 = pszDest;
  if ( cchDest )
  {
    v7 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !cchToCopy )
        break;
      v8 = *(NTSTRSAFE_PWSTR)((char *)v5 + v7);
      if ( !v8 )
        break;
      *v5 = v8;
      --cchToCopy;
      ++v5;
      --cchDest;
    }
    while ( cchDest );
  }
  v9 = v5 - 1;
  result = cchDest == 0 ? 0x80000005 : 0;
  if ( cchDest )
    v9 = v5;
  *v9 = 0;
  return result;
}
