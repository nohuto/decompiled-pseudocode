/*
 * XREFs of EmonConfigureCounter @ 0x14038891C
 * Callers:
 *     EmonDisableMonitoring @ 0x1404CE4C0 (EmonDisableMonitoring.c)
 *     EmonEnableMonitoring @ 0x1404CE580 (EmonEnableMonitoring.c)
 *     EmonRestartProfiling @ 0x140994890 (EmonRestartProfiling.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EmonConfigureCounter(unsigned int a1, char a2, int a3, unsigned int a4, char a5)
{
  __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned int v7; // esi
  unsigned int v8; // r10d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax

  v5 = a4;
  if ( a1 >= EmonNumberArchCounters )
  {
    v8 = a1 - EmonNumberArchCounters;
    v7 = 909;
    v9 = __readmsr(0x38Fu);
    v10 = ~(15LL << (4 * ((unsigned __int8)a1 - (unsigned __int8)EmonNumberArchCounters))) & __readmsr(0x38Du);
    if ( a2 )
    {
      v10 |= v5;
      if ( a5 )
        v10 |= 8LL << (4 * (unsigned __int8)v8);
      if ( (unsigned int)EmonFixedCounterResolution < 0x40 )
        v12 = (1LL << EmonFixedCounterResolution) - 1;
      else
        v12 = -1LL;
      __writemsr(v8 + 777, v12 & -(__int64)(a3 & (unsigned int)-(a5 != 0)));
      _bittestandset64((__int64 *)&v9, v8 + 32);
    }
    else
    {
      _bittestandreset64((__int64 *)&v9, v8 + 32);
    }
    __writemsr(0x38Fu, v9);
    result = v10;
  }
  else
  {
    result = 0LL;
    if ( a2 )
    {
      if ( (unsigned int)EmonCounterResolution < 0x40 )
        v11 = (1LL << EmonCounterResolution) - 1;
      else
        v11 = -1LL;
      __writemsr(a1 + 193, v11 & -(__int64)(a3 & (unsigned int)-(a5 != 0)));
      result = a4 | (a5 != 0 ? 5242880 : 0x400000);
    }
    v7 = a1 + 390;
  }
  __writemsr(v7, result);
  return result;
}
