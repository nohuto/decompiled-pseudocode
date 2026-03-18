/*
 * XREFs of ?CreateVidPnFromLastClientCommittedVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C01552F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128E64 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDPN__ **a3,
        const struct _DXGDMM_VIDPN_INTERFACE **a4)
{
  DXGDMM_INTERFACE_V1_IMPL *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct VIDPN_MGR *v12; // rbx
  struct D3DKMDT_HVIDPN__ *v13; // r14
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h]
  char v28; // [rsp+30h] [rbp-10h]
  __int64 v29; // [rsp+68h] [rbp+28h] BYREF
  __int64 v30; // [rsp+78h] [rbp+38h] BYREF

  v26 = -1;
  v27 = 0LL;
  v6 = this;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6053;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6053);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 6053LL);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v10, v9);
        WdLogEvent5_WdAssertion(v24);
      }
      v11 = *((_QWORD *)v6 + 334);
      if ( v11 )
      {
        v12 = *(struct VIDPN_MGR **)(v11 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v30, (__int64)v12);
        v13 = (struct D3DKMDT_HVIDPN__ *)*((_QWORD *)v12 + 53);
        v29 = 0LL;
        v14 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v12, &v29);
        v6 = (DXGDMM_INTERFACE_V1_IMPL *)v14;
        if ( v14 < 0 )
        {
          v25 = WdLogNewEntry5_WdDmmEvent(v15);
          *(_QWORD *)(v25 + 24) = v6;
          WdLogEvent5_WdDmmEvent(v25);
        }
        else
        {
          v16 = v29;
          v29 = 0LL;
          *a2 = v16 & -(__int64)(v16 != -88);
          LODWORD(v6) = 0;
          *a3 = v13;
        }
        auto_rc<DMMVIDPN>::reset(&v29, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v30 + 40), v17);
        goto LABEL_12;
      }
      v23 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v23 + 24) = v6;
    }
    else
    {
      v23 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v23 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v23);
    LODWORD(v6) = -1071775742;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = v6;
    WdLogEvent5_WdError(v22);
    LODWORD(v6) = -1073741811;
  }
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v18);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v26);
  return (unsigned int)v6;
}
