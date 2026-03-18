/*
 * XREFs of wcsncmp_0 @ 0x1C0024445
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C017C5E0 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01826A0 (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsncmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return wcsncmp(Str1, Str2, MaxCount);
}
