/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C01A876C
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01A3640 (DxgkGetAdapterDeviceDesc.c)
 *     ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C01A9898 (-IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C02F6A9C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 */

__int64 __fastcall DmmGetCurrentWireFormatAndColorSpace(
        _QWORD *a1,
        int a2,
        int a3,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a4,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rbx
  struct _KTHREAD **v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned int v19; // edi

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v9 = a1[349];
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    v11 = (struct _KTHREAD **)(v10 + 40);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v10 + 40));
    v12 = *(_QWORD *)(v10 + 128);
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v10 + 128);
      if ( v13 )
      {
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v13 + 96), a2, a3);
        if ( Path )
        {
          v15 = *((_QWORD *)Path + 12);
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 104);
            if ( v16 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
              v17 = *(_QWORD *)(v15 + 104);
            }
            else
            {
              v17 = 0LL;
            }
            v18 = *(_QWORD *)(v17 + 144);
            if ( !v18 )
            {
              WdLogSingleEntry0(1LL);
              v18 = *(_QWORD *)(v17 + 144);
            }
            a4->0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v18 + 132);
            v19 = 0;
            *a5 = *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v18 + 136);
            ReferenceCounted::Release((ReferenceCounted *)(v17 + 88));
LABEL_13:
            ReferenceCounted::Release((ReferenceCounted *)(v13 + 24));
LABEL_14:
            DXGFASTMUTEX::Release(v11);
            return v19;
          }
        }
        WdLogSingleEntry1(2LL, v13);
        v19 = -1071774971;
LABEL_15:
        if ( !v13 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
    else
    {
      v13 = 0LL;
    }
    WdLogSingleEntry1(2LL, a1);
    v19 = -1071774884;
    goto LABEL_15;
  }
  WdLogSingleEntry1(2LL, a1);
  return 3223192373LL;
}
