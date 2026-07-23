/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x180068300
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
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 *     RtlAvlInsertNodeEx @ 0x180068810 (RtlAvlInsertNodeEx.c)
 *     ZwQuerySystemTime @ 0x18009D950 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  int v13; // ebx
  int v14; // eax
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v17; // rbx
  _QWORD *v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 *v24; // rax
  int v25; // eax
  int v26; // r8d
  int v28; // eax
  int v29; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( LdrEnsureMrdataHeapExists() < 0 )
    return 0;
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
      RtlProtectHeap(LdrpMrdataHeap, 0);
    if ( v13 == -1 )
      goto LABEL_46;
    *(_DWORD *)LdrpMrdataHeapUnprotected = v13 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  LOBYTE(v14) = LdrControlFlowGuardEnforced();
  if ( v14 )
  {
    if ( v10 + 136 >= 0xFF000 )
      goto LABEL_40;
    ProcessHeap = LdrpMrdataHeap;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, v10 + 136);
  v17 = (__int64)Heap;
  if ( !Heap )
  {
LABEL_40:
    LOBYTE(v28) = LdrControlFlowGuardEnforced();
    if ( v28 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v29 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_46;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v29 - 1;
      if ( v29 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    return 0;
  }
  Heap[2].QuadPart = TableIdentifier;
  ZwQuerySystemTime(Heap + 3);
  *(_QWORD *)(v17 + 40) = BaseAddress + v6;
  *(_QWORD *)(v17 + 64) = Context;
  *(_QWORD *)(v17 + 32) = BaseAddress;
  *(_QWORD *)(v17 + 48) = BaseAddress;
  *(_QWORD *)(v17 + 56) = Callback;
  *(_DWORD *)(v17 + 80) = 2;
  *(_QWORD *)(v17 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v17 + 72) = v17 + 136;
    RtlStringCbCopyW((_WORD *)(v17 + 136), v10, (__int64)OutOfProcessCallbackDll);
  }
  LdrProtectMrdata(0);
  RtlAcquireSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  v18 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  LOBYTE(v19) = 0;
  if ( !RtlpDynamicCallbackTableTreeMin )
    goto LABEL_24;
  while ( *(_QWORD *)(v17 + 32) < *(v18 - 7) )
  {
    v20 = (_QWORD *)*v18;
    if ( !*v18 )
      goto LABEL_24;
LABEL_31:
    v18 = v20;
  }
  v20 = (_QWORD *)v18[1];
  if ( v20 )
    goto LABEL_31;
  LOBYTE(v19) = 1;
LABEL_24:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMin, v18, v19, v17 + 88);
  v21 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
  LOBYTE(v22) = 0;
  if ( !RtlpDynamicCallbackTableTreeMax )
    goto LABEL_28;
  while ( 2 )
  {
    if ( *(_QWORD *)(v17 + 40) < *(v21 - 10) )
    {
      v23 = (_QWORD *)*v21;
      if ( !*v21 )
        goto LABEL_28;
      goto LABEL_33;
    }
    v23 = (_QWORD *)v21[1];
    if ( v23 )
    {
LABEL_33:
      v21 = v23;
      continue;
    }
    break;
  }
  LOBYTE(v22) = 1;
LABEL_28:
  RtlAvlInsertNodeEx(&RtlpDynamicCallbackTableTreeMax, v21, v22, v17 + 112);
  v24 = (__int64 *)qword_18017F2C0;
  if ( *(__int64 **)qword_18017F2C0 != &RtlpDynamicFunctionTable )
    __fastfail(3u);
  *(_QWORD *)v17 = &RtlpDynamicFunctionTable;
  *(_QWORD *)(v17 + 8) = v24;
  *v24 = v17;
  qword_18017F2C0 = v17;
  RtlReleaseSRWLockExclusive(&RtlpDynamicFunctionTableLock);
  LdrProtectMrdata(1);
  LOBYTE(v25) = LdrControlFlowGuardEnforced();
  if ( v25 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v26 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v26 - 1;
      if ( v26 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      return 1;
    }
LABEL_46:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return 1;
}
