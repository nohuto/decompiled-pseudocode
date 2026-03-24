/*
 * XREFs of RtlStringCchCopyNA @ 0x1C00288C8
 * Callers:
 *     ACPIGetConvertToHardwareIDWide @ 0x1C000C70C (ACPIGetConvertToHardwareIDWide.c)
 *     LoadDDB @ 0x1C002372C (LoadDDB.c)
 *     ACPIGetProcessorIDWide @ 0x1C00276E0 (ACPIGetProcessorIDWide.c)
 *     DumpObject @ 0x1C0067738 (DumpObject.c)
 *     ProcessLoadTable @ 0x1C006A1F0 (ProcessLoadTable.c)
 *     AMLILoadDDB @ 0x1C00BE388 (AMLILoadDDB.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToCopy)
{
  NTSTATUS v4; // r10d
  size_t v5; // r9
  signed __int64 v6; // r8
  char v7; // al
  NTSTRSAFE_PSTR v8; // rax

  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( !cchDest )
      return v4;
LABEL_16:
    *pszDest = 0;
    return v4;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    v4 = -1073741811;
    goto LABEL_16;
  }
  if ( cchDest )
  {
    v5 = cchToCopy - cchDest;
    v6 = pszSrc - pszDest;
    do
    {
      if ( !(v5 + cchDest) )
        break;
      v7 = pszDest[v6];
      if ( !v7 )
        break;
      *pszDest++ = v7;
      --cchDest;
    }
    while ( cchDest );
  }
  v8 = pszDest - 1;
  if ( cchDest )
    v8 = pszDest;
  v4 = cchDest == 0 ? 0x80000005 : 0;
  *v8 = 0;
  return v4;
}
