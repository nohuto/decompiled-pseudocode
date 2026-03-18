/*
 * XREFs of ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000B1A0
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000CBA4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C0137D30 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0145CCC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C02DE294 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A51C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000A53C (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A564 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentRotation(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  _QWORD *v15; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  _QWORD *v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // eax

  v2 = a2;
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(a2) )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
    v15[3] = v2;
    v15[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
    v15[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
    WdLogEvent5_WdError(v15);
  }
  v6 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(v2);
  v9 = 251LL;
  v10 = v6 - 1;
  if ( !v10 )
  {
    LOBYTE(v11) = *((_BYTE *)this + 124);
    goto LABEL_5;
  }
  v16 = v10 - 1;
  if ( !v16 )
  {
    v11 = *((_DWORD *)this + 31) >> 1;
LABEL_5:
    if ( (v11 & 1) == 0 )
      goto LABEL_15;
    goto LABEL_6;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v11 = *((_DWORD *)this + 31) >> 2;
    goto LABEL_5;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v11 = *((_DWORD *)this + 31) >> 3;
    goto LABEL_5;
  }
  if ( v18 != 251 )
  {
LABEL_14:
    v19 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v19 + 24) = v2;
    WdLogEvent5_WdError(v19);
    goto LABEL_15;
  }
LABEL_6:
  v12 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(v2) - 1;
  if ( !v12 )
  {
    v13 = *((_DWORD *)this + 31) >> 4;
    goto LABEL_8;
  }
  v21 = v12 - 1;
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 == (_DWORD)v9 )
          goto LABEL_9;
        goto LABEL_14;
      }
      v13 = *((_DWORD *)this + 31) >> 7;
    }
    else
    {
      v13 = *((_DWORD *)this + 31) >> 6;
    }
  }
  else
  {
    v13 = *((_DWORD *)this + 31) >> 5;
  }
LABEL_8:
  if ( (v13 & 1) != 0 )
  {
LABEL_9:
    *((_DWORD *)this + 29) = v2;
    return 0LL;
  }
LABEL_15:
  v20 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
  v20[3] = v2;
  v20[4] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  v20[5] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdWarning(v20);
  return 3223192326LL;
}
