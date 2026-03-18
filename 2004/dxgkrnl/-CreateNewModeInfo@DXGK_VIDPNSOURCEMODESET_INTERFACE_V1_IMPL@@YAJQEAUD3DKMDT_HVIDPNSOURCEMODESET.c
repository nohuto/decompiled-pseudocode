/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0155D00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v14; // rdi
  _DWORD *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rbx
  int v22; // eax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+20h] [rbp-28h] BYREF
  __int64 v34; // [rsp+28h] [rbp-20h]
  char v35; // [rsp+30h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 11);
  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 7005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7005);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 7005LL);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
      v14 = this;
    else
      v14 = 0LL;
    if ( v14 )
    {
      v15 = 0LL;
      v16 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
      v21 = v16;
      if ( v16 )
      {
        v16[1] = 0LL;
        *(_DWORD *)v16 = 305419896;
        *((_OWORD *)v16 + 1) = 0LL;
        *((_OWORD *)v16 + 2) = 0LL;
        v16[6] = 0LL;
      }
      else
      {
        v21 = 0LL;
      }
      if ( v21 )
      {
        operator delete(0LL);
        ++*((_DWORD *)v14 + 20);
        v15 = v21 + 2;
        v22 = *((_DWORD *)v14 + 20);
        *((_DWORD *)v21 + 5) = 0;
        v23 = 0;
        *v15 = v22;
      }
      else
      {
        v31 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
        WdLogEvent5_WdLowResource(v31);
        v23 = -1073741801;
      }
      operator delete(0LL);
      if ( v23 < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v25, v24);
        *(_QWORD *)(v32 + 24) = v23;
        WdLogEvent5_WdError(v32);
      }
      else
      {
        *(_QWORD *)a2 = v15;
        v23 = 0;
      }
    }
    else
    {
      v30 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v30 + 24) = this;
      WdLogEvent5_WdError(v30);
      v23 = -1071774968;
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v29 + 24) = 0LL;
    WdLogEvent5_WdError(v29);
    v23 = -1071774960;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v24);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v33);
  return (unsigned int)v23;
}
