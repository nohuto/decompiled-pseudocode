/*
 * XREFs of MiFlushAllPages @ 0x14037F554
 * Callers:
 *     MmFlushAllPagesEx @ 0x14037F5E8 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x1409961BC (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14030C194 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x14037F430 (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  _QWORD *result; // rax
  _DWORD *v9; // r9
  _KPROCESS *v10; // rbx
  __int64 v11; // r8
  _DWORD *v12; // r9
  _OWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v13, 0, sizeof(v13));
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1160) )
    {
      v10 = *(_KPROCESS **)(a1 + 1280);
      KiStackAttachProcess(v10, 0LL, (__int64)v13, v9);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v10[1].ActiveProcessorsPadding[6], 0);
      KiUnstackDetachProcess((__int64)v13, 0LL, v11, v12);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL);
    }
  }
  return result;
}
