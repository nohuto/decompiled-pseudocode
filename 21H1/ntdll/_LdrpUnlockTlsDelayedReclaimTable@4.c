/*
 * XREFs of _LdrpUnlockTlsDelayedReclaimTable@4 @ 0x4B33477F
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

void __thiscall LdrpUnlockTlsDelayedReclaimTable(void *this)
{
  void *v1; // ebx
  _RTL_SRWLOCK *v2; // edi
  _DWORD *Value; // eax
  _DWORD *v4; // esi
  PVOID HeapHandle; // [esp+14h] [ebp-4h]

  v1 = this;
  v2 = &stru_4B3A679C;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  do
  {
    if ( v1 )
    {
      Value = (_DWORD *)v2[-1].Value;
      if ( Value )
      {
        do
        {
          v4 = (_DWORD *)Value[1];
          RtlFreeHeap(HeapHandle, 0, Value);
          Value = v4;
        }
        while ( v4 );
        v2[-1].Value = 0;
        v1 = this;
      }
      v2->Value = 1;
    }
    RtlReleaseSRWLockExclusive(v2);
    v2 -= 2;
  }
  while ( (int)v2 >= (int)&stru_4B3A6724 );
  if ( v1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock.0 = ($64EDA4DD838E80CF9A7DD220E06F3FD2)17;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
}
