/*
 * XREFs of ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C01E5698
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01B3730 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0011924 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned int *a3,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  struct _D3DDDI_RATIONAL *v19; // rcx
  UINT Numerator; // edx
  struct _D3DDDI_RATIONAL v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rsi
  unsigned int v24; // r13d
  unsigned int v25; // ecx
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v28; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+68h] [rbp-18h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int8 v32; // [rsp+C0h] [rbp+40h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry2(2LL, a3, a4);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v9 = *((_QWORD *)a1 + 349);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v31, v10);
    v11 = *(_QWORD *)(v10 + 128);
    v27 = 0LL;
    if ( v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v11 + 32), 1u);
      v12 = *(_QWORD *)(v10 + 128);
    }
    else
    {
      v12 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v27, v12);
    v13 = v27;
    if ( v27 )
    {
      v14 = *(_QWORD *)(*((_QWORD *)a1 + 349) + 128LL);
      v29 = 4000 * v5;
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v27 + 96), v5, *(_DWORD *)(v14 + 4000 * v5 + 1088));
      if ( Path && (v16 = *((_QWORD *)Path + 12)) != 0 )
      {
        v17 = *(_QWORD *)(v16 + 104);
        if ( v17 )
        {
          _InterlockedAdd((volatile signed __int32 *)(v17 + 96), 1u);
          v18 = *(_QWORD *)(v16 + 104);
        }
        else
        {
          v18 = 0LL;
        }
        v19 = *(struct _D3DDDI_RATIONAL **)(v18 + 144);
        v30 = v18;
        if ( !v19 )
        {
          WdLogSingleEntry0(1LL);
          v19 = *(struct _D3DDDI_RATIONAL **)(v18 + 144);
        }
        Numerator = v19[15].Numerator;
        v21 = v19[19];
        v32 = 0;
        v28 = v21;
        v22 = DmmMapVSyncFromRationalToInteger(
                &v28,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(Numerator << 29) >> 29),
                &v32);
        v23 = *((_QWORD *)a1 + 349);
        v24 = v22;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v23 + 16)) )
        {
          WdLogSingleEntry1(1LL, 6266LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"IsCoreResourceSharedOwner()",
            6266LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(v23 + 96) )
        {
          WdLogSingleEntry1(1LL, 6267LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"VidPnSourceId < m_NumVidPnSources",
            6267LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( v32 != 1 || (v25 = *(_DWORD *)(*(_QWORD *)(v23 + 128) + v29 + 1092), v25 != v24 + 1) )
          v25 = v24;
        *a3 = v25;
        *a4 = (int)(*(_DWORD *)(*(_QWORD *)(v18 + 144) + 120LL) << 29) >> 29;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v30, 0LL);
      }
      else
      {
        WdLogSingleEntry1(2LL, v13);
        v4 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      v4 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v27, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v31 + 40));
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
