/*
 * XREFs of RtlStringCchCatA @ 0x1C005EFFC
 * Callers:
 *     CatError @ 0x1C0067084 (CatError.c)
 *     Debugger @ 0x1C00680E0 (Debugger.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B2238 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C005F0A4 (RtlStringCopyWorkerA.c)
 *     RtlStringValidateDestAndLengthA @ 0x1C005F0F0 (RtlStringValidateDestAndLengthA.c)
 */

NTSTATUS __stdcall RtlStringCchCatA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  NTSTATUS result; // eax
  size_t *v6; // r8
  __int64 v7; // r10
  __int64 v8; // r11
  size_t pcchDestLength; // [rsp+58h] [rbp+20h] BYREF

  pcchDestLength = 0LL;
  result = RtlStringValidateDestAndLengthA(pszDest, cchDest, &pcchDestLength, v3);
  if ( result >= 0 )
    return RtlStringCopyWorkerA((NTSTRSAFE_PSTR)(pcchDestLength + v8), v7 - pcchDestLength, v6, pszSrc, 0x7FFFFFFEuLL);
  return result;
}
