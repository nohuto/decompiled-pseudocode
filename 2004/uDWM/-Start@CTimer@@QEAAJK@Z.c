/*
 * XREFs of ?Start@CTimer@@QEAAJK@Z @ 0x18002FF84
 * Callers:
 *     ?_SetTimer@CAnimationClock@@AEAAJK@Z @ 0x18002F410 (-_SetTimer@CAnimationClock@@AEAAJK@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x180041128 (-_OnTimerCallback@CTimer@@AEAAXXZ.c)
 */

__int64 __fastcall CTimer::Start(CTimer *this, unsigned int a2)
{
  __int64 v3; // rsi
  signed int v4; // ebx
  PTP_TIMER ThreadpoolTimer; // rax
  signed int LastError; // eax
  _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = 0;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( (_DWORD)v3 )
  {
    if ( *((_QWORD *)this + 7) )
      goto LABEL_15;
    ThreadpoolTimer = CreateThreadpoolTimer(CTimer::s_TimerTickProc, this, 0LL);
    *((_QWORD *)this + 7) = ThreadpoolTimer;
    if ( ThreadpoolTimer )
      goto LABEL_15;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_15:
      if ( IsThreadpoolTimerSet(*((PTP_TIMER *)this + 7)) )
      {
        v4 = -2147019873;
      }
      else
      {
        pftDueTime = (_FILETIME)(-10000 * v3);
        SetThreadpoolTimer(*((PTP_TIMER *)this + 7), &pftDueTime, 0, 0);
      }
    }
  }
  else
  {
    CTimer::_OnTimerCallback(this);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return (unsigned int)v4;
}
