/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x1408C6490
 * Callers:
 *     <none>
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402D3DF0 (VfIsVerifierEnabled.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409D88B4 (VfThunkAddSpecialDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v6; // ebx
  struct _KTHREAD *Lock; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 *v15; // rax
  NTSTATUS v16; // ebx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v6 = 0;
  if ( !(unsigned int)VfIsVerifierEnabled()
    || (VfRuleClasses & 0xFFAFFFFF) == 0 && (VfRuleClasses & 0x200000000LL) == 0 && (VfRuleClasses & 0x400000000LL) == 0 )
  {
    return -1073741637;
  }
  if ( !(ThunkBufferSize >> 4) )
    return -1073741583;
  Lock = MmAcquireLoadLock();
  v11 = MiLookupDataTableEntry(EntryRoutine, 0LL, v9, v10);
  v12 = v11;
  if ( v11 && (v13 = *(_QWORD *)(v11 + 48), retaddr >= v13) && (v14 = v13 + *(unsigned int *)(v11 + 64), retaddr < v14) )
  {
    v15 = (unsigned __int64 *)((char *)ThunkBuffer + 8);
    while ( *v15 >= v13 && *v15 < v14 )
    {
      v15 += 2;
      if ( ++v6 >= ThunkBufferSize >> 4 )
      {
        v16 = VfThunkAddSpecialDriverThunks(EntryRoutine, ThunkBuffer, ThunkBufferSize, v12);
        goto LABEL_18;
      }
    }
    v16 = -1073741584;
  }
  else
  {
    v16 = -1073741585;
  }
LABEL_18:
  MmReleaseLoadLock((__int64)Lock);
  return v16;
}
