/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x1801132BC
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1801131C0 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1801131D8 (RtlpTpIoDllProcessUnloads.c)
 */

signed __int64 __fastcall RtlpTpIoDllUnloaded(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  signed __int64 result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpTpIoTreeLock, a2, a3, a4);
    v5 = RtlpTpIoTree;
    while ( v5 )
    {
      v6 = *(_QWORD *)(v5 - 96);
      if ( v6 < *(_QWORD *)(a1 + 24) )
        goto LABEL_8;
      if ( v6 < *(_QWORD *)(a1 + 24) + (unsigned __int64)*(unsigned int *)(a1 + 32) )
      {
        RtlpTpIoDllProcessUnloads(a1, v5 - 96);
        return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
      }
      if ( v6 >= *(_QWORD *)(a1 + 24) )
        v5 = *(_QWORD *)(v5 + 8);
      else
LABEL_8:
        v5 = *(_QWORD *)(v5 + 16);
    }
    return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
  return result;
}
