/*
 * XREFs of ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1C0155EC0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C01266E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000ADD0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000E170 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0010C44 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C00E1A88 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01254E0 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DmmGetCurrentIntegerVSyncFromClientVidPnSource(
        DXGADAPTER *a1,
        __int64 a2,
        unsigned int *a3,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r9
  __int64 v26; // r9
  unsigned int v27; // eax
  __int64 v28; // rsi
  unsigned int v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+20h] [rbp-30h] BYREF
  struct _D3DDDI_RATIONAL v45; // [rsp+28h] [rbp-28h] BYREF
  __int64 v46; // [rsp+30h] [rbp-20h]
  __int64 v47; // [rsp+38h] [rbp-18h] BYREF
  __int64 v48; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 v49; // [rsp+90h] [rbp+40h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  if ( !a3 || !a4 )
  {
    v43 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v43 + 24) = a3;
    *(_QWORD *)(v43 + 32) = a4;
    WdLogEvent5_WdError(v43);
    return 3221225485LL;
  }
  if ( !a1 )
  {
    v36 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v36 + 24) = 0LL;
LABEL_28:
    WdLogEvent5_WdError(v36);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v37 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v37);
  }
  v11 = *((_QWORD *)a1 + 334);
  if ( !v11 )
  {
    v36 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v36 + 24) = a1;
    goto LABEL_28;
  }
  v12 = *(_QWORD *)(v11 + 88);
  if ( v12 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v48, v12);
    v13 = *(_QWORD *)(v12 + 88);
    v44 = 0LL;
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 32));
      v14 = *(_QWORD *)(v12 + 88);
    }
    else
    {
      v14 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v44, v14);
    v17 = v44;
    if ( v44 )
    {
      v18 = *(_QWORD *)(*((_QWORD *)a1 + 334) + 112LL);
      v46 = 3968 * v5;
      Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)(v44 + 96), v5, *(_DWORD *)(v18 + 3968 * v5 + 1068));
      if ( Path && (v22 = *((_QWORD *)Path + 12)) != 0 )
      {
        v23 = *(_QWORD *)(v22 + 104);
        if ( v23 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 96));
          v24 = *(_QWORD *)(v22 + 104);
        }
        else
        {
          v24 = 0LL;
        }
        v25 = *(_QWORD *)(v24 + 144);
        v47 = v24;
        if ( !v25 )
        {
          v40 = WdLogNewEntry5_WdAssertion(v23, v20);
          WdLogEvent5_WdAssertion(v40);
          v25 = *(_QWORD *)(v24 + 144);
        }
        v49 = 0;
        v45 = *(struct _D3DDDI_RATIONAL *)(v25 + 92);
        DmmCalculatePresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v25 + 72), &v45);
        v27 = DmmMapVSyncFromRationalToInteger(&v45, (unsigned int)((int)(*(_DWORD *)(v26 + 120) << 29) >> 29), &v49);
        v28 = *((_QWORD *)a1 + 334);
        v29 = v27;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v28 + 16)) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v41 + 24) = 6187LL;
          WdLogEvent5_WdAssertion(v41);
        }
        if ( (unsigned int)v5 >= *(_DWORD *)(v28 + 80) )
        {
          v42 = WdLogNewEntry5_WdAssertion(v31, v30);
          *(_QWORD *)(v42 + 24) = 6188LL;
          WdLogEvent5_WdAssertion(v42);
        }
        if ( v49 != 1 || (v32 = *(_DWORD *)(*(_QWORD *)(v28 + 112) + v46 + 1072), v32 != v29 + 1) )
          v32 = v29;
        *a3 = v32;
        *a4 = (int)(*(_DWORD *)(*(_QWORD *)(v24 + 144) + 120LL) << 29) >> 29;
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v47, 0LL);
      }
      else
      {
        v35 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v35 + 24) = v17;
        WdLogEvent5_WdError(v35);
        v4 = -1071774971;
      }
    }
    else
    {
      v39 = WdLogNewEntry5_WdError(v16, v15);
      *(_QWORD *)(v39 + 24) = a1;
      WdLogEvent5_WdError(v39);
      v4 = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v44, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v48 + 40), v33);
    return v4;
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v38 + 24) = a1;
    WdLogEvent5_WdError(v38);
    return 3223192373LL;
  }
}
