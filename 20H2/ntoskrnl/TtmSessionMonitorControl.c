/*
 * XREFs of TtmSessionMonitorControl @ 0x140901764
 * Callers:
 *     PopControlMonitor @ 0x140775FF0 (PopControlMonitor.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     TtmiTerminalMonitorControl @ 0x14090042C (TtmiTerminalMonitorControl.c)
 *     TtmpAcquireSessionById @ 0x140901E40 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
 *     TtmiLogSessionMonitorControl @ 0x1409064B8 (TtmiLogSessionMonitorControl.c)
 */

__int64 __fastcall TtmSessionMonitorControl(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v6 = TtmpAcquireSessionById(&v11, a1);
  v7 = v11;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v6 = TtmiTerminalMonitorControl(v11, *(unsigned int **)(v11 + 32), a2, a3);
    v8 = v6;
    if ( v6 >= 0 )
      goto LABEL_6;
    v9 = 4079LL;
  }
  else
  {
    v9 = 4067LL;
  }
  TtmiLogError("TtmSessionMonitorControl", v9, (unsigned int)v6, (unsigned int)v6);
LABEL_6:
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  TtmiLogSessionMonitorControl(a1, a2, a3, v8);
  return v8;
}
