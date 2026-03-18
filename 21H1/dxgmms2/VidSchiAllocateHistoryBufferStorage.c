/*
 * XREFs of VidSchiAllocateHistoryBufferStorage @ 0x1C00D0D40
 * Callers:
 *     VidSchSubmitCommand @ 0x1C007E500 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAllocateHistoryBufferStorage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID PoolWithTag; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  PVOID v8; // rax
  __int64 v9; // rcx

  if ( a2 <= 4 )
  {
    *(_QWORD *)(a1 + 608) = a1 + 168;
    *(_QWORD *)(a1 + 264) = a1 + 200;
    return 0LL;
  }
  v4 = a2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x61616956u);
  *(_QWORD *)(a1 + 608) = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v4, 0x61616956u);
    *(_QWORD *)(a1 + 264) = v8;
    if ( v8 )
      return 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 608), 0);
    *(_QWORD *)(a1 + 608) = 0LL;
    v7 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v7 + 24) = 10714LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v7 + 24) = 10702LL;
  }
  WdLogEvent5_WdLowResource(v7);
  return 3221225495LL;
}
