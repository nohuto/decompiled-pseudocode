/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0112270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0006154 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
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
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *Instance; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+28h] [rbp-20h]
  char v34; // [rsp+30h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 15);
  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7013);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7013LL);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173005 )
      v14 = this;
    else
      v14 = 0LL;
    if ( v14 )
    {
      v15 = 0LL;
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(0LL);
      if ( Instance )
      {
        operator delete(0LL);
        ++*((_DWORD *)v14 + 20);
        v15 = Instance + 2;
        v21 = *((_DWORD *)v14 + 20);
        *((_DWORD *)Instance + 20) = 0;
        *((_DWORD *)Instance + 4) = v21;
        *((_DWORD *)Instance + 6) = 0;
        *(_QWORD *)((char *)Instance + 28) = -1LL;
        *(_QWORD *)((char *)Instance + 36) = -1LL;
        *(_QWORD *)((char *)Instance + 44) = -1LL;
        Instance[8] = 0xFFFFFFFFLL;
        v22 = 0;
        *((_DWORD *)v15 + 14) = 8;
      }
      else
      {
        v30 = WdLogNewEntry5_WdLowResource(v17, v16, v19, v20);
        WdLogEvent5_WdLowResource(v30);
        v22 = -1073741801;
      }
      operator delete(0LL);
      if ( v22 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v24, v23);
        *(_QWORD *)(v31 + 24) = v22;
        WdLogEvent5_WdError(v31);
      }
      else
      {
        *(_QWORD *)a2 = v15;
        v22 = 0;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v13, v12);
      *(_QWORD *)(v29 + 24) = this;
      WdLogEvent5_WdError(v29);
      v22 = -1071774967;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v28 + 24) = 0LL;
    WdLogEvent5_WdError(v28);
    v22 = -1071774959;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v23);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v32);
  return (unsigned int)v22;
}
