/*
 * XREFs of EtwpCCSwapStart @ 0x1407989B0
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x1407972F0 (EtwpUpdateGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rbx
  PVOID PoolWithTag; // rax
  unsigned int i; // ebp
  __int64 v9; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  v3 = CCSwapNumLoggersPerClockType[a1];
  if ( v3 || (v4 = 0, !(_DWORD)KeNumberProcessors_0) )
  {
LABEL_7:
    CCSwapNumLoggersPerClockType[v2] = v3 + 1;
    return 0LL;
  }
  while ( 1 )
  {
    v5 = *(_QWORD *)(KeGetPrcb(v4) + 33576);
    if ( *(_QWORD *)(v5 + 8 * v2 + 296) )
    {
      *(_BYTE *)(v2 + v5 + 288) = 0;
      goto LABEL_5;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
    *(_QWORD *)(v5 + 8 * v2 + 296) = PoolWithTag;
    if ( !PoolWithTag )
      break;
LABEL_5:
    ++v4;
    **(_DWORD **)(v5 + 8 * v2 + 296) = 0;
    if ( v4 >= v1 )
    {
      v3 = CCSwapNumLoggersPerClockType[v2];
      goto LABEL_7;
    }
  }
  for ( i = 0; i < v4; ++i )
  {
    v9 = *(_QWORD *)(KeGetPrcb(i) + 33576);
    ExFreePoolWithTag(*(PVOID *)(v9 + 8 * v2 + 296), 0);
    *(_QWORD *)(v9 + 8 * v2 + 296) = 0LL;
  }
  return 3221225495LL;
}
