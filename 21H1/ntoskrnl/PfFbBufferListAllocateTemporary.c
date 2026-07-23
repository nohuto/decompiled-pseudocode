/*
 * XREFs of PfFbBufferListAllocateTemporary @ 0x14031A604
 * Callers:
 *     PfpEventHandleOutOfBuffers @ 0x14031A5E0 (PfpEventHandleOutOfBuffers.c)
 *     PfpSectInfoHandleOutOfBuffers @ 0x14077A420 (PfpSectInfoHandleOutOfBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1402C2E5C (PfFbBufferListInsertInFree.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfFbBufferListAllocateTemporary(_SLIST_ENTRY *RunRef, signed int a2)
{
  __int64 result; // rax
  _SLIST_ENTRY *PoolWithTag; // rax

  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, a2) > SHIDWORD(RunRef[5].Next) )
  {
    result = 3221225773LL;
LABEL_3:
    _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -a2);
    return result;
  }
  PoolWithTag = (_SLIST_ENTRY *)ExAllocatePoolWithTag(
                                  (POOL_TYPE)*((_DWORD *)&RunRef[4].Next + 2),
                                  a2,
                                  HIDWORD(RunRef[4].Next));
  if ( !PoolWithTag )
  {
    result = 3221225626LL;
    goto LABEL_3;
  }
  PfFbBufferListInsertInFree(RunRef, PoolWithTag, a2, 1, 0);
  return 0LL;
}
