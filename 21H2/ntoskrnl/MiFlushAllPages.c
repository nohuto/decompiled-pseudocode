/*
 * XREFs of MiFlushAllPages @ 0x1403846E4
 * Callers:
 *     MmFlushAllPagesEx @ 0x140384694 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x14099AB4C (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x14035A26C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiFlushAllPagesWorker @ 0x14038479C (MiFlushAllPagesWorker.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v5; // r11
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 result; // rax
  _DWORD *v9; // r9
  _KPROCESS *v10; // rbx
  _QWORD v11[6]; // [rsp+20h] [rbp-48h] BYREF

  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v6 = 10000000 * v5;
  v7 = UnbiasedInterruptTime;
  result = MiFlushAllPagesWorker(a1, UnbiasedInterruptTime, 10000000 * v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1160) )
    {
      v10 = *(_KPROCESS **)(a1 + 1280);
      KiStackAttachProcess(v10, 0LL, (__int64)v11, v9);
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v10[1].ActiveProcessorsPadding[6], 0);
      KiUnstackDetachProcess((__int64)v11, 0);
      return MiFlushAllPagesWorker(a1, v7, v6, 0LL, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5]);
    }
  }
  return result;
}
