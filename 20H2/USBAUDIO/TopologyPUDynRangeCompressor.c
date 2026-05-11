/*
 * XREFs of TopologyPUDynRangeCompressor @ 0x1C0027190
 * Callers:
 *     <none>
 * Callees:
 *     PropertyGetProcessControlRange @ 0x1C002A84C (PropertyGetProcessControlRange.c)
 */

__int64 __fastcall TopologyPUDynRangeCompressor(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  NTSTATUS ProcessControlRange; // ebx
  PVOID PoolWithTag; // rax
  void *v8; // rbp
  __int64 v9; // r15

  *(_DWORD *)(a3 + 76) = 22;
  v3 = a3;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_DYN_RANGE_COMPRESSOR;
  ProcessControlRange = -1073741670;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_DYN_RANGE_COMPRESSOR;
  if ( (*(_DWORD *)(a2 + 76) & 0x3E) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x78uLL, 0x41627845u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      ProcessControlRange = 0;
      v9 = (__int64)PoolWithTag + 20;
      if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
      {
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 2, 2, 0x10000, v9);
        if ( ProcessControlRange < 0 )
          goto LABEL_18;
      }
      if ( (*(_DWORD *)(a2 + 76) & 4) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 3, 2, 0x10000, v9 + 20);
      if ( ProcessControlRange < 0 )
        goto LABEL_18;
      if ( (*(_DWORD *)(a2 + 76) & 8) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 4, 2, 0x10000, v9 + 40);
      if ( ProcessControlRange < 0 )
        goto LABEL_18;
      if ( (*(_DWORD *)(a2 + 76) & 0x10) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 5, 1, 1, v9 + 60);
      if ( ProcessControlRange < 0 )
        goto LABEL_18;
      if ( (*(_DWORD *)(a2 + 76) & 0x20) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 6, 1, 1, v9 + 80);
      if ( ProcessControlRange < 0
        || (ProcessControlRange = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v8, ExFreePool),
            ProcessControlRange < 0) )
      {
LABEL_18:
        ExFreePool(v8);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessControlRange;
}
