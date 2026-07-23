/*
 * XREFs of _RtlGetSystemTimePrecise@0 @ 0x4B2DBB10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlTryEndReadTickLock@12 @ 0x4B2DBBEF (_RtlTryEndReadTickLock@12.c)
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _RtlBeginReadTickLock@4 @ 0x4B2DBE26 (_RtlBeginReadTickLock@4.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 TickLock; // rdi
  __int64 v1; // rdi
  int v2; // ebx
  unsigned __int64 v3; // rdi
  unsigned int v4; // ecx
  int v5; // eax
  bool v6; // cf
  LARGE_INTEGER result; // rax
  unsigned __int64 v8; // kr08_8
  LARGE_INTEGER PerformanceCounter; // [esp+Ch] [ebp-28h] BYREF
  int v10; // [esp+14h] [ebp-20h]
  int v11; // [esp+18h] [ebp-1Ch]
  unsigned int v12; // [esp+1Ch] [ebp-18h]
  int v13; // [esp+20h] [ebp-14h]
  unsigned int v14; // [esp+24h] [ebp-10h]
  unsigned int v15; // [esp+28h] [ebp-Ch]
  unsigned int v16; // [esp+2Ch] [ebp-8h]
  char v17; // [esp+33h] [ebp-1h]

  v13 = 0;
  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock(2147353408);
    v16 = MEMORY[0x7FFE0348];
    v12 = MEMORY[0x7FFE034C];
    v15 = MEMORY[0x7FFE0358];
    v14 = MEMORY[0x7FFE035C];
    v17 = MEMORY[0x7FFE0368];
    v11 = MEMORY[0x7FFE0014];
    v10 = MEMORY[0x7FFE0018];
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( RtlTryEndReadTickLock(TickLock, HIDWORD(TickLock)) )
      break;
    _mm_pause();
  }
  HIDWORD(v1) = PerformanceCounter.HighPart;
  v2 = 0;
  if ( PerformanceCounter.HighPart < v12
    || (LODWORD(v1) = PerformanceCounter.LowPart, PerformanceCounter.HighPart <= v12)
    && PerformanceCounter.LowPart <= v16 )
  {
    v5 = v13;
  }
  else
  {
    v3 = v1 - __PAIR64__(v12, v16) - 1;
    if ( v17 )
      v3 <<= v17;
    v16 = ((unsigned int)v3 * (unsigned __int64)v14) >> 32;
    v4 = v3 * v14;
    if ( HIDWORD(v3) )
    {
      v8 = __PAIR64__(v16, v4) + HIDWORD(v3) * (unsigned __int64)v15;
      v15 = v8 < __PAIR64__(v16, v4);
      v2 = (__PAIR64__(v15, HIDWORD(v8)) + v14 * (unsigned __int64)HIDWORD(v3)) >> 32;
      v5 = HIDWORD(v8) + v14 * HIDWORD(v3);
    }
    else
    {
      v5 = (__PAIR64__(v16, v4) + (((unsigned int)v3 * (unsigned __int64)v15) >> 32)) >> 32;
    }
  }
  v6 = __CFADD__(v11, v5);
  result.LowPart = v11 + v5;
  result.HighPart = v2 + v6 + v10;
  return result;
}
