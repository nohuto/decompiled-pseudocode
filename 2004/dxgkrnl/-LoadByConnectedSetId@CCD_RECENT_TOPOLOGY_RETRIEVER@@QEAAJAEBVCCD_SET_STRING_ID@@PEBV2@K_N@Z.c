/*
 * XREFs of ?LoadByConnectedSetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@PEBV2@K_N@Z @ 0x1C0143BF4
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C0133F54 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x1C0143CCC (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2_N@Z @ 0x1C0143E40 (-ForConnectedSet@CCD_STORE@@SAJAEBVCCD_SET_STRING_ID@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@1@PEAX@Z2.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByConnectedSetId(
        CCD_RECENT_TOPOLOGY_RETRIEVER *this,
        const struct CCD_SET_STRING_ID *a2,
        const struct CCD_SET_STRING_ID *a3,
        int a4,
        bool a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGSESSIONMGR *v9; // rdi
  bool v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 result; // rax

  *((_DWORD *)this + 2) = a4;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 6) = 0;
  *((_QWORD *)this + 23) = a3;
  v9 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( v9 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v9, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( SessionDataForSpecifiedSession && *((_BYTE *)SessionDataForSpecifiedSession + 18490) )
    return 3221226021LL;
  result = CCD_STORE::ForConnectedSet(
             a2,
             (int (*)(struct CCD_STORE::CONNECTED_SET_DESCRIPTOR *, void *))CCD_RECENT_TOPOLOGY_RETRIEVER::_ProcessConnectedSetDescriptorCallback,
             this,
             v10);
  if ( (_DWORD)result == -1073741789 )
    result = 3221225473LL;
  if ( (int)result >= 0 )
  {
    result = *((unsigned int *)this + 4);
    if ( (int)result >= 0 )
    {
      if ( *((_WORD *)this + 12) )
        return CCD_RECENT_TOPOLOGY_RETRIEVER::LoadByTopologySetId(
                 this,
                 (CCD_RECENT_TOPOLOGY_RETRIEVER *)((char *)this + 16),
                 0xFu,
                 a5);
      return 3221226021LL;
    }
  }
  return result;
}
