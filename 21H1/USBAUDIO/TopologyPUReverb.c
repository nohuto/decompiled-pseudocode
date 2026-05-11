/*
 * XREFs of TopologyPUReverb @ 0x1C0026C80
 * Callers:
 *     <none>
 * Callees:
 *     PropertyGetProcessControlRange @ 0x1C002A36C (PropertyGetProcessControlRange.c)
 */

__int64 __fastcall TopologyPUReverb(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  NTSTATUS ProcessControlRange; // ebx
  PVOID PoolWithTag; // rax
  void *v8; // rbp
  __int64 v9; // r15

  *(_DWORD *)(a3 + 76) = 19;
  v3 = a3;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_REVERB;
  ProcessControlRange = -1073741670;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_REVERB;
  if ( (*(_DWORD *)(a2 + 76) & 0x1E) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x64uLL, 0x41627845u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      ProcessControlRange = 0;
      v9 = (__int64)PoolWithTag + 20;
      if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
      {
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 5, 1, 1, v9);
        if ( ProcessControlRange < 0 )
          goto LABEL_15;
      }
      if ( (*(_DWORD *)(a2 + 76) & 4) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 2, 2, 655, v9 + 20);
      if ( ProcessControlRange < 0 )
        goto LABEL_15;
      if ( (*(_DWORD *)(a2 + 76) & 8) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 3, 2, 1, v9 + 40);
      if ( ProcessControlRange < 0 )
        goto LABEL_15;
      if ( (*(_DWORD *)(a2 + 76) & 0x10) != 0 )
        ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 4, 1, 1, v9 + 60);
      if ( ProcessControlRange < 0
        || (ProcessControlRange = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v8, ExFreePool),
            ProcessControlRange < 0) )
      {
LABEL_15:
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
