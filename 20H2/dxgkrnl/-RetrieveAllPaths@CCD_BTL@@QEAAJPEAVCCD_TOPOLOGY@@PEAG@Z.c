/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01675DC
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0167550 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C012C788 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C012D800 (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C012D870 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C012DAD8 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C012F53C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C012FAD8 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0130164 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0142EC8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C02E9120 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        struct CCD_TOPOLOGY *a2,
        unsigned __int16 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  int active; // r10d
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  __int64 (__fastcall **v13)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v14)(CCD_BTL *, int *); // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // eax
  _QWORD *v21; // rax
  CCD_TOPOLOGY *v22; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v23; // [rsp+28h] [rbp-48h]
  int v24; // [rsp+30h] [rbp-40h] BYREF
  __int128 v25; // [rsp+38h] [rbp-38h]
  __int64 v26; // [rsp+48h] [rbp-28h]
  __int16 v27; // [rsp+50h] [rbp-20h]
  __int128 v28; // [rsp+58h] [rbp-18h]
  CCD_TOPOLOGY *v29; // [rsp+98h] [rbp+28h] BYREF

  CCD_TOPOLOGY::Clear(a2);
  v22 = a2;
  v23 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v29, 96);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  if ( (int)DXGGLOBAL::IterateAdaptersWithCallback(
              (__int64)Global,
              (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_,
              (__int64)&v22,
              4) < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v29);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v22);
    LOBYTE(v9) = 1;
    active = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v22, v9);
    if ( v29 )
      CCD_TOPOLOGY::ClearReservedFields(v29);
  }
  if ( active < 0 )
    return (unsigned int)active;
  v11 = *((_QWORD *)a2 + 8);
  if ( v11 )
    v12 = *(_WORD *)(v11 + 20);
  else
    v12 = 0;
  if ( v23 > v12 )
    active = -1073741789;
  if ( a3 )
    *a3 = v23;
  if ( active < 0 )
    return (unsigned int)active;
  v13 = *this;
  v24 = 0;
  v26 = 0LL;
  v25 = 0LL;
  v14 = *v13;
  v27 = 0;
  v28 = 0LL;
  v15 = v14((CCD_BTL *)this, &v24);
  v18 = v15;
  if ( v15 < 0
    || (v19 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v24), v18 = v19, v19 < 0) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
    v21[3] = v18;
    v21[4] = &v24;
    v21[5] = a2;
    v21[6] = *((_QWORD *)a2 + 8);
    WdLogEvent5_WdError(v21);
  }
  CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v24);
  return (unsigned int)v18;
}
