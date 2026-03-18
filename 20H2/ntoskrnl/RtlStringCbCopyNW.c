/*
 * XREFs of RtlStringCbCopyNW @ 0x140340D78
 * Callers:
 *     PopDiagGetDriverName @ 0x14038881C (PopDiagGetDriverName.c)
 *     LocalConvertSidToStringSidW @ 0x1406FCAD0 (LocalConvertSidToStringSidW.c)
 *     IopCheckIfNotNativeDriver @ 0x140893D20 (IopCheckIfNotNativeDriver.c)
 *     AslPathWildcardFindFirst @ 0x14096B26C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14096B83C (AslPathWildcardFindNext.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x14096F0C4 (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x14096F334 (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x140340DD8 (RtlStringCopyWorkerW_2.c)
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  NTSTATUS v5; // edx
  size_t cchToCopy; // r9

  v4 = cbDest >> 1;
  v5 = 0;
  if ( v4 - 1 > 0x7FFFFFFE )
    v5 = -1073741811;
  if ( v5 >= 0 )
  {
    cchToCopy = cbToCopy >> 1;
    if ( cchToCopy > 0x7FFFFFFE )
    {
      v5 = -1073741811;
      *pszDest = 0;
    }
    else
    {
      return RtlStringCopyWorkerW_2(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
