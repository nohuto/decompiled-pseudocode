/*
 * XREFs of ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C028BAD8
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B3960 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003FEE8 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C02B25BC (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(struct _EPROCESS **this, struct DXGVMBUSCHANNEL *a2)
{
  DXGSESSIONMGR *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  struct _EPROCESS *CurrentProcess; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  if ( SessionDataForSpecifiedSession )
  {
    LODWORD(v14) = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, this + 3);
  }
  else
  {
    LODWORD(v14) = -1073741790;
    v15 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v15);
  }
  if ( (int)v14 >= 0 )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v13, v12);
    this[4] = CurrentProcess;
    ObfReferenceObject(CurrentProcess);
    v17 = DXGVMBUSCHANNEL::RegisterSubscriber(a2, 0x706D6F63u, (struct IDXGCHANNELSUBSCRIBER *)this, this + 1);
    v14 = v17;
    if ( v17 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
      *(_QWORD *)(v21 + 24) = v14;
      WdLogEvent5_WdWarning(v21);
    }
  }
  return (unsigned int)v14;
}
