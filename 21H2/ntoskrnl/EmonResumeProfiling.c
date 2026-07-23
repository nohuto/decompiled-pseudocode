/*
 * XREFs of EmonResumeProfiling @ 0x1404D4940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 EmonResumeProfiling()
{
  unsigned int v0; // r8d
  unsigned __int64 result; // rax
  __int64 v2; // r9
  unsigned int v3; // ecx
  int *v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  unsigned int v7; // r11d
  unsigned __int64 v8; // r10
  int *v9; // rdx

  v0 = 0;
  result = (unsigned int)EmonNumberArchCounters;
  v2 = EmonCounterStatus + 16LL * EmonNumberCounters * KeGetPcr()->Prcb.Number;
  if ( EmonNumberArchCounters )
  {
    v3 = 390;
    v4 = (int *)v2;
    v0 = EmonNumberArchCounters;
    v5 = (unsigned int)EmonNumberArchCounters;
    do
    {
      if ( *v4 < 2 )
      {
        v6 = __readmsr(v3);
        result = (unsigned int)v6 | 0x400000LL;
        __writemsr(v3, result);
      }
      ++v3;
      v4 += 4;
      --v5;
    }
    while ( v5 );
  }
  if ( (unsigned int)EmonVersion >= 2 )
  {
    v7 = EmonNumberCounters;
    v8 = __readmsr(0x38Fu);
    if ( v0 < EmonNumberCounters )
    {
      v9 = (int *)(v2 + 16LL * v0);
      do
      {
        if ( *v9 < 2 )
          _bittestandset64((__int64 *)&v8, v0 - EmonNumberArchCounters + 32);
        ++v0;
        v9 += 4;
      }
      while ( v0 < v7 );
    }
    result = v8;
    __writemsr(0x38Fu, v8);
  }
  return result;
}
