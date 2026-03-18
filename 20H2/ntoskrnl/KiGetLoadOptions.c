/*
 * XREFs of KiGetLoadOptions @ 0x140A7744C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140A1E354 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
