/*
 * XREFs of MmAddVerifierThunks @ 0x1408C65B0
 * Callers:
 *     NtSetSystemInformation @ 0x1406DA380 (NtSetSystemInformation.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1402D3DF0 (VfIsVerifierEnabled.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x1409D8830 (VfThunkAddDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v4; // ebx
  unsigned __int64 *v5; // rsi
  struct _KTHREAD *Lock; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // r10
  int v13; // edx
  PVOID *v14; // rcx
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rax
  NTSTATUS v17; // ebx

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v4 = 0;
  if ( !(unsigned int)VfIsVerifierEnabled()
    || (VfRuleClasses & 0xFFAFFFFF) == 0 && (VfRuleClasses & 0x200000000LL) == 0 && (VfRuleClasses & 0x400000000LL) == 0 )
  {
    return -1073741637;
  }
  v5 = (unsigned __int64 *)ThunkBuffer;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741585;
  Lock = MmAcquireLoadLock();
  v10 = MiLookupDataTableEntry(*(_QWORD *)ThunkBuffer, 0LL, v8, v9);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = 0;
    v14 = (PVOID *)PsLoadedModuleList;
    v15 = v12 + *(unsigned int *)(v10 + 64);
    while ( 1 )
    {
      if ( v14 == &PsLoadedModuleList )
        goto LABEL_14;
      if ( (PVOID *)v10 == v14 )
        break;
      if ( (unsigned int)++v13 >= 2 )
      {
LABEL_14:
        while ( *v5 >= v12 )
        {
          if ( *v5 >= v15 )
            break;
          v16 = v5[1];
          if ( v16 < v12 || v16 >= v15 )
            break;
          v5 += 2;
          if ( ++v4 >= ThunkBufferSize >> 4 )
          {
            v17 = VfThunkAddDriverThunks(ThunkBuffer, ThunkBufferSize, v11, v15);
            MmReleaseLoadLock((__int64)Lock);
            return v17;
          }
        }
        break;
      }
      v14 = (PVOID *)*v14;
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  return -1073741584;
}
