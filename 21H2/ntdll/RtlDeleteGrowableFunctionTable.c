/*
 * XREFs of RtlDeleteGrowableFunctionTable @ 0x1800693B0
 * Callers:
 *     RtlDeleteFunctionTable @ 0x180068EE0 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlAvlRemoveNode @ 0x180069560 (RtlAvlRemoveNode.c)
 *     NtSetInformationProcess @ 0x18009D980 (NtSetInformationProcess.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

void __cdecl RtlDeleteGrowableFunctionTable(PVOID DynamicTable)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  _QWORD *v5; // rdx
  PVOID *v6; // rax
  int v7; // eax
  PVOID ProcessHeap; // rcx
  int v9; // eax
  int v10; // edx
  PVOID v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  if ( *((_DWORD *)DynamicTable + 20) != 3 )
    RtlRaiseStatus(-1073741811);
  v11 = DynamicTable;
  v12 = 1;
  v2 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDynamicFunctionTableInformation, &v11, 0x10u);
  if ( v2 < 0 )
    RtlRaiseStatus(v2);
  LdrProtectMrdata(0);
  LOBYTE(v3) = LdrControlFlowGuardEnforced();
  if ( v3 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v4 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v4 == -1 )
    {
LABEL_15:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v4 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, (char *)DynamicTable + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, (char *)DynamicTable + 112);
  v5 = *(_QWORD **)DynamicTable;
  if ( *(PVOID *)(*(_QWORD *)DynamicTable + 8LL) != DynamicTable
    || (v6 = (PVOID *)*((_QWORD *)DynamicTable + 1), *v6 != DynamicTable) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  v5[1] = v6;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LOBYTE(v7) = LdrControlFlowGuardEnforced();
  if ( v7 )
    ProcessHeap = LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap(ProcessHeap, 0, DynamicTable);
  LOBYTE(v9) = LdrControlFlowGuardEnforced();
  if ( v9 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_15;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v10 - 1;
    if ( v10 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LdrProtectMrdata(1);
}
