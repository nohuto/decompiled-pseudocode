/*
 * XREFs of _RtlGetInterruptTimePrecise@4 @ 0x4B3448C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlTryEndReadTickLock@12 @ 0x4B2DBBEF (_RtlTryEndReadTickLock@12.c)
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _RtlBeginReadTickLock@4 @ 0x4B2DBE26 (_RtlBeginReadTickLock@4.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  int TickLock; // edi
  int v2; // edx
  int v3; // esi
  unsigned int v4; // ecx
  LARGE_INTEGER v5; // rdi
  int v6; // ebx
  unsigned __int64 v7; // rdi
  unsigned int v8; // ecx
  int v9; // eax
  __int64 v10; // rax
  bool v11; // cf
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v13; // [esp+Ch] [ebp-1Ch] BYREF
  int v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+18h] [ebp-10h]
  unsigned int v16; // [esp+1Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp-8h]
  unsigned int v18; // [esp+24h] [ebp-4h]

  v17 = 0;
  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock((int *)0x7FFE0340);
    v3 = v2;
    v18 = MEMORY[0x7FFE0350];
    v16 = MEMORY[0x7FFE0354];
    v15 = MEMORY[0x7FFE0008];
    v14 = MEMORY[0x7FFE000C];
    RtlQueryPerformanceCounter(&v13);
    if ( RtlTryEndReadTickLock((int *)0x7FFE0340, TickLock, v3) )
      break;
    _mm_pause();
  }
  v4 = v16;
  v5 = v13;
  *PerformanceCounter = v13;
  v6 = 0;
  if ( v5.QuadPart <= __PAIR64__(v4, v18) )
  {
    v9 = v17;
  }
  else
  {
    v7 = v5.QuadPart - __PAIR64__(v4, v18) - 1;
    if ( MEMORY[0x7FFE0369] )
      v7 <<= MEMORY[0x7FFE0369];
    v18 = ((unsigned int)v7 * (unsigned __int64)MEMORY[0x7FFE0364]) >> 32;
    v8 = v7 * MEMORY[0x7FFE0364];
    if ( HIDWORD(v7) )
    {
      LODWORD(v10) = HIDWORD(v7) * MEMORY[0x7FFE0360];
      HIDWORD(v10) = v18;
      LODWORD(v7) = (__PAIR64__((HIDWORD(v7) * (unsigned __int64)MEMORY[0x7FFE0360]) >> 32, v8) + v10) >> 32;
      v18 = v7;
      v6 = (__PAIR64__(
              __PAIR64__((HIDWORD(v7) * (unsigned __int64)MEMORY[0x7FFE0360]) >> 32, v8) + v10 < __PAIR64__(
                                                                                                   HIDWORD(v10),
                                                                                                   v8),
              v7)
          + MEMORY[0x7FFE0364] * (unsigned __int64)HIDWORD(v7)) >> 32;
      v9 = v7 + MEMORY[0x7FFE0364] * HIDWORD(v7);
    }
    else
    {
      v9 = (__PAIR64__(v18, v8) + (((unsigned int)v7 * (unsigned __int64)MEMORY[0x7FFE0360]) >> 32)) >> 32;
    }
  }
  v11 = __CFADD__(v15, v9);
  result.LowPart = v15 + v9;
  result.HighPart = v6 + v11 + v14;
  return result;
}
