/*
 * XREFs of ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C01ABFD8
 * Callers:
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01ABED4 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01AC07C (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C01AC0EC (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C01AC338 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C01AC378 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths(CCD_BTL_ACTIVE_PATHS_COLLECTOR *this, bool a2)
{
  __int64 (__fastcall *v4)(DXGADAPTER *, CCD_BTL_ACTIVE_PATHS_COLLECTOR *); // rbx
  struct DXGGLOBAL *Global; // rax
  int active; // r10d
  CCD_TOPOLOGY *v8; // [rsp+30h] [rbp+8h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v8, 96LL);
  v4 = BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_0_;
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) == 0 )
    v4 = BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_1_;
  Global = DXGGLOBAL_GetGlobal();
  active = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))v4,
             (__int64)this,
             4LL);
  if ( active >= 0 )
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder(this);
    active = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(this, a2);
  }
  if ( v8 )
    CCD_TOPOLOGY::ClearReservedFields(v8);
  return (unsigned int)active;
}
