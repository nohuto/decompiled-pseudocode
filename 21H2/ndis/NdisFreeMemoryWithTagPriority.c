/*
 * XREFs of NdisFreeMemoryWithTagPriority @ 0x1C00BCCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisFreeMemoryWithTagPriority(NDIS_HANDLE NdisHandle, PVOID VirtualAddress, ULONG Tag)
{
  ExFreePoolWithTag(VirtualAddress, Tag);
}
