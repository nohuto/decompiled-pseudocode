/*
 * XREFs of ?TimerStatistics@@YAXPEBUtagTIMER@@@Z @ 0x1C00C723C
 * Callers:
 *     TimersProc @ 0x1C00C6DF0 (TimersProc.c)
 *     ?ReadyTimer@@YAXPEAUtagTIMER@@K@Z @ 0x1C01EB5A4 (-ReadyTimer@@YAXPEAUtagTIMER@@K@Z.c)
 * Callees:
 *     memset @ 0x1C015C000 (memset.c)
 */

void __fastcall TimerStatistics(const struct tagTIMER *a1)
{
  __int64 v2; // rdi
  int v3; // r8d
  const wchar_t *v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  int v8; // r10d
  __int64 v9; // rdx
  int v10; // eax
  int *v11; // r10
  __int64 v12; // r11
  __int64 v13; // rax

  if ( (gdwExtraInstrumentations & 2) != 0 )
  {
    v2 = 0LL;
    v3 = dword_1C033B0A8;
    v4 = L"\n";
    v5 = *((_DWORD *)a1 + 10);
    v6 = 0LL;
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v8 = v7 - *((_DWORD *)a1 + 32);
    if ( !dword_1C033B0A8 )
      v3 = v7;
    dword_1C033B0A8 = v3;
    do
    {
      if ( v5 <= *(_DWORD *)v4 )
        break;
      v6 = (unsigned int)(v6 + 1);
      v4 += 2;
    }
    while ( (unsigned int)v6 < 7 );
    v9 = v6 + 8LL * gTimerCoalCurrentState;
    ++gaTimerDeliveryDistribution[2 * v9];
    v10 = v8 + gaTimerDeliveryDistribution[2 * v9 + 1] - *((_DWORD *)a1 + 10);
    gaTimerDeliveryDistribution[2 * v9 + 1] = v10;
    if ( gaTimerDeliveryDistribution[2 * v9] >= 0x7FFFFFFFu || v10 >= 0x3FFFFFFF || (unsigned int)(v7 - v3) >= 0xEA60 )
    {
      v11 = &dword_1C0339C98;
      v12 = 4LL;
      do
      {
        v13 = v2 + (gServiceSessionId != gSessionId ? 4 : 0);
        ++v2;
        *v11 = *((_DWORD *)&gTimerCoalescingSpec + v13);
        v11 += 16;
        --v12;
      }
      while ( v12 );
      EtwTraceTimerDelayStatistics((unsigned int)gSessionId, 8LL, 4LL, L"\n");
      dword_1C033B0A8 = v7;
      memset(gaTimerDeliveryDistribution, 0, 0x100uLL);
    }
  }
}
