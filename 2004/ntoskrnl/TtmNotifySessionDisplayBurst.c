/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x1408FB614
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403A6260 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     TtmiResetTerminalTimeouts @ 0x1408FA514 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408FC218 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(unsigned int a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = TtmpAcquireSessionById(&v7, a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( a2 == 5 )
    {
      v5 = 1111769921;
    }
    else
    {
      v5 = 1111778643;
      if ( a2 == 16 )
        v5 = 1111769922;
    }
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, v5, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst", 3285LL, (unsigned int)v3, (unsigned int)v3);
  }
  return v4;
}
