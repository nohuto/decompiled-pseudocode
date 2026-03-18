/*
 * XREFs of ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C0139718
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0139394 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C0139640 (-LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z @ 0x1C00E2F6C (-_ResolveTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCCD_TOPOLOGY@@_N@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C01397FC (-ForTopology@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@1@PEAX@Z2_N@Z.c)
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C0139C38 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        char a3,
        char a4)
{
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  CCD_TOPOLOGY *v16; // rcx
  int TopologyClass; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0xF) != 0xF )
    return 3221225485LL;
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 88);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18490) )
    return 3221226021LL;
  result = CCD_STORE::ForTopology(
             a2,
             (int (*)(struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback,
             this,
             0);
  if ( (int)result >= 0 )
  {
    v12 = CCD_RECENT_TOPOLOGY_RETRIEVER::_ResolveTopologySetId(*(struct CCD_TOPOLOGY **)this, a4);
    v15 = v12;
    if ( v12 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
      v20[3] = v15;
      v20[4] = this;
      v20[5] = *(_QWORD *)this;
      v20[6] = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v20[7] = *((unsigned int *)this + 2);
    }
    else
    {
      v16 = *(CCD_TOPOLOGY **)this;
      v21 = 0;
      TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(v16, (enum CCD_TOPOLOGY_CLASS *)&v21);
      v15 = TopologyClass;
      if ( TopologyClass >= 0 )
      {
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 64LL) + 32LL) = v21;
        return (unsigned int)v15;
      }
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
      v20[3] = v15;
      v20[4] = *(_QWORD *)this;
      v20[5] = *(_QWORD *)(*(_QWORD *)this + 64LL);
    }
    WdLogEvent5_WdError(v20);
    return (unsigned int)v15;
  }
  return result;
}
