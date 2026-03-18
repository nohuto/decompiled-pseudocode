/*
 * XREFs of ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C01624F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0008194 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h]
  char v28; // [rsp+30h] [rbp-18h]
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 6055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6055);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 6055LL);
  if ( this )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v23);
    }
    v9 = *((_QWORD *)this + 337);
    if ( v9 )
    {
      v12 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v9 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, v13);
        if ( *(_QWORD *)(v12 + 48) == v13 )
        {
          ReferenceCounted::Release((ReferenceCounted *)(v12 + 24), v14);
        }
        else
        {
          v25 = WdLogNewEntry5_WdError(v15, v14);
          *(_QWORD *)(v25 + 24) = v12;
          *(_QWORD *)(v25 + 32) = v13;
          WdLogEvent5_WdError(v25);
        }
        v17 = 0;
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40), v16);
      }
      else
      {
        v24 = WdLogNewEntry5_WdError(v11, v10);
        *(_QWORD *)(v24 + 24) = a2;
        WdLogEvent5_WdError(v24);
        v17 = -1071774973;
      }
      goto LABEL_11;
    }
    v22 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v22 + 24) = this;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v22 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v22);
  v17 = -1071775742;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v18);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v26);
  return v17;
}
