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

int __stdcall RtlGetSystemTimePrecise()
{
  __int64 TickLock; // rdi
  __int64 v1; // rdi
  unsigned __int64 v2; // rdi
  unsigned int v3; // ecx
  int v4; // eax
  unsigned __int64 v6; // kr08_8
  unsigned int v7; // [esp+Ch] [ebp-28h] BYREF
  unsigned int v8; // [esp+10h] [ebp-24h]
  int v9; // [esp+14h] [ebp-20h]
  int v10; // [esp+18h] [ebp-1Ch]
  unsigned int v11; // [esp+1Ch] [ebp-18h]
  int v12; // [esp+20h] [ebp-14h]
  unsigned int v13; // [esp+24h] [ebp-10h]
  unsigned int v14; // [esp+28h] [ebp-Ch]
  unsigned int v15; // [esp+2Ch] [ebp-8h]
  char v16; // [esp+33h] [ebp-1h]

  v12 = 0;
  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock(2147353408);
    v15 = MEMORY[0x7FFE0348];
    v11 = MEMORY[0x7FFE034C];
    v14 = MEMORY[0x7FFE0358];
    v13 = MEMORY[0x7FFE035C];
    v16 = MEMORY[0x7FFE0368];
    v10 = MEMORY[0x7FFE0014];
    v9 = MEMORY[0x7FFE0018];
    RtlQueryPerformanceCounter(&v7);
    if ( RtlTryEndReadTickLock(TickLock, HIDWORD(TickLock)) )
      break;
    _mm_pause();
  }
  HIDWORD(v1) = v8;
  if ( v8 < v11 || (LODWORD(v1) = v7, v8 <= v11) && v7 <= v15 )
  {
    v4 = v12;
  }
  else
  {
    v2 = v1 - __PAIR64__(v11, v15) - 1;
    if ( v16 )
      v2 <<= v16;
    v15 = ((unsigned int)v2 * (unsigned __int64)v13) >> 32;
    v3 = v2 * v13;
    if ( HIDWORD(v2) )
    {
      v6 = __PAIR64__(v15, v3) + HIDWORD(v2) * (unsigned __int64)v14;
      v14 = v6 < __PAIR64__(v15, v3);
      v4 = HIDWORD(v6) + v13 * HIDWORD(v2);
    }
    else
    {
      v4 = (__PAIR64__(v15, v3) + (((unsigned int)v2 * (unsigned __int64)v14) >> 32)) >> 32;
    }
  }
  return v10 + v4;
}
