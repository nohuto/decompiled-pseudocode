/*
 * XREFs of RtlStringCchCatNA @ 0x1C005E358
 * Callers:
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B2958 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C005E3C4 (RtlStringCopyWorkerA.c)
 *     RtlStringValidateDestAndLengthA @ 0x1C005E410 (RtlStringValidateDestAndLengthA.c)
 */

NTSTATUS __stdcall RtlStringCchCatNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToAppend)
{
  NTSTATUS result; // eax
  size_t *v9; // r8
  size_t v10[3]; // [rsp+30h] [rbp-18h] BYREF

  v10[0] = 0LL;
  result = RtlStringValidateDestAndLengthA(pszDest, cchDest, v10, cchToAppend);
  if ( result >= 0 )
    return RtlStringCopyWorkerA(&pszDest[v10[0]], cchDest - v10[0], v9, pszSrc, cchToAppend);
  return result;
}
