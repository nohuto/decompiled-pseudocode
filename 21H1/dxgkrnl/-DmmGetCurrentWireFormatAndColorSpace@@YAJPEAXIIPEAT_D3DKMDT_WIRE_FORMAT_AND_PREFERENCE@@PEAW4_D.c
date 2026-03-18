/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E7DC4
 * Callers:
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E7CC0 (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01176F0 (DxgkGetAdapterDeviceDesc.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0258938 (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
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
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-28h] BYREF
  __int64 v32[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v33; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v8 = a2;
  if ( !a1 )
  {
    v27 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v27 + 24) = 0LL;
LABEL_19:
    WdLogEvent5_WdError(v27);
    return 3223191554LL;
  }
  v10 = a1[334];
  if ( !v10 )
  {
    v27 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v27 + 24) = a1;
    goto LABEL_19;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v32, v11);
    v12 = *(_QWORD *)(v11 + 88);
    v33 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v13 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v33, v13);
    v16 = v33;
    if ( v33 )
    {
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v33 + 96), v8, a3);
      if ( Path && (v20 = *((_QWORD *)Path + 12)) != 0 )
      {
        v21 = *(_QWORD *)(v20 + 104);
        if ( v21 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 96));
          v22 = *(_QWORD *)(v20 + 104);
        }
        else
        {
          v22 = 0LL;
        }
        v23 = *(_QWORD *)(v22 + 144);
        v31 = v22;
        if ( !v23 )
        {
          v30 = WdLogNewEntry5_WdAssertion(0LL, v18);
          WdLogEvent5_WdAssertion(v30);
          v23 = *(_QWORD *)(v22 + 144);
        }
        a4->0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v23 + 132);
        *a5 = *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v23 + 136);
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v31, 0LL);
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v26 + 24) = v16;
        WdLogEvent5_WdError(v26);
        v5 = -1071774971;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v15, v14);
      *(_QWORD *)(v29 + 24) = a1;
      WdLogEvent5_WdError(v29);
      v5 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v33, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32[0] + 40), v24);
    return v5;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3223192373LL;
  }
}
