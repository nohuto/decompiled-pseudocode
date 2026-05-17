/*
 * XREFs of RtlAddFunctionTable @ 0x180067AC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x18000787C (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlAvlInsertNodeEx @ 0x180068810 (RtlAvlInsertNodeEx.c)
 *     ZwQuerySystemTime @ 0x18009D950 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlAddFunctionTable(PRUNTIME_FUNCTION FunctionTable, ULONG EntryCount, ULONG64 BaseAddress)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  int v9; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  int v16; // edx
  unsigned __int64 BeginAddress; // rax
  PRUNTIME_FUNCTION v19; // rdx
  ULONG v20; // r9d
  unsigned __int64 EndAddress; // rcx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r8
  int v24; // r11d
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  _QWORD *v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r9
  int v38; // ecx

  if ( (int)LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v6, v7, v8);
    v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
    if ( v9 == -1 )
    {
LABEL_45:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    ProcessHeap = (void *)LdrpMrdataHeap;
  else
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 136LL);
  v12 = Heap;
  if ( !Heap )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v13, v14, v15);
      v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_45;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  *(_QWORD *)(Heap + 16) = FunctionTable;
  *(_DWORD *)(Heap + 84) = EntryCount;
  ZwQuerySystemTime(Heap + 24);
  BeginAddress = FunctionTable->BeginAddress;
  v19 = FunctionTable + 1;
  *(_QWORD *)(v12 + 32) = BeginAddress;
  v20 = 1;
  EndAddress = FunctionTable->EndAddress;
  *(_DWORD *)(v12 + 80) = 0;
  *(_QWORD *)(v12 + 40) = EndAddress;
  *(_QWORD *)(v12 + 48) = BaseAddress;
  if ( EntryCount > 1 )
  {
    v22 = (unsigned int)EndAddress;
    v23 = (unsigned int)BeginAddress;
    v24 = 0;
    do
    {
      if ( !v24 && v19->BeginAddress < FunctionTable[v20 - 1].BeginAddress )
      {
        v24 = 1;
        *(_DWORD *)(v12 + 80) = 1;
      }
      BeginAddress = v19->BeginAddress;
      if ( BeginAddress >= v23 )
      {
        BeginAddress = v23;
      }
      else
      {
        v23 = (unsigned int)BeginAddress;
        *(_QWORD *)(v12 + 32) = BeginAddress;
      }
      EndAddress = v19->EndAddress;
      if ( EndAddress <= v22 )
        EndAddress = *(_QWORD *)(v12 + 40);
      else
        *(_QWORD *)(v12 + 40) = EndAddress;
      ++v19;
      ++v20;
      v22 = EndAddress;
    }
    while ( v20 < EntryCount );
  }
  *(_QWORD *)(v12 + 32) = BaseAddress + BeginAddress;
  *(_QWORD *)(v12 + 40) = EndAddress + BaseAddress;
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpDynamicFunctionTableLock, v25, v26, v27);
  v28 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
  LOBYTE(v29) = 0;
  if ( !RtlpDynamicFunctionTableTreeMin )
    goto LABEL_33;
  while ( *(_QWORD *)(v12 + 32) < *(v28 - 7) )
  {
    v30 = (_QWORD *)*v28;
    if ( !*v28 )
      goto LABEL_33;
LABEL_40:
    v28 = v30;
  }
  v30 = (_QWORD *)v28[1];
  if ( v30 )
    goto LABEL_40;
  LOBYTE(v29) = 1;
LABEL_33:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMin, v28, v29, v12 + 88);
  v31 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
  LOBYTE(v32) = 0;
  if ( !RtlpDynamicFunctionTableTreeMax )
    goto LABEL_37;
  while ( 2 )
  {
    if ( *(_QWORD *)(v12 + 40) < *(v31 - 10) )
    {
      v33 = (_QWORD *)*v31;
      if ( !*v31 )
        goto LABEL_37;
      goto LABEL_42;
    }
    v33 = (_QWORD *)v31[1];
    if ( v33 )
    {
LABEL_42:
      v31 = v33;
      continue;
    }
    break;
  }
  LOBYTE(v32) = 1;
LABEL_37:
  RtlAvlInsertNodeEx(&RtlpDynamicFunctionTableTreeMax, v31, v32, v12 + 112);
  v34 = (__int64 *)qword_18017F2C0;
  if ( *(__int64 **)qword_18017F2C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v12 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v12 + 8) = v34;
  *v34 = v12;
  qword_18017F2C0 = v12;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v35, v36, v37);
    v38 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      goto LABEL_45;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v38 - 1;
    if ( v38 == 1 )
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  return 1;
}
