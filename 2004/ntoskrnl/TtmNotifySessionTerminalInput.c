/*
 * XREFs of TtmNotifySessionTerminalInput @ 0x1408FBAA4
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     TtmiResetTerminalTimeouts @ 0x1408FA514 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408FC218 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
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
    TtmiLogError("TtmNotifySessionTerminalInput", 4218LL, (unsigned int)v5, 0xFFFFFFFFLL);
  }
}
