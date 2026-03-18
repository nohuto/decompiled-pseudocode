/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A7AE0
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C01A8564 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A8148 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rdi
  int PathSourceFromTarget; // eax
  __int64 v7; // rsi
  __int64 v8; // r8
  DMMVIDPNPRESENTPATH *Path; // rbp
  int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // r8

  v3 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  memset(a3, 0, 0x1F0uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPN *)((char *)this + 96), (unsigned int)v3);
  if ( PathSourceFromTarget == -1 )
  {
    v7 = *((_QWORD *)this + 6);
    v8 = *(_QWORD *)(v7 + 8);
    if ( !v8 )
    {
      WdLogSingleEntry0(1LL);
      v8 = *(_QWORD *)(v7 + 8);
    }
    WdLogSingleEntry3(7LL, v3, *(_QWORD *)(v8 + 16), this);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
      WdLogSingleEntry0(1LL);
    v11 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v12 = v11;
    if ( v11 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v13 = *((_QWORD *)this + 6);
      v14 = *(_QWORD *)(v13 + 8);
      if ( !v14 )
      {
        WdLogSingleEntry0(1LL);
        v14 = *(_QWORD *)(v13 + 8);
      }
      WdLogSingleEntry4(3LL, v3, *(_QWORD *)(v14 + 16), this, v12);
      return (unsigned int)v12;
    }
  }
}
