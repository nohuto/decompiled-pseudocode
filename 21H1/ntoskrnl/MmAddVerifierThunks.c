/*
 * XREFs of MmAddVerifierThunks @ 0x1408C1C60
 * Callers:
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140323280 (VfIsVerifierEnabled.c)
 *     MiLookupDataTableEntry @ 0x140324C98 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x1409D57C0 (VfThunkAddDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v4; // ebx
  unsigned __int64 *v5; // rsi
  struct _KTHREAD *Lock; // rbp
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  int v11; // edx
  PVOID *v12; // rcx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rax
  NTSTATUS v15; // ebx

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
  v8 = MiLookupDataTableEntry(*(_QWORD *)ThunkBuffer, 0);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 48);
    v11 = 0;
    v12 = (PVOID *)PsLoadedModuleList;
    v13 = v10 + *(unsigned int *)(v8 + 64);
    while ( 1 )
    {
      if ( v12 == &PsLoadedModuleList )
        goto LABEL_14;
      if ( (PVOID *)v8 == v12 )
        break;
      if ( (unsigned int)++v11 >= 2 )
      {
LABEL_14:
        while ( *v5 >= v10 )
        {
          if ( *v5 >= v13 )
            break;
          v14 = v5[1];
          if ( v14 < v10 || v14 >= v13 )
            break;
          v5 += 2;
          if ( ++v4 >= ThunkBufferSize >> 4 )
          {
            v15 = VfThunkAddDriverThunks(ThunkBuffer, ThunkBufferSize, v9, v13);
            MmReleaseLoadLock((__int64)Lock);
            return v15;
          }
        }
        break;
      }
      v12 = (PVOID *)*v12;
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  return -1073741584;
}
