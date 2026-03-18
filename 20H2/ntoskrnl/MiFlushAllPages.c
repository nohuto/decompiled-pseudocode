/*
 * XREFs of MiFlushAllPages @ 0x140386588
 * Callers:
 *     MmFlushAllPagesEx @ 0x140386538 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14099D5CC (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14031A918 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x140381B50 (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
      KiStackAttachProcess(v9, 0, (__int64)v10);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].ActiveProcessorsPadding[6], 0);
      KiUnstackDetachProcess((__int64)v10, 0);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL);
    }
  }
  return result;
}
