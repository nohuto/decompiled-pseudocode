/*
 * XREFs of ?AcquireSourceSet@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXPEAPEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEAPEBU_DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE@@@Z @ 0x1C02E10F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::AcquireSourceSet(
        DXGDMM_INTERFACE_V1_IMPL *this,
        __int64 *a2,
        struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **a3,
        const struct _DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE **a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]
  struct D3DKMDT_HVIDEOPRESENTSOURCESET__ *v24; // [rsp+58h] [rbp+10h]

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v23 = 1;
    v21 = 6048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6048);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 6048LL);
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    *a3 = 0LL;
    if ( this )
    {
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
      {
        v15 = WdLogNewEntry5_WdAssertion(v14, v13);
        WdLogEvent5_WdAssertion(v15);
      }
      v16 = *((_QWORD *)this + 337);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 88);
        v24 = *(struct D3DKMDT_HVIDEOPRESENTSOURCESET__ **)(v17 + 408);
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v17 + 72) + 72LL));
        v10 = *(_QWORD *)(v17 + 72);
        *a2 = v10 & -(__int64)(v10 != -112);
        v11 = 0;
        *a3 = v24;
        goto LABEL_16;
      }
      v12 = WdLogNewEntry5_WdError(v14, 0LL);
      *(_QWORD *)(v12 + 24) = this;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v12 + 24) = 0LL;
    }
    WdLogEvent5_WdError(v12);
    v11 = -1071775742;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = this;
    WdLogEvent5_WdError(v9);
    v11 = -1073741811;
  }
LABEL_16:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21, v10);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return v11;
}
