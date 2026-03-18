/*
 * XREFs of ?CreateVidPnCopy@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@PEAPEAU2@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@@Z @ 0x1C02DE320
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000C5B8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010CB0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0128F28 (-CreateVidPnCopyForClient@VIDPN_MGR@@QEAAJQEBVDMMVIDPN@@PEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::CreateVidPnCopy(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3,
        struct D3DKMDT_HVIDPN__ **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  const struct DMMVIDPN *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  struct D3DKMDT_HVIDPN__ *v22; // rdi
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // [rsp+20h] [rbp-20h] BYREF
  int v33; // [rsp+28h] [rbp-18h] BYREF
  __int64 v34; // [rsp+30h] [rbp-10h]
  char v35; // [rsp+38h] [rbp-8h]
  __int64 v36; // [rsp+70h] [rbp+30h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 6054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6054);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 6054LL);
  if ( a3 && a4 )
  {
    *(_QWORD *)a3 = 0LL;
    *a4 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v15, v14);
        WdLogEvent5_WdAssertion(v16);
      }
      if ( *((_QWORD *)this + 334) )
      {
        v19 = (const struct DMMVIDPN *)ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
        if ( v19 )
        {
          v21 = *(_QWORD *)(v17 + 88);
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, v21);
          v22 = *(struct D3DKMDT_HVIDPN__ **)(v21 + 424);
          v36 = 0LL;
          v24 = VIDPN_MGR::CreateVidPnCopyForClient(v21, v19, &v36, v23);
          v12 = v24;
          if ( v24 >= 0 )
          {
            v27 = v36;
            v36 = 0LL;
            *(_QWORD *)a3 = v27 & -(__int64)(v27 != -88);
            LODWORD(v12) = 0;
            *a4 = v22;
          }
          else
          {
            v26 = WdLogNewEntry5_WdDmmEvent(v25);
            *(_QWORD *)(v26 + 24) = v12;
            WdLogEvent5_WdDmmEvent(v26);
          }
          auto_rc<DMMVIDPN>::reset(&v36, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40), v28);
        }
        else
        {
          v20 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v20 + 24) = a2;
          WdLogEvent5_WdError(v20);
          LODWORD(v12) = -1071774973;
        }
        goto LABEL_21;
      }
      v13 = WdLogNewEntry5_WdError(v15, 0LL);
      *(_QWORD *)(v13 + 24) = this;
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v13 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v13);
    LODWORD(v12) = -1071775742;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_QWORD *)(v10 + 32) = a2;
    WdLogEvent5_WdError(v10);
    LODWORD(v12) = -1073741811;
  }
LABEL_21:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v11);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v33);
  return (unsigned int)v12;
}
