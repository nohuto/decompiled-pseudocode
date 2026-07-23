/*
 * XREFs of _RtlReadThreadProfilingData@12 @ 0x4B32CD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlReadThreadProfilingData(
        HANDLE PerformanceDataHandle,
        ULONG Flags,
        PPERFORMANCE_DATA PerformanceData)
{
  PPERFORMANCE_DATA v3; // edi
  char *v5; // ebx
  volatile signed __int64 *v6; // esi
  volatile unsigned __int64 v7; // kr08_8
  signed __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // ecx
  char *v11; // esi
  DWORD *p_Reserved; // edi
  unsigned __int64 v13; // rax
  int v14; // ecx
  int v15; // [esp+4h] [ebp-24h]
  int v16; // [esp+8h] [ebp-20h]
  int v17; // [esp+10h] [ebp-18h]
  ULONG v18; // [esp+18h] [ebp-10h]
  int v19; // [esp+1Ch] [ebp-Ch]
  __int64 v20; // [esp+20h] [ebp-8h]
  unsigned int v21; // [esp+20h] [ebp-8h]
  int v22; // [esp+24h] [ebp-4h]
  ULONG Flagsa; // [esp+34h] [ebp+Ch]

  v3 = PerformanceData;
  v19 = 0;
  if ( PerformanceData->Size != 288 )
    return -1073741306;
  if ( PerformanceData->Version != 1 )
    return -1073741583;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  PerformanceData->WaitReasonBitMap = 0LL;
  v5 = (char *)PerformanceDataHandle;
  v18 = Flags & 1;
  Flagsa = Flags & 2;
  do
  {
    v16 = *((_DWORD *)v5 + 4);
    v15 = *((_DWORD *)v5 + 5);
    v3->CycleTime = *((_QWORD *)v5 + 7) - *((_QWORD *)v5 + 6) + __rdtsc();
    if ( v18 )
    {
      v6 = (volatile signed __int64 *)(v5 + 24);
      v3->ContextSwitchCount = *((_DWORD *)v5 + 2);
      if ( *((_QWORD *)v5 + 3) )
      {
        do
        {
          HIDWORD(v8) = *((_DWORD *)v5 + 7);
          LODWORD(v20) = *(_DWORD *)v6;
          v7 = *v6;
          HIDWORD(v20) = HIDWORD(v7);
          LODWORD(v8) = v7;
        }
        while ( _InterlockedCompareExchange64(v6, 0LL, v8) != v20 );
        v3->WaitReasonBitMap |= v20;
        v5 = (char *)PerformanceDataHandle;
      }
    }
    if ( Flagsa )
    {
      v17 = *((_DWORD *)v5 + 8);
      if ( *((_QWORD *)v5 + 4) )
      {
        v9 = 0;
        v10 = 1;
        v21 = 0;
        v22 = 1;
        if ( *((_DWORD *)v5 + 3) )
        {
          v11 = v5 + 72;
          p_Reserved = &v3->HwCounters[0].Reserved;
          do
          {
            if ( (v17 & v10) != 0 )
            {
              *(p_Reserved - 1) = 0;
              *p_Reserved = 0;
              v13 = __readpmc(*((_DWORD *)v11 - 1));
              v9 = v21;
              *(_QWORD *)(p_Reserved + 1) = *((_QWORD *)v11 + 1) + (unsigned int)(v13 - *(_DWORD *)v11);
            }
            v11 += 24;
            v10 = 2 * v22;
            p_Reserved += 4;
            ++v9;
            v22 *= 2;
            v21 = v9;
          }
          while ( v9 < *((_DWORD *)v5 + 3) );
          v3 = PerformanceData;
        }
      }
      v3->HwCountersCount = v5[12];
    }
    v14 = ++v19;
  }
  while ( v16 != *((_DWORD *)v5 + 4) || v15 != *((_DWORD *)v5 + 5) );
  v3->RetryCount = v14 - 1;
  return 0;
}
