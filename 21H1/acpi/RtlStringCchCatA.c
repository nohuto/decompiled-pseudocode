/*
 * XREFs of RtlStringCchCatA @ 0x1C005E164
 * Callers:
 *     CatError @ 0x1C0065B40 (CatError.c)
 *     Debugger @ 0x1C0066AA8 (Debugger.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1C00B2638 (OSOpenAMLINamespaceOverrideHandle.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C005E234 (RtlStringCopyWorkerA.c)
 *     RtlStringValidateDestAndLengthA @ 0x1C005E280 (RtlStringValidateDestAndLengthA.c)
 */

NTSTATUS __stdcall RtlStringCchCatA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  NTSTATUS result; // eax
  size_t *v8; // r8
  size_t v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  result = RtlStringValidateDestAndLengthA(pszDest, cchDest, &v9, v3);
  if ( result >= 0 )
    return RtlStringCopyWorkerA(&pszDest[v9], cchDest - v9, v8, pszSrc, 0x7FFFFFFEuLL);
  return result;
}
