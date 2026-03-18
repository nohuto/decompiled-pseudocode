/*
 * XREFs of MiFlushAllPages @ 0x140384458
 * Callers:
 *     MmFlushAllPagesEx @ 0x140384408 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14099758C (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140311308 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x140380308 (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  _QWORD *result; // rax
  _KPROCESS *v9; // rbx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1160) )
    {
      v9 = *(_KPROCESS **)(a1 + 1280);
      KiStackAttachProcess(v9, 0LL, (__int64)v10);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].ActiveProcessorsPadding[6], 0);
      KiUnstackDetachProcess((__int64)v10, 0LL);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL);
    }
  }
  return result;
}
