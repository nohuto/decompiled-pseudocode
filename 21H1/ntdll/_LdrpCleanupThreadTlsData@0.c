/*
 * XREFs of _LdrpCleanupThreadTlsData@0 @ 0x4B2E65A0
 * Callers:
 *     _LdrpFreeTls@0 @ 0x4B2E6510 (_LdrpFreeTls@0.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

signed __int32 __stdcall LdrpCleanupThreadTlsData()
{
  unsigned int UniqueThread; // ecx
  int v1; // edi
  _DWORD *v2; // ebx
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  signed __int32 result; // eax
  int v7; // esi
  void *ProcessHeap; // [esp+Ch] [ebp-Ch]
  unsigned int v9; // [esp+14h] [ebp-4h]

  UniqueThread = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
  v1 = 0;
  v2 = 0;
  v3 = (UniqueThread >> 2) & 0xF;
  v9 = UniqueThread;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockExclusive(&dword_4B3A6724[2 * v3]);
  v4 = (_DWORD *)LdrpDelayedTlsReclaimTable[2 * v3];
  if ( v4 )
  {
    do
    {
      v5 = v4[1];
      if ( *v4 == v9 )
      {
        if ( v2 )
          v2[1] = v5;
        else
          LdrpDelayedTlsReclaimTable[2 * v3] = v5;
        v4[1] = v1;
        v1 = (int)v4;
        v4 = v2;
      }
      v2 = v4;
      v4 = (_DWORD *)v5;
    }
    while ( v5 );
  }
  result = RtlReleaseSRWLockExclusive(&dword_4B3A6724[2 * v3]);
  if ( v1 )
  {
    do
    {
      v7 = *(_DWORD *)(v1 + 4);
      result = RtlFreeHeap((int)ProcessHeap, 0, v1);
      v1 = v7;
    }
    while ( v7 );
  }
  return result;
}
