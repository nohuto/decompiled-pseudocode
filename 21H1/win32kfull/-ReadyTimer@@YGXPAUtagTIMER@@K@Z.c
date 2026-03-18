/*
 * XREFs of ?ReadyTimer@@YGXPAUtagTIMER@@K@Z @ 0x156134
 * Callers:
 *     _TimersProc@0 @ 0x73F70 (_TimersProc@0.c)
 * Callees:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     ?TimerStatistics@@YGXPBUtagTIMER@@@Z @ 0x744DA (-TimerStatistics@@YGXPBUtagTIMER@@@Z.c)
 *     ?ApplyTimerDelay@@YGXPAUtagTIMER@@@Z @ 0x1560E5 (-ApplyTimerDelay@@YGXPAUtagTIMER@@@Z.c)
 */

void __fastcall ReadyTimer(int a1, int a2)
{
  int v4; // ecx
  int v5; // eax
  int *v6; // eax
  int v7; // ecx
  int **v8; // edx

  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 20);
  ApplyTimerDelay((_DWORD *)a1);
  EtwTraceTimerProc(a1);
  v4 = *(_DWORD *)(a1 + 28);
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 0x10) != 0 )
    {
      v4 |= 0x20u;
      *(_DWORD *)(a1 + 28) = v4;
    }
    if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)(a1 + 76) )
      *(_DWORD *)(a1 + 76) = a2;
    if ( (v4 & 4) != 0 )
    {
      TimerStatistics((_DWORD *)a1);
      (*(void (__stdcall **)(_DWORD, int, _DWORD, int))(a1 + 16))(0, 280, *(_DWORD *)(a1 + 56), a1);
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 76);
    }
    else
    {
      v5 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 28) = v4 | 1;
      ++*(_DWORD *)(v5 + 324);
      v6 = (int *)(a1 + 36);
      v7 = *(_DWORD *)(a1 + 12) + 680;
      v8 = *(int ***)(*(_DWORD *)(a1 + 12) + 684);
      if ( *v8 != (int *)v7 )
        __fastfail(3u);
      *v6 = v7;
      *(_DWORD *)(a1 + 40) = v8;
      *v8 = v6;
      *(_DWORD *)(v7 + 4) = v6;
      SetWakeBit(*(_DWORD *)(a1 + 12), 16);
      ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 232) + 640);
    }
  }
}
