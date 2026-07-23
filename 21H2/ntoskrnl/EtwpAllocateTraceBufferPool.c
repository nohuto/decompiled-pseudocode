/*
 * XREFs of EtwpAllocateTraceBufferPool @ 0x1406B6780
 * Callers:
 *     EtwpStartLogger @ 0x1406B5480 (EtwpStartLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140253DF8 (EtwpQueryUsedProcessorCount.c)
 *     EtwpAllocateFreeBuffers @ 0x14029E658 (EtwpAllocateFreeBuffers.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1406B66E8 (EtwpGetSystemMaximumBufferCount.c)
 */

__int64 __fastcall EtwpAllocateTraceBufferPool(unsigned int *a1)
{
  unsigned int SystemMaximumBufferCount; // eax
  int v3; // r10d
  unsigned int v4; // edi
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v11; // eax

  EtwpQueryUsedProcessorCount((__int64)a1);
  SystemMaximumBufferCount = EtwpGetSystemMaximumBufferCount(a1);
  v4 = a1[60];
  v5 = a1[3];
  v6 = 2 * v3 + 4;
  if ( (v5 & 0x4000000) == 0 )
    v6 = 2 * v3;
  v7 = v6;
  if ( SystemMaximumBufferCount >= v6 )
    v7 = SystemMaximumBufferCount;
  v8 = a1[63];
  if ( v8 <= v6 )
    v8 = v6;
  if ( v8 >= v7 )
    v8 = v7;
  a1[63] = v8;
  if ( v4 <= v6 )
    v4 = v6;
  if ( v4 >= v7 )
    v4 = v7;
  a1[60] = v4;
  if ( v4 > v8 )
  {
    a1[63] = v4;
    v8 = v4;
  }
  if ( (v5 & 0x400) != 0 )
  {
    v8 = v4;
    a1[63] = v4;
  }
  if ( (v5 & 0x40000) != 0 )
    return 0LL;
  v9 = a1[57];
  if ( v9 )
  {
    v11 = v8 - v3 - 1;
    if ( v9 > v11 )
      a1[57] = v11;
  }
  if ( (unsigned int)EtwpAllocateFreeBuffers((__int64)a1, v4) >= v4 )
    return 0LL;
  else
    return 3221225495LL;
}
