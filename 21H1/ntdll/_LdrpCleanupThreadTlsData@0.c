/*
 * XREFs of _LdrpCleanupThreadTlsData@0 @ 0x4B2E65A0
 * Callers:
 *     _LdrpFreeTls@0 @ 0x4B2E6510 (_LdrpFreeTls@0.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

void __stdcall LdrpCleanupThreadTlsData()
{
  unsigned int UniqueThread; // ecx
  _DWORD *v1; // edi
  _DWORD *v2; // ebx
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  PVOID HeapHandle; // [esp+Ch] [ebp-Ch]
  unsigned int v8; // [esp+14h] [ebp-4h]

  UniqueThread = (unsigned int)NtCurrentTeb()->ClientId.UniqueThread;
  v1 = 0;
  v2 = 0;
  v3 = (UniqueThread >> 2) & 0xF;
  v8 = UniqueThread;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  RtlAcquireSRWLockExclusive(&stru_4B3A6724 + 2 * v3);
  v4 = (_DWORD *)LdrpDelayedTlsReclaimTable[2 * v3];
  if ( v4 )
  {
    do
    {
      v5 = v4[1];
      if ( *v4 == v8 )
      {
        if ( v2 )
          v2[1] = v5;
        else
          LdrpDelayedTlsReclaimTable[2 * v3] = v5;
        v4[1] = v1;
        v1 = v4;
        v4 = v2;
      }
      v2 = v4;
      v4 = (_DWORD *)v5;
    }
    while ( v5 );
  }
  RtlReleaseSRWLockExclusive(&stru_4B3A6724 + 2 * v3);
  if ( v1 )
  {
    do
    {
      v6 = (_DWORD *)v1[1];
      RtlFreeHeap(HeapHandle, 0, v1);
      v1 = v6;
    }
    while ( v6 );
  }
}
