/*
 * XREFs of HalpInterruptSetRemappedLineStateInternal @ 0x1403CB924
 * Callers:
 *     HalpInterruptRemap @ 0x140378130 (HalpInterruptRemap.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8E94 (HalpTimerInitializeHypervisorTimer.c)
 * Callees:
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptGetPriority @ 0x1403A41CC (HalpInterruptGetPriority.c)
 */

__int64 __fastcall HalpInterruptSetRemappedLineStateInternal(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v4; // ebx
  _QWORD *Lines; // rax
  __int64 v7; // rcx
  int Priority; // eax
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // r10

  v4 = 0;
  Lines = HalpInterruptFindLines(a2);
  if ( Lines )
  {
    v7 = Lines[5];
    *(_OWORD *)v7 = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a3 + 32);
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(a3 + 48);
    Priority = HalpInterruptGetPriority(a1, *(_DWORD *)(a3 + 48));
    *(_DWORD *)(*(_QWORD *)(v9 + 40) + v10 + 52) = Priority;
    *(_BYTE *)(*(_QWORD *)(v9 + 48) + 16 * v11 + 12) = 1;
  }
  else
  {
    HalpInterruptLastProblem = 18;
    if ( a1 )
    {
      *(_QWORD *)(a1 + 292) = 18LL;
      *(_QWORD *)(a1 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *(_DWORD *)(a1 + 312) = 3317;
    }
    return (unsigned int)-1073741811;
  }
  return v4;
}
