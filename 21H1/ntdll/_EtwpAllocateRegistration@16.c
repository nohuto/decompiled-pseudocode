/*
 * XREFs of _EtwpAllocateRegistration@16 @ 0x4B2E1B6C
 * Callers:
 *     _EtwNotificationRegister@20 @ 0x4B2C1950 (_EtwNotificationRegister@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 */

int __fastcall EtwpAllocateRegistration(_DWORD *a1, int a2, int a3, __int16 a4)
{
  signed __int32 v4; // esi
  unsigned __int32 v5; // eax
  int v6; // ebx
  _DWORD *Heap; // eax
  __int16 v8; // cx
  signed __int16 v9; // ax
  SIZE_T v11; // [esp-4h] [ebp-1Ch]

  v4 = EtwpRegistrationCount;
  if ( (unsigned int)EtwpRegistrationCount < 0x800 )
  {
    while ( 1 )
    {
      v5 = _InterlockedCompareExchange(&EtwpRegistrationCount, v4 + 1, v4);
      if ( v4 == v5 )
        break;
      v4 = v5;
      if ( v5 >= 0x800 )
        return 0;
    }
    RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)&EtwpFreeRegistrationList >> 2) & 0x1F));
    v6 = EtwpFreeRegistrationList;
    if ( EtwpFreeRegistrationList )
    {
      EtwpFreeRegistrationList = *(_DWORD *)EtwpFreeRegistrationList;
      LOWORD(dword_4B3A41E4) = dword_4B3A41E4 - 1;
    }
    RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)&EtwpFreeRegistrationList >> 2) & 0x1F));
    if ( !v6 )
    {
      LODWORD(v11) = 208;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v11);
      v6 = (int)Heap;
      if ( !Heap )
      {
        _InterlockedDecrement(&EtwpRegistrationCount);
        return v6;
      }
      Heap[9] = 0;
      Heap[10] = 0;
    }
    v8 = *(_WORD *)(v6 + 54);
    *(_DWORD *)(v6 + 12) = *a1;
    *(_DWORD *)(v6 + 16) = a1[1];
    *(_DWORD *)(v6 + 20) = a1[2];
    *(_DWORD *)(v6 + 24) = a1[3];
    *(_DWORD *)(v6 + 28) = a2;
    *(_DWORD *)(v6 + 32) = a3;
    *(_WORD *)(v6 + 54) = a4 & 0x3FFF | v8 & 0x8000;
    do
    {
      v9 = _InterlockedIncrement16(&EtwpRegistrationSequence);
      *(_WORD *)(v6 + 52) = v9;
    }
    while ( !v9 );
    return v6;
  }
  return 0;
}
