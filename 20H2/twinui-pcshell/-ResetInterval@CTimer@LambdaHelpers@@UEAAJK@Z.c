/*
 * XREFs of ?ResetInterval@CTimer@LambdaHelpers@@UEAAJK@Z @ 0x1802513F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LambdaHelpers::CTimer::ResetInterval(LambdaHelpers::CTimer *this, UINT a2)
{
  signed int v3; // ebx
  UINT_PTR v4; // rdx
  UINT_PTR v6; // rax
  signed int LastError; // eax

  v3 = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    SetTimer(0LL, v4, a2, LambdaHelpers::CTimer::s_OnTimer);
  }
  else
  {
    AcquireSRWLockExclusive(&LambdaHelpers::CTimer::s_rwLock);
    v6 = SetTimer(0LL, 0LL, a2, LambdaHelpers::CTimer::s_OnTimer);
    *((_QWORD *)this + 4) = v6;
    if ( !v6 )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
    }
    if ( v3 >= 0 )
    {
      *((_QWORD *)this + 5) = LambdaHelpers::CTimer::s_pTimerList;
      LambdaHelpers::CTimer::s_pTimerList = this;
    }
    ReleaseSRWLockExclusive(&LambdaHelpers::CTimer::s_rwLock);
  }
  return (unsigned int)v3;
}
