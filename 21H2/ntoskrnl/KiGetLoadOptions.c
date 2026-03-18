/*
 * XREFs of KiGetLoadOptions @ 0x140B50F4C
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140AD6354 (CcInitializeBcbProfiler.c)
 * Callees:
 *     <none>
 */

__int64 KiGetLoadOptions()
{
  return *(_QWORD *)(KeLoaderBlock_0 + 216);
}
