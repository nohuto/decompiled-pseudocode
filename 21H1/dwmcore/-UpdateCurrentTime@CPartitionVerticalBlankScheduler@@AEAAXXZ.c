/*
 * XREFs of ?UpdateCurrentTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003C798
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18003C3B0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18003E230 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800D81D0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateCurrentTime(CPartitionVerticalBlankScheduler *this)
{
  unsigned __int64 *v1; // r15
  LARGE_INTEGER *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  LARGE_INTEGER v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-79h] BYREF

  v1 = (unsigned __int64 *)((char *)this + 15936);
  v3 = (LARGE_INTEGER *)((char *)this + 15920);
  v4 = *((_QWORD *)this + 1990);
  v5 = ((_QWORD)this + 15936) << 32;
  v6 = ((unsigned __int64)this + 15936) | v5;
  if ( (v4 ^ v6) != *((_QWORD *)this + 1992) )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -2003304320;
    v9 = *v1 ^ ((unsigned __int64)v1 | v5);
    pExceptionRecord.NumberParameters = 4;
    pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v4);
    pExceptionRecord.ExceptionInformation[1] = (unsigned int)v4;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v9);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v9;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    v4 = *((_QWORD *)this + 1990);
  }
  *((_QWORD *)this + 1991) = v4;
  QueryPerformanceCounter(v3);
  v7 = *v3;
  v8 = *((_QWORD *)this + 1991);
  if ( v3->QuadPart < v8 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -2003304293;
    pExceptionRecord.ExceptionInformation[0] = v7.HighPart;
    pExceptionRecord.ExceptionInformation[1] = v7.LowPart;
    pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v8);
    pExceptionRecord.ExceptionInformation[3] = (unsigned int)v8;
    pExceptionRecord.ExceptionInformation[4] = g_qpcFrequency.HighPart;
    pExceptionRecord.ExceptionInformation[5] = g_qpcFrequency.LowPart;
    pExceptionRecord.NumberParameters = 8;
    pExceptionRecord.ExceptionInformation[6] = (int)((1000 * (v8 - v7.QuadPart) / g_qpcFrequency.QuadPart) >> 32);
    pExceptionRecord.ExceptionInformation[7] = (unsigned int)(1000 * (v8 - v7.QuadPart) / g_qpcFrequency.QuadPart);
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    v7 = *(LARGE_INTEGER *)((char *)this + 15920);
  }
  *v1 = v7.QuadPart ^ v6;
}
