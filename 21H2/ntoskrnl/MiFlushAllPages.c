/*
 * XREFs of MiFlushAllPages @ 0x140384834
 * Callers:
 *     MmFlushAllPagesEx @ 0x1403847E4 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14099BB4C (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14029F008 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiFlushAllPagesWorker @ 0x1403848EC (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  _KPROCESS *v9; // rbx
  _QWORD v10[6]; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1160) )
    {
      v9 = *(_KPROCESS **)(a1 + 1280);
      KiStackAttachProcess(v9, 0, (__int64)v10);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v9[1].ActiveProcessorsPadding[6], 0);
      KiUnstackDetachProcess((__int64)v10, 0LL);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5]);
    }
  }
  return result;
}
