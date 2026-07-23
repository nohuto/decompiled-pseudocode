/*
 * XREFs of RtlpHeapTrkDumpOutstandingAllocs @ 0x4B364580
 * Callers:
 *     _RtlpHeapTrkLeakCallback@24 @ 0x4B364B50 (_RtlpHeapTrkLeakCallback@24.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlSizeHeap@12 @ 0x4B2DB840 (_RtlSizeHeap@12.c)
 *     RtlpHeapTrkReportResult @ 0x4B364CBD (RtlpHeapTrkReportResult.c)
 */

char RtlpHeapTrkDumpOutstandingAllocs()
{
  int v0; // edi
  unsigned int v1; // ebx
  int v2; // ecx
  _DWORD *v3; // esi
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  PVOID HeapHandle; // [esp+Ch] [ebp-14h]
  int v10; // [esp+10h] [ebp-10h]
  unsigned int NumberOfHeaps; // [esp+14h] [ebp-Ch]
  int v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h] BYREF
  int v14; // [esp+1Ch] [ebp-4h]

  v0 = 0;
  v1 = 0;
  v10 = 0;
  while ( 1 )
  {
    v2 = v0 & 0xF;
    v14 = v2;
    if ( _interlockedbittestandset(*(volatile signed __int32 **)(dword_4B3A6D84 + 4 * v2), 0) )
      return 0;
    v3 = *(_DWORD **)(v1 + dword_4B3A6C54);
    if ( v3 != (_DWORD *)(v1 + dword_4B3A6C54) )
    {
      while ( 1 )
      {
        v4 = v3[3];
        if ( v4 )
        {
          v5 = 0;
          HeapHandle = (PVOID)v3[2];
          NumberOfHeaps = NtCurrentPeb()->NumberOfHeaps;
          if ( NumberOfHeaps )
          {
            while ( 1 )
            {
              v0 = v10;
              if ( HeapHandle == NtCurrentPeb()->ProcessHeaps[v5] )
                break;
              if ( ++v5 >= NumberOfHeaps )
                goto LABEL_14;
            }
            v12 = v3[4];
            v13 = 8 * v4;
            v6 = RtlSizeHeap(HeapHandle, 0, (PVOID)(8 * v4));
            if ( v6 != -1 )
            {
              v7 = v12 ? *(_DWORD *)(v12 + 12) : 0;
              if ( !(unsigned __int8)RtlpHeapTrkReportResult(20, 3, v7, v6, &v13, 4) )
                break;
            }
          }
        }
LABEL_14:
        v3 = (_DWORD *)*v3;
        if ( v3 == (_DWORD *)(v1 + dword_4B3A6C54) )
        {
          v2 = v14;
          goto LABEL_16;
        }
      }
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * (v10 & 0xF)));
      return 0;
    }
LABEL_16:
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(dword_4B3A6D84 + 4 * v2));
    ++v0;
    v1 += 8;
    v10 = v0;
    if ( v1 >= 0xF778 )
      return 1;
  }
}
