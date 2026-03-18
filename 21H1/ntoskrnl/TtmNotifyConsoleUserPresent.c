/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1408FA21C
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x14075E690 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     TtmiResetTerminalTimeouts @ 0x1408F9224 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408FAF28 (TtmpAcquireSessionById.c)
 *     TtmiLogConsoleUserPresent @ 0x1408FD2AC (TtmiLogConsoleUserPresent.c)
 *     TtmiLogError @ 0x1408FE3D0 (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifyConsoleUserPresent(unsigned int a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = TtmpAcquireSessionById(&v7, a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, 1347765070, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 3341LL, (unsigned int)v4, 0xFFFFFFFFLL);
  }
  return TtmiLogConsoleUserPresent(a1, a2, v5);
}
