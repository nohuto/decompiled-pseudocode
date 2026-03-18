/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C0158DFC
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0158D70 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00E9204 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC53C (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00EC5AC (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00EC814 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00EC85C (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00ECEE8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0139AC4 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C02E5B50 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        struct CCD_TOPOLOGY *a2,
        unsigned __int16 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  int active; // r10d
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  __int64 (__fastcall **v12)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v13)(CCD_BTL *, int *); // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  int v18; // eax
  _QWORD *v20; // rax
  CCD_TOPOLOGY *v21; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v22; // [rsp+28h] [rbp-48h]
  int v23; // [rsp+30h] [rbp-40h] BYREF
  __int128 v24; // [rsp+38h] [rbp-38h]
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int16 v26; // [rsp+50h] [rbp-20h]
  __int128 v27; // [rsp+58h] [rbp-18h]
  CCD_TOPOLOGY *v28; // [rsp+98h] [rbp+28h] BYREF

  CCD_TOPOLOGY::Clear(a2);
  v21 = a2;
  v22 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v28, 96);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_,
              (__int64)&v21,
              4) < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v28);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v21);
    active = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v21, 1);
    if ( v28 )
      CCD_TOPOLOGY::ClearReservedFields(v28);
  }
  if ( active < 0 )
    return (unsigned int)active;
  v10 = *((_QWORD *)a2 + 8);
  if ( v10 )
    v11 = *(_WORD *)(v10 + 20);
  else
    v11 = 0;
  if ( v22 > v11 )
    active = -1073741789;
  if ( a3 )
    *a3 = v22;
  if ( active < 0 )
    return (unsigned int)active;
  v12 = *this;
  v23 = 0;
  v25 = 0LL;
  v24 = 0LL;
  v13 = *v12;
  v26 = 0;
  v27 = 0LL;
  v14 = v13((CCD_BTL *)this, &v23);
  v17 = v14;
  if ( v14 < 0
    || (v18 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v23), v17 = v18, v18 < 0) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
    v20[3] = v17;
    v20[4] = &v23;
    v20[5] = a2;
    v20[6] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v20);
  }
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v23);
  return (unsigned int)v17;
}
