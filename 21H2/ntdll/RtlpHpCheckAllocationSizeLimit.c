/*
 * XREFs of RtlpHpCheckAllocationSizeLimit @ 0x180007650
 * Callers:
 *     RtlpHpAllocateHeap @ 0x18000776C (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18010E17C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpCheckAllocationSizeLimit(unsigned __int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v6; // r9

  v3 = 0;
  if ( !dword_1801663E8 && ((v4 = *(_QWORD *)(a3 + 16)) != 0 || (v4 = qword_18016A688) != 0) && a1 > v4 )
  {
    v6 = *(_QWORD *)(a3 + 24);
    if ( v6 )
      RtlpLogHeapFailure(20, a2, 0, v6, a1, *(_QWORD *)(a3 + 16));
  }
  else
  {
    return 1;
  }
  return v3;
}
