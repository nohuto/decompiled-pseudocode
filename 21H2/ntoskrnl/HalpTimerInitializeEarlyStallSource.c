/*
 * XREFs of HalpTimerInitializeEarlyStallSource @ 0x1403BBDD4
 * Callers:
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpFindTimer @ 0x1403ACEFC (HalpFindTimer.c)
 *     HalpTimerInitialize @ 0x1403BC620 (HalpTimerInitialize.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1403BCA0C (HalpTimerRegisterBuiltinPluginsCommon.c)
 */

__int64 __fastcall HalpTimerInitializeEarlyStallSource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  ULONG_PTR *Timer; // rax
  ULONG_PTR *v7; // rbx
  unsigned int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rcx

  LODWORD(HalpRegisteredTimerCount) = 0;
  HalpTimerLoaderBlock = a1;
  qword_140C4E4E8 = (__int64)&HalpRegisteredTimers;
  HalpRegisteredTimers = (ULONG_PTR)&HalpRegisteredTimers;
  v5 = HalpTimerRegisterBuiltinPluginsCommon(0LL, a2, a3, a4);
  if ( v5 < 0 )
  {
    HalpTimerLastProblem = 14;
  }
  else if ( (_DWORD)HalpRegisteredTimerCount && (Timer = HalpFindTimer(0, 2, 0, 0, 1), (v7 = Timer) != 0LL) )
  {
    HalpPerformanceCounter = (ULONG_PTR)Timer;
    HalpStallCounter = (__int64)Timer;
    v5 = HalpTimerInitialize(Timer);
    if ( v5 >= 0 )
    {
      v8 = v7[23] & 0xFFFFFFFB;
      v9 = v7[24] == 0;
      *((_DWORD *)v7 + 46) = v8;
      if ( v9 )
      {
        *((_DWORD *)v7 + 46) = v8 | 8;
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2496LL);
        v7[24] = v10;
        if ( v10 < 0x3E8 )
        {
          *((_DWORD *)v7 + 64) = 0;
          HalpTimerLastProblem = 40;
          *((_DWORD *)v7 + 63) = 40;
          v7[33] = (ULONG_PTR)"minkernel\\hals\\lib\\timers\\common\\timer.c";
          v7[24] = 15625000LL;
          *((_DWORD *)v7 + 68) = 1186;
        }
      }
      else
      {
        HalpTimerProcessorFrequencyKnown = 1;
      }
    }
  }
  else
  {
    v5 = -1073741823;
    HalpTimerLastProblem = 21;
  }
  return (unsigned int)v5;
}
