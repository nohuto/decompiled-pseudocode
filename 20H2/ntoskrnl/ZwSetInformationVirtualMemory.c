/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1403FB550
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x14020430C (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x1406EF9E8 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
