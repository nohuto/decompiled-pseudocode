/*
 * XREFs of EmonPauseProfiling @ 0x1404D41A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 EmonPauseProfiling()
{
  unsigned int v0; // r8d
  unsigned __int64 result; // rax
  __int64 v2; // r9
  unsigned int v3; // ecx
  int *v4; // r10
  __int64 v5; // r11
  unsigned int v6; // r11d
  unsigned __int64 v7; // r10
  int *v8; // rdx

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
        result = __readmsr(v3) & 0xFFBFFFFF;
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
    v6 = EmonNumberCounters;
    v7 = __readmsr(0x38Fu);
    if ( v0 < EmonNumberCounters )
    {
      v8 = (int *)(v2 + 16LL * v0);
      do
      {
        if ( *v8 < 2 )
          _bittestandreset64((__int64 *)&v7, v0 - EmonNumberArchCounters + 32);
        ++v0;
        v8 += 4;
      }
      while ( v0 < v6 );
    }
    result = v7;
    __writemsr(0x38Fu, v7);
  }
  return result;
}
