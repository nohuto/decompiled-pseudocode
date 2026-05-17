/*
 * XREFs of _RtlpEstimateAllocatedSize@4 @ 0x4B35D645
 * Callers:
 *     _RtlpQueryExtendedInformationHeap@8 @ 0x4B358EC0 (_RtlpQueryExtendedInformationHeap@8.c)
 *     _RtlpLogHeapContractEvent@28 @ 0x4B36EEA8 (_RtlpLogHeapContractEvent@28.c)
 *     _RtlpLogHeapCreateEvent@20 @ 0x4B36EF35 (_RtlpLogHeapCreateEvent@20.c)
 *     _RtlpLogHeapExtendEvent@20 @ 0x4B36F013 (_RtlpLogHeapExtendEvent@20.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpEstimateAllocatedSize(int this)
{
  int v1; // edx
  int v2; // ecx

  v1 = *(_DWORD *)(this + 504) - 8 * *(_DWORD *)(this + 116);
  if ( *(_BYTE *)(this + 234) == 2 )
    v2 = *(_DWORD *)(this + 228);
  else
    v2 = 0;
  if ( v2 )
    v1 -= *(_DWORD *)(v2 + 44);
  return v1;
}
