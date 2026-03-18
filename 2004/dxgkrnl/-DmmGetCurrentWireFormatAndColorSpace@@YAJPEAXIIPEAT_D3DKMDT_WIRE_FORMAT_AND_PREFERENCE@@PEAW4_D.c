/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C0122064
 * Callers:
 *     ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C00DC094 (-IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?IsCurrentModeAdvancedColorDeprecated@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00DC1DC (-IsCurrentModeAdvancedColorDeprecated@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFEREN.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C025CC38 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00054DC (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0007C30 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0008108 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

__int64 __fastcall DmmGetCurrentWireFormatAndColorSpace(
        _QWORD *a1,
        __int64 a2,
        int a3,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a4,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a5)
{
  unsigned int v5; // edi
  int v8; // r14d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-28h] BYREF
  __int64 v32[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v33; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v8 = a2;
  if ( !a1 )
  {
    v22 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v22 + 24) = 0LL;
LABEL_11:
    WdLogEvent5_WdError(v22);
    return 3223191554LL;
  }
  v23 = a1[337];
  if ( !v23 )
  {
    v22 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v22 + 24) = a1;
    goto LABEL_11;
  }
  v10 = *(_QWORD *)(v23 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v32, v10);
    v11 = *(_QWORD *)(v10 + 88);
    v33 = 0LL;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v33, v12);
    v15 = v33;
    if ( v33 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v33 + 96), v8, a3);
      if ( Path && (v26 = *((_QWORD *)Path + 12)) != 0 )
      {
        v27 = *(_QWORD *)(v26 + 104);
        if ( v27 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 96));
          v28 = *(_QWORD *)(v26 + 104);
        }
        else
        {
          v28 = 0LL;
        }
        v29 = *(_QWORD *)(v28 + 144);
        v31 = v28;
        if ( !v29 )
        {
          v30 = WdLogNewEntry5_WdAssertion(0LL, v17);
          WdLogEvent5_WdAssertion(v30);
          v29 = *(_QWORD *)(v28 + 144);
        }
        a4->0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v29 + 132);
        *a5 = *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v29 + 136);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v31, 0LL);
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v19 + 24) = v15;
        WdLogEvent5_WdError(v19);
        v5 = -1071774971;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v25 + 24) = a1;
      WdLogEvent5_WdError(v25);
      v5 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v33, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32[0] + 40), v20);
    return v5;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v24 + 24) = a1;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
}
