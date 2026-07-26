/*
 * XREFs of ndisFindSomeoneToBlame @ 0x1C0121B14
 * Callers:
 *     ?ReportTimeout@NdisWatchdogState@@QEAAXXZ @ 0x1C01219C0 (-ReportTimeout@NdisWatchdogState@@QEAAXXZ.c)
 *     ndisWaitForExternalDriver @ 0x1C0121F48 (ndisWaitForExternalDriver.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisReportTimeoutWaitingForExternalDriver @ 0x1C0121C98 (ndisReportTimeoutWaitingForExternalDriver.c)
 */

void __fastcall ndisFindSomeoneToBlame(unsigned int a1, unsigned __int64 a2, int a3, _LIST_ENTRY *a4)
{
  struct _LIST_ENTRY *v4; // rdi
  unsigned __int64 v8; // r14
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v10; // ebp
  struct _LIST_ENTRY *v11; // rbx
  unsigned int v12; // eax
  KLockHolder v13; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0LL;
  v13.m_State = Unlocked;
  v13.m_Lock = (KPushLockBase *)&g_ndisWatchdogLock;
  v13.m_Region.m_Entered = 0;
  v8 = a2;
  KLockHolder::AcquireExclusive(&v13);
  Flink = g_ndisWatchdogList.Flink;
  v10 = g_ndisWatchdogSequenceNumber - a3;
  if ( g_ndisWatchdogList.Flink == &g_ndisWatchdogList )
    goto LABEL_14;
  do
  {
    v11 = Flink - 17;
    if ( !KeReadStateEvent((PRKEVENT)&Flink[-7].Blink)
      && v11[14].Blink == a4
      && 10000 * (MEMORY[0xFFFFF78000000008] - (unsigned __int64)v11[14].Flink) >= (unsigned __int64)HIDWORD(v11[12].Blink) >> 2 )
    {
      v12 = g_ndisWatchdogSequenceNumber - HIDWORD(v11[10].Flink);
      if ( v12 >= v10 )
      {
        LODWORD(v11[10].Flink) = 0;
      }
      else
      {
        if ( v4 )
          LODWORD(v4[10].Flink) = 0;
        v4 = Flink - 17;
        v10 = v12;
      }
    }
    Flink = Flink->Flink;
  }
  while ( Flink != &g_ndisWatchdogList );
  v8 = a2;
  if ( !v4 )
  {
LABEL_14:
    ndisReportTimeoutWaitingForExternalDriver(a1, v8);
  }
  else if ( LODWORD(v4[10].Flink) )
  {
    ndisReportTimeoutWaitingForExternalDriver(LODWORD(v4[12].Flink), (unsigned __int64)&v4[12].Blink);
    LODWORD(v4[10].Flink) = 0;
  }
  KLockHolder::~KLockHolder(&v13);
}
