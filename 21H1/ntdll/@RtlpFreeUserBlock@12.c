/*
 * XREFs of @RtlpFreeUserBlock@12 @ 0x4B2C24DB
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 * Callees:
 *     _RtlpFreeUserBlockToHeap@12 @ 0x4B2ADD03 (_RtlpFreeUserBlockToHeap@12.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     @RtlpInterlockedPopEntrySList@4 @ 0x4B2DFE20 (@RtlpInterlockedPopEntrySList@4.c)
 *     _RtlpLogHeapSubSegmentAllocCached@16 @ 0x4B36F34D (_RtlpLogHeapSubSegmentAllocCached@16.c)
 *     _RtlpLogHeapSubSegmentFree@16 @ 0x4B36F3D2 (_RtlpLogHeapSubSegmentFree@16.c)
 *     _RtlpLogHeapSubSegmentFreeCached@16 @ 0x4B36F457 (_RtlpLogHeapSubSegmentFreeCached@16.c)
 */

int __fastcall RtlpFreeUserBlock(int a1, int *a2, int a3)
{
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // edx
  _DWORD *SharedData; // eax
  int v10; // eax
  int result; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // ebx
  unsigned int v16; // esi
  int v17; // eax
  int v19; // [esp+10h] [ebp-10h]
  int v20; // [esp+14h] [ebp-Ch]
  int v21; // [esp+14h] [ebp-Ch]
  unsigned int v22; // [esp+18h] [ebp-8h]
  unsigned int v23; // [esp+18h] [ebp-8h]
  unsigned int v24; // [esp+1Ch] [ebp-4h]

  v19 = *a2;
  v5 = 32 * *((unsigned __int8 *)a2 + 8) + a1 - 168;
  v6 = *(_DWORD *)(a1 + 12);
  v20 = v6;
  if ( *(_WORD *)(v6 + 232) && (*(_BYTE *)(v6 + 64) & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(v6 + 200));
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(v20 + 200));
  }
  v7 = *(unsigned __int16 *)(v5 + 4);
  v22 = v7;
  if ( v7 <= *(_DWORD *)(v5 + 12) || (v12 = *(_DWORD *)(v5 + 16), v7 <= *(_DWORD *)(v5 + 8) >> v12) )
  {
    v8 = 1 << *((_BYTE *)a2 + 8);
    if ( v8 > 0x78000 )
      v8 = 491520;
    v24 = v8 + *((unsigned __int16 *)a2 + 5);
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 44), v24);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v10 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v10 = 2147353472;
    if ( *(_BYTE *)v10 )
    {
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapSubSegmentFreeCached(v24, 8 * *(unsigned __int16 *)(v19 + 20));
    }
    RtlAcquireSRWLockExclusive(&RtlpSlistLockedAltLocks + ((v5 >> 2) & 0x1F));
    *a2 = *(_DWORD *)v5;
    ++*(_WORD *)(v5 + 4);
    *(_DWORD *)v5 = a2;
    RtlReleaseSRWLockExclusive(&RtlpSlistLockedAltLocks + ((v5 >> 2) & 0x1F));
    result = 1;
    ++*(_WORD *)(v5 + 22);
  }
  else
  {
    LOBYTE(v12) = *((_BYTE *)a2 + 8);
    v13 = 1 << v12;
    if ( (unsigned int)(1 << v12) > 0x78000 )
      v13 = 491520;
    v21 = v13 + *((unsigned __int16 *)a2 + 5);
    RtlpFreeUserBlockToHeap(*(PVOID *)(a1 + 12), a2, v12);
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (int)NtCurrentPeb()->SharedData + 550;
    else
      v14 = 2147353472;
    if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v15 = a1;
      RtlpLogHeapSubSegmentFree(v21, 8 * *(unsigned __int16 *)(v19 + 20));
    }
    else
    {
      v15 = a1;
    }
    result = v5 + 8;
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
    if ( v22 )
    {
      result = RtlpInterlockedPopEntrySList(v5);
      if ( result )
      {
        v16 = 1 << *(_BYTE *)(result + 8);
        if ( v16 > 0x78000 )
          v16 = 491520;
        v23 = v16 + *(unsigned __int16 *)(result + 10);
        RtlpFreeUserBlockToHeap(
          *(PVOID *)(v15 + 12),
          (_BYTE *)result,
          _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 44), -v23));
        if ( RtlGetCurrentServiceSessionId() )
          v17 = (int)NtCurrentPeb()->SharedData + 550;
        else
          v17 = 2147353472;
        if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        {
          RtlpLogHeapSubSegmentAllocCached(v23, 0);
          RtlpLogHeapSubSegmentFree(v23, 0);
        }
        result = v5 + 8;
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
      }
    }
  }
  return result;
}
