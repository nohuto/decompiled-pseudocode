/*
 * XREFs of ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C012E90C
 * Callers:
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C012E80C (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C012E9B0 (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C012EA20 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C012EC88 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01306EC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C0130C88 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths(CCD_BTL_ACTIVE_PATHS_COLLECTOR *this, bool a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(struct DXGADAPTER *, CCD_BTL_ACTIVE_PATHS_COLLECTOR *); // rbx
  struct DXGGLOBAL *Global; // rax
  int active; // r10d
  CCD_TOPOLOGY *v10; // [rsp+40h] [rbp+18h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v10, 96LL);
  v6 = BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_;
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) == 0 )
    v6 = BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_;
  Global = DXGGLOBAL::GetGlobal(v5, v4);
  active = DXGGLOBAL::IterateAdaptersWithCallback(Global, v6, this, 4LL);
  if ( active >= 0 )
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder(this);
    active = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(this, a2);
  }
  if ( v10 )
    CCD_TOPOLOGY::ClearReservedFields(v10);
  return (unsigned int)active;
}
