/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01E878C
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C01E8700 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01AC07C (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C01AC0EC (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C01AC338 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C01AC378 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C01AC3A8 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C01ACAA4 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C01B71EC (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C03A8E44 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(
        __int64 (__fastcall ***this)(CCD_BTL *, int *),
        struct CCD_TOPOLOGY *a2,
        unsigned __int16 *a3)
{
  struct DXGGLOBAL *Global; // rax
  int active; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  __int64 (__fastcall **v13)(CCD_BTL *, int *); // rax
  __int64 (__fastcall *v14)(CCD_BTL *, int *); // rax
  int v15; // eax
  int v16; // eax
  CCD_TOPOLOGY *v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int16 v19; // [rsp+38h] [rbp-48h]
  int v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int16 v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+68h] [rbp-18h]
  CCD_TOPOLOGY *v25; // [rsp+A8h] [rbp+28h] BYREF

  CCD_TOPOLOGY::Clear(a2);
  v18 = a2;
  v19 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v25, 96);
  Global = DXGGLOBAL_GetGlobal();
  active = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_0_1_,
             (__int64)&v18,
             4LL);
  if ( active < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v25);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v18);
    LOBYTE(v8) = 1;
    active = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v18, v8, v9, v10);
    if ( v25 )
      CCD_TOPOLOGY::ClearReservedFields(v25);
    if ( active >= 0 )
    {
      v11 = *((_QWORD *)a2 + 8);
      if ( v11 )
        v12 = *(_WORD *)(v11 + 20);
      else
        v12 = 0;
      if ( v19 > v12 )
        active = -1073741789;
      if ( a3 )
        *a3 = v19;
      if ( active >= 0 )
      {
        v13 = *this;
        v20 = 0;
        v22 = 0LL;
        v21 = 0LL;
        v14 = *v13;
        v23 = 0;
        v24 = 0LL;
        v15 = v14((CCD_BTL *)this, &v20);
        active = v15;
        if ( v15 < 0 )
        {
          WdLogSingleEntry4(2LL, v15, &v20, a2, *((_QWORD *)a2 + 8));
        }
        else
        {
          v16 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v20);
          active = v16;
          if ( v16 < 0 )
            WdLogSingleEntry4(2LL, v16, &v20, a2, *((_QWORD *)a2 + 8));
        }
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v20);
      }
    }
  }
  return (unsigned int)active;
}
