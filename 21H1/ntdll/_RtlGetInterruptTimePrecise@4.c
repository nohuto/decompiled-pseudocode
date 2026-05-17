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

int __stdcall RtlGetInterruptTimePrecise(unsigned __int64 *a1)
{
  int TickLock; // edi
  int v2; // edx
  int v3; // esi
  unsigned int v4; // ecx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v11; // [esp+Ch] [ebp-1Ch] BYREF
  int v12; // [esp+14h] [ebp-14h]
  int v13; // [esp+18h] [ebp-10h]
  unsigned int v14; // [esp+1Ch] [ebp-Ch]
  unsigned int v15; // [esp+20h] [ebp-8h]
  unsigned int v16; // [esp+24h] [ebp-4h]

  v15 = 0;
  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock((int *)0x7FFE0340);
    v3 = v2;
    v16 = MEMORY[0x7FFE0350];
    v14 = MEMORY[0x7FFE0354];
    v13 = MEMORY[0x7FFE0008];
    v12 = MEMORY[0x7FFE000C];
    RtlQueryPerformanceCounter(&v11);
    if ( RtlTryEndReadTickLock((int *)0x7FFE0340, TickLock, v3) )
      break;
    _mm_pause();
  }
  v4 = v14;
  v5 = v11;
  *a1 = v11;
  if ( v5 <= __PAIR64__(v4, v16) )
  {
    v8 = v15;
  }
  else
  {
    v6 = v5 - __PAIR64__(v4, v16) - 1;
    if ( MEMORY[0x7FFE0369] )
      v6 <<= MEMORY[0x7FFE0369];
    v16 = ((unsigned int)v6 * (unsigned __int64)MEMORY[0x7FFE0364]) >> 32;
    v7 = v6 * MEMORY[0x7FFE0364];
    if ( HIDWORD(v6) )
    {
      LODWORD(v9) = HIDWORD(v6) * MEMORY[0x7FFE0360];
      HIDWORD(v9) = v16;
      v16 = (__PAIR64__((HIDWORD(v6) * (unsigned __int64)MEMORY[0x7FFE0360]) >> 32, v7) + v9) >> 32;
      v8 = v16 + MEMORY[0x7FFE0364] * HIDWORD(v6);
    }
    else
    {
      v8 = (__PAIR64__(v16, v7) + (((unsigned int)v6 * (unsigned __int64)MEMORY[0x7FFE0360]) >> 32)) >> 32;
    }
  }
  return v13 + v8;
}
