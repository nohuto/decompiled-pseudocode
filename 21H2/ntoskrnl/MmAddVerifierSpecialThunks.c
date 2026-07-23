/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x1408C65F0
 * Callers:
 *     <none>
 * Callees:
 *     VfIsVerifierEnabled @ 0x140252060 (VfIsVerifierEnabled.c)
 *     MiLookupDataTableEntry @ 0x140298ABC (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409D98B4 (VfThunkAddSpecialDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v6; // ebx
  struct _KTHREAD *Lock; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 *v13; // rax
  NTSTATUS v14; // ebx
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
  v9 = MiLookupDataTableEntry(EntryRoutine, 0);
  v10 = v9;
  if ( v9 && (v11 = *(_QWORD *)(v9 + 48), retaddr >= v11) && (v12 = v11 + *(unsigned int *)(v9 + 64), retaddr < v12) )
  {
    v13 = (unsigned __int64 *)((char *)ThunkBuffer + 8);
    while ( *v13 >= v11 && *v13 < v12 )
    {
      v13 += 2;
      if ( ++v6 >= ThunkBufferSize >> 4 )
      {
        v14 = VfThunkAddSpecialDriverThunks(EntryRoutine, ThunkBuffer, ThunkBufferSize, v10);
        goto LABEL_18;
      }
    }
    v14 = -1073741584;
  }
  else
  {
    v14 = -1073741585;
  }
LABEL_18:
  MmReleaseLoadLock((__int64)Lock);
  return v14;
}
