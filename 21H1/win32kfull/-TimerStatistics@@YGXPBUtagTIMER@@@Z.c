/*
 * XREFs of ?TimerStatistics@@YGXPBUtagTIMER@@@Z @ 0x744DA
 * Callers:
 *     _TimersProc@0 @ 0x73F70 (_TimersProc@0.c)
 *     _DoTimer@4 @ 0x742FA (_DoTimer@4.c)
 *     ?ReadyTimer@@YGXPAUtagTIMER@@K@Z @ 0x156134 (-ReadyTimer@@YGXPAUtagTIMER@@K@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __thiscall TimerStatistics(_DWORD *this)
{
  int v1; // ebx
  int v2; // esi
  int v3; // edi
  unsigned int v4; // edx
  int v5; // edx
  int v6; // edi
  unsigned int i; // ecx
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // edx
  _DWORD *v11; // edi
  unsigned int v12; // ecx

  if ( (_gdwExtraInstrumentations & 2) != 0 )
  {
    v1 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v3 = MEMORY[0xFFDF0324];
      v4 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v3 = MEMORY[0xFFDF0324];
          v4 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v1 = MEMORY[0xFFDF0004];
      }
      v2 = v1 * (v3 << 8) + (((unsigned int)v1 * (unsigned __int64)v4) >> 24);
    }
    else
    {
      v2 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    v5 = dword_2785DC;
    v6 = v2 - this[18];
    if ( !dword_2785DC )
    {
      v5 = v2;
      dword_2785DC = v2;
    }
    for ( i = 0; i < 7; ++i )
    {
      if ( this[5] <= (unsigned int)dword_2583A0[i] )
        break;
    }
    v8 = i + 8 * gTimerCoalCurrentState;
    *(&gaTimerDeliveryDistribution + 2 * v8) = (struct TIMER_DELIVERY_DISTRIBUTION (*)[8])((char *)*(&gaTimerDeliveryDistribution + 2 * v8)
                                                                                         + 1);
    v9 = v6 + dword_275C44[2 * v8] - this[5];
    dword_275C44[2 * v8] = v9;
    if ( (unsigned int)*(&gaTimerDeliveryDistribution + 2 * v8) >= 0x7FFFFFFF
      || v9 >= 0x3FFFFFFF
      || (unsigned int)(v2 - v5) >= 0xEA60 )
    {
      v10 = 0;
      v11 = &unk_275C78;
      do
      {
        v12 = v10 + (_gServiceSessionId != _gSessionId ? 4 : 0);
        ++v10;
        *v11 = *(&gTimerCoalescingSpec + v12);
        v11 += 16;
      }
      while ( v10 < 4 );
      EtwTraceTimerDelayStatistics(_gSessionId, 8, 4, dword_2583A0, 32, 8, &gaTimerDeliveryDistribution);
      dword_2785DC = v2;
      memset(&gaTimerDeliveryDistribution, 0, 0x100u);
    }
  }
}
