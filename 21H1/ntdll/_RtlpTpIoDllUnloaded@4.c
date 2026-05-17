/*
 * XREFs of _RtlpTpIoDllUnloaded@4 @ 0x4B3859C1
 * Callers:
 *     _RtlpTpIoDllNotification@12 @ 0x4B385910 (_RtlpTpIoDllNotification@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpTpIoDllProcessUnloads@8 @ 0x4B38592E (_RtlpTpIoDllProcessUnloads@8.c)
 *     _RtlpTpIoDllUnloaded@4 @ 0x4B3859C1 (_RtlpTpIoDllUnloaded@4.c)
 */

signed __int32 __thiscall RtlpTpIoDllUnloaded(int *this)
{
  int v2; // ecx
  unsigned int v3; // edi
  signed __int32 result; // eax

  if ( (*(_BYTE *)this & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock);
    v2 = RtlpTpIoTree;
    while ( v2 )
    {
      v3 = *(_DWORD *)(v2 - 56);
      if ( v3 < this[3] )
        goto LABEL_10;
      if ( v3 < this[3] + this[4] )
      {
        RtlpTpIoDllProcessUnloads(this, (unsigned int *)(v2 - 56));
        return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
      }
      if ( v3 >= this[3] )
        v2 = *(_DWORD *)(v2 + 4);
      else
LABEL_10:
        v2 = *(_DWORD *)(v2 + 8);
    }
    return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
  return result;
}
