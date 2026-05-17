/*
 * XREFs of _LdrpUnlockTlsDelayedReclaimTable@4 @ 0x4B33477F
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __thiscall LdrpUnlockTlsDelayedReclaimTable(void *this)
{
  void *v1; // ebx
  volatile signed __int32 *v2; // edi
  int v3; // eax
  int v4; // esi
  void *ProcessHeap; // [esp+14h] [ebp-4h]

  v1 = this;
  v2 = (volatile signed __int32 *)&unk_4B3A679C;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  do
  {
    if ( v1 )
    {
      v3 = *((_DWORD *)v2 - 1);
      if ( v3 )
      {
        do
        {
          v4 = *(_DWORD *)(v3 + 4);
          RtlFreeHeap((int)ProcessHeap, 0, v3);
          v3 = v4;
        }
        while ( v4 );
        *((_DWORD *)v2 - 1) = 0;
        v1 = this;
      }
      *v2 = 1;
    }
    RtlReleaseSRWLockExclusive(v2);
    v2 -= 2;
  }
  while ( (int)v2 >= (int)dword_4B3A6724 );
  if ( v1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock = 17;
  }
  return RtlReleaseSRWLockShared(&LdrpTlsLock);
}
