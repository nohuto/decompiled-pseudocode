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
 *     NtSetInformationProcess @ 0x18009D9C0 (NtSetInformationProcess.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlDeleteGrowableFunctionTable(__int64 a1)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  int v6; // edi
  __int64 v7; // rdx
  _QWORD *v8; // rax
  void *ProcessHeap; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  int v13; // edx
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 80) != 3 )
    RtlRaiseStatus(3221225485LL);
  v15 = a1;
  v16 = 1;
  v2 = NtSetInformationProcess(-1LL, 53LL, &v15, 16LL);
  if ( v2 < 0 )
    RtlRaiseStatus((unsigned int)v2);
  LdrProtectMrdata(0);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v3, v4, v5);
    v6 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v6 == -1 )
    {
LABEL_15:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v6 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v3, v4, v5);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMin, a1 + 88);
  RtlAvlRemoveNode(&RtlpDynamicFunctionTableTreeMax, a1 + 112);
  v7 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = *(_QWORD **)(a1 + 8), *v8 != a1) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlFreeHeap((__int64)ProcessHeap, 0, a1);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v10, v11, v12);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_15;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
    if ( v13 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return LdrProtectMrdata(1);
}
