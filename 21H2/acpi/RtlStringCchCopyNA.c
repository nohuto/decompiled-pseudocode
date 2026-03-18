/*
 * XREFs of RtlStringCchCopyNA @ 0x1C0020438
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C001D6EC (ACPIGetConvertToHardwareIDWide.c)
 *     ACPIGetProcessorIDWide @ 0x1C001E2B0 (ACPIGetProcessorIDWide.c)
 *     LoadDDB @ 0x1C00225B8 (LoadDDB.c)
 *     DumpObject @ 0x1C0068B08 (DumpObject.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 *     AMLILoadDDB @ 0x1C00BD7A8 (AMLILoadDDB.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToCopy)
{
  size_t v4; // r9
  signed __int64 v5; // r8
  char v6; // al
  NTSTRSAFE_PSTR v7; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( !cchDest )
      return result;
LABEL_13:
    *pszDest = 0;
    return result;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    result = -1073741811;
    goto LABEL_13;
  }
  v4 = cchToCopy - cchDest;
  v5 = pszSrc - pszDest;
  do
  {
    if ( !(v4 + cchDest) )
      break;
    v6 = pszDest[v5];
    if ( !v6 )
      break;
    *pszDest++ = v6;
    --cchDest;
  }
  while ( cchDest );
  v7 = pszDest - 1;
  if ( cchDest )
    v7 = pszDest;
  *v7 = 0;
  return cchDest == 0 ? 0x80000005 : 0;
}
