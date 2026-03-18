/*
 * XREFs of _TimersProc@0 @ 0x73F70
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     ?CoalescableDueTime@@YGKPBUtagTIMER@@@Z @ 0x2CFDA (-CoalescableDueTime@@YGKPBUtagTIMER@@@Z.c)
 *     ?TimerStatistics@@YGXPBUtagTIMER@@@Z @ 0x744DA (-TimerStatistics@@YGXPBUtagTIMER@@@Z.c)
 *     _WakeWowTask@4 @ 0x155BA7 (_WakeWowTask@4.c)
 *     ?ReadyTimer@@YGXPAUtagTIMER@@K@Z @ 0x156134 (-ReadyTimer@@YGXPAUtagTIMER@@K@Z.c)
 *     _ThreadLockExchangeWorker@8 @ 0x1562CB (_ThreadLockExchangeWorker@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
BOOLEAN __stdcall TimersProc()
{
  int DLT; // eax
  int v1; // esi
  int v2; // ebx
  BOOLEAN result; // al
  int v4; // edi
  unsigned int v5; // edx
  int v6; // [esp+10h] [ebp-28h] BYREF
  int v7; // [esp+14h] [ebp-24h]
  int v8; // [esp+18h] [ebp-20h]
  int v9; // [esp+24h] [ebp-14h]
  int v10; // [esp+28h] [ebp-10h]
  int v11; // [esp+2Ch] [ebp-Ch]
  int v12; // [esp+34h] [ebp-4h]

  gbTimersProcActive = 1;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  gbRITAlerted = 0;
  DLT = DLT_HANDLEMANAGER::getDLT();
  GetDomainLockRef(DLT);
  do
  {
    gbRITRescan = 0;
    v1 = MEMORY[0xFFDF0004];
    v10 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v4 = MEMORY[0xFFDF0324];
      v5 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v4 = MEMORY[0xFFDF0324];
          v5 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v1 = v10;
      }
      v2 = v1 * (v4 << 8) + (((unsigned int)v1 * (unsigned __int64)v5) >> 24);
    }
    else
    {
      v2 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
    v10 = v2;
    v12 = 0x7FFFFFFF;
    _gcmsLastTimer = v2;
    v9 = v2 - _gcmsLastTimer;
    v11 = 0x7FFFFFFF;
    v6 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v6;
    v7 = 0;
    ThreadUnlockWorker1();
  }
  while ( gbRITRescan );
  gdmsNextTimer = 0x7FFFFFFF;
  guNextCoalescableTimerDue = 0x7FFFFFFF;
  result = KeSetTimer(_gptmrMaster, (LARGE_INTEGER)-21474836470000LL, 0);
  gbTimersProcActive = 0;
  return result;
}
