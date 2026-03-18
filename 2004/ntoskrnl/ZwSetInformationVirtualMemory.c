/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1403F6980
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1402713B8 (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x1406B6060 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
