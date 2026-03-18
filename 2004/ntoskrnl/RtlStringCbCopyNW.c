/*
 * XREFs of RtlStringCbCopyNW @ 0x1402722F8
 * Callers:
 *     PopDiagGetDriverName @ 0x14038667C (PopDiagGetDriverName.c)
 *     LocalConvertSidToStringSidW @ 0x140641EE8 (LocalConvertSidToStringSidW.c)
 *     IopCheckIfNotNativeDriver @ 0x14088E1D0 (IopCheckIfNotNativeDriver.c)
 *     AslPathWildcardFindFirst @ 0x14096549C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140965A6C (AslPathWildcardFindNext.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x1409692F4 (AuthzBasepCopyoutClaimAttributeValues.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140969564 (AuthzBasepCopyoutClaimAttributes.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x140272358 (RtlStringCopyWorkerW_0.c)
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
      return RtlStringCopyWorkerW_0(pszDest, v4, (size_t *)pszSrc, pszSrc, cchToCopy);
    }
  }
  return v5;
}
