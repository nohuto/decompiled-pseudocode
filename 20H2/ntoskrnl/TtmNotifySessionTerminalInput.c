/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x1409016CC
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     TtmiResetTerminalTimeouts @ 0x140900138 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x140901E40 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
 */

void __fastcall TtmNotifySessionTerminalInput(unsigned int a1, int a2, char a3)
{
  int v5; // eax
  __int64 i; // rdx
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = TtmpAcquireSessionById(&v7, a1);
  if ( v5 >= 0 )
  {
    for ( i = *(_QWORD *)(v7 + 40); i != v7 + 40; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 28) == a2 )
      {
        TtmiResetTerminalTimeouts(v7, i, 4, 1950962771, a3);
        break;
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifySessionTerminalInput", 4217LL, (unsigned int)v5, 0xFFFFFFFFLL);
  }
}
