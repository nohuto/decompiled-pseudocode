/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1403F56F0
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1402E0A40 (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x14064D080 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
