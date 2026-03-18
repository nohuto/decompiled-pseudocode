/*
 * XREFs of KiGetLoadOptions @ 0x140A703D8
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
