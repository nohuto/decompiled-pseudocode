/*
 * XREFs of @RtlpAllocateUserBlock@16 @ 0x4B2C3610
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 * Callees:
 *     _RtlpAllocateUserBlockFromHeap@16 @ 0x4B2C01B1 (_RtlpAllocateUserBlockFromHeap@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpLogHeapSubSegmentAllocCached@16 @ 0x4B36F34D (_RtlpLogHeapSubSegmentAllocCached@16.c)
 */

_BYTE *__fastcall RtlpAllocateUserBlock(int a1, unsigned __int8 a2, int a3, char a4)
{
  int v4; // edi
  _BYTE *UserBlockFromHeap; // esi
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _DWORD *SharedData; // eax
  int v9; // eax
  unsigned int v10; // edx
  unsigned __int32 v12; // eax
  volatile signed __int32 *v13; // edx
  signed __int32 v14; // ecx
  int v15; // [esp+14h] [ebp-Ch]
  unsigned int v16; // [esp+14h] [ebp-Ch]

  v15 = a1 + 32 * a2;
  v4 = v15 - 168;
  ++*(_WORD *)(v15 - 168 + 20);
  RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)(v15 - 168) >> 2) & 0x1F));
  UserBlockFromHeap = *(_BYTE **)(v15 - 168);
  if ( UserBlockFromHeap )
  {
    *(_DWORD *)v4 = *(_DWORD *)UserBlockFromHeap;
    --*(_WORD *)(v4 + 4);
  }
  RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + (((unsigned int)(v15 - 168) >> 2) & 0x1F));
  if ( UserBlockFromHeap )
  {
    ++*(_WORD *)(v4 + 24);
LABEL_5:
    v6 = 1 << UserBlockFromHeap[8];
    if ( v6 > 0x78000 )
      v6 = 491520;
    v7 = v6 + *((unsigned __int16 *)UserBlockFromHeap + 5);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v9 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v9 = 2147353472;
    if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapSubSegmentAllocCached(v7, a3);
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), -v7);
    goto LABEL_11;
  }
  if ( a2 > 7u )
  {
    v16 = v15 - 200;
    RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + ((v16 >> 2) & 0x1F));
    UserBlockFromHeap = *(_BYTE **)v16;
    if ( *(_DWORD *)v16 )
    {
      *(_DWORD *)v16 = *(_DWORD *)UserBlockFromHeap;
      --*(_WORD *)(v16 + 4);
    }
    RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + ((v16 >> 2) & 0x1F));
    if ( UserBlockFromHeap )
      goto LABEL_5;
  }
  UserBlockFromHeap = RtlpAllocateUserBlockFromHeap(*(PRTL_CRITICAL_SECTION **)(a1 + 12), a2, a3, a4);
  if ( UserBlockFromHeap )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 32 * (a2 - 5)));
LABEL_11:
  v10 = *(unsigned __int16 *)(v4 + 20);
  if ( v10 > 0x40 )
  {
    if ( v10 >= *(unsigned __int16 *)(v4 + 22) + (*(unsigned __int16 *)(v4 + 22) >> 1)
      || *(unsigned __int16 *)(v4 + 24) >= v10 - (v10 >> 1) )
    {
      goto LABEL_22;
    }
    v12 = *(_DWORD *)(v4 + 12);
    v13 = (volatile signed __int32 *)(v4 + 12);
    if ( v12 >= 2 )
    {
      v12 = *(_DWORD *)(v4 + 16);
      v13 = (volatile signed __int32 *)(v4 + 16);
      if ( v12 <= 2 )
        goto LABEL_22;
      v14 = v12 - 1;
    }
    else
    {
      v14 = v12 + 1;
    }
    _InterlockedCompareExchange(v13, v14, v12);
LABEL_22:
    *(_WORD *)(v4 + 20) = 0;
    *(_WORD *)(v4 + 22) = 0;
    *(_WORD *)(v4 + 24) = 0;
  }
  return UserBlockFromHeap;
}
