/*
 * XREFs of PspRemoveCpuRateControl @ 0x14071113C
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveSchedulingGroup @ 0x14035DAC4 (KeRemoveSchedulingGroup.c)
 *     PspFreeRateControl @ 0x14071119C (PspFreeRateControl.c)
 */

LONG_PTR __fastcall PspRemoveCpuRateControl(__int64 a1)
{
  LONG_PTR result; // rax
  void *v3; // rcx

  *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 44LL) = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1320), 0xFFFFFFDF);
  KeRemoveSchedulingGroup((unsigned __int16 *)(*(_QWORD *)(a1 + 1008) + 128LL));
  result = PspFreeRateControl(*(PVOID *)(a1 + 1008));
  *(_QWORD *)(a1 + 1008) = 0LL;
  if ( PsCpuFairShareEnabled )
  {
    result = *(_QWORD *)(a1 + 1080);
    if ( result == a1 )
    {
      v3 = *(void **)(a1 + 1112);
      if ( v3 )
      {
        result = ObfDereferenceObjectWithTag(v3, 0x624A7350u);
        *(_QWORD *)(a1 + 1112) = 0LL;
      }
    }
  }
  return result;
}
