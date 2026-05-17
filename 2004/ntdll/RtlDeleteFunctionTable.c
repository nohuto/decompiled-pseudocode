/*
 * XREFs of RtlDeleteFunctionTable @ 0x1800678E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180067DB0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAvlRemoveNode @ 0x180067F60 (RtlAvlRemoveNode.c)
 */

BOOLEAN __cdecl RtlDeleteFunctionTable(PRUNTIME_FUNCTION FunctionTable)
{
  __int64 v2; // rdi
  BOOLEAN v3; // si
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 i; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  int v11; // esi
  int v12; // esi
  __int64 *v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rax
  void *v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  int v21; // edx

  v2 = 0LL;
  v3 = 0;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v4, v5, v6);
  for ( i = RtlpDynamicFunctionTable; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &RtlpDynamicFunctionTable )
      goto LABEL_20;
    v2 = i;
    if ( *(PRUNTIME_FUNCTION *)(i + 16) == FunctionTable )
      break;
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v8, v9, v10);
    v11 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v11 == -1 )
    {
LABEL_30:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v11 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  v12 = *(_DWORD *)(i + 80);
  if ( v12 != 3 )
  {
    v13 = &RtlpDynamicCallbackTableTreeMin;
    if ( v12 != 2 )
      v13 = &RtlpDynamicFunctionTableTreeMin;
    RtlAvlRemoveNode(v13, i + 88);
    v14 = &RtlpDynamicCallbackTableTreeMax;
    if ( v12 != 2 )
      v14 = &RtlpDynamicFunctionTableTreeMax;
    RtlAvlRemoveNode(v14, i + 112);
    v15 = *(_QWORD *)i;
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || (v16 = *(__int64 **)(i + 8), *v16 != i) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
  }
  v3 = 1;
LABEL_20:
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( v3 )
  {
    if ( *(_DWORD *)(v2 + 80) == 3 )
    {
      RtlDeleteGrowableFunctionTable(v2);
    }
    else
    {
      v17 = (unsigned int)LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
      RtlFreeHeap((__int64)v17, 0, v2);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v18, v19, v20);
      v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_30;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v21 - 1;
      if ( v21 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return v3;
}
