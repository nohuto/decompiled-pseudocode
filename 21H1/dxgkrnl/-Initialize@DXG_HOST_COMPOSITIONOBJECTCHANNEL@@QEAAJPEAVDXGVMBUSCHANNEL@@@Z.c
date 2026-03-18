/*
 * XREFs of ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0288618
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C02B0400 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x1C003F07C (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C02AF05C (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(struct _EPROCESS **this, struct DXGVMBUSCHANNEL *a2)
{
  DXGSESSIONMGR *v4; // rbx
  __int64 v5; // rcx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  struct _EPROCESS *CurrentProcess; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax

  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 88);
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, CurrentProcessSessionId);
  if ( SessionDataForSpecifiedSession )
  {
    LODWORD(v13) = DXGSESSIONDATA::ReferenceDwmProcess(SessionDataForSpecifiedSession, this + 3);
  }
  else
  {
    LODWORD(v13) = -1073741790;
    v14 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v14 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v14);
  }
  if ( (int)v13 >= 0 )
  {
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v12, v11);
    this[4] = CurrentProcess;
    ObfReferenceObject(CurrentProcess);
    v16 = DXGVMBUSCHANNEL::RegisterSubscriber(a2, 0x706D6F63u, (struct IDXGCHANNELSUBSCRIBER *)this, this + 1);
    v13 = v16;
    if ( v16 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v20 + 24) = v13;
      WdLogEvent5_WdWarning(v20);
    }
  }
  return (unsigned int)v13;
}
