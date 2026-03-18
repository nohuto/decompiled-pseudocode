/*
 * XREFs of ?CompareVideoSignalInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0QEAE@Z @ 0x1C02E2550
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a3,
        unsigned __int8 *const a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  char VideoStandard; // al
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+30h] [rbp-18h]

  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v18 = 1;
    v16 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6014);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 6014LL);
  if ( a3 )
  {
    LOBYTE(a3->VideoStandard) = 0;
    if ( this && a2 )
    {
      if ( *((_DWORD *)this + 3) == a2->ActiveSize.cx
        && *((_DWORD *)this + 4) == a2->ActiveSize.cy
        && *((_DWORD *)this + 5) == a2->VSyncFreq.Numerator
        && *((_DWORD *)this + 6) == a2->VSyncFreq.Denominator )
      {
        v7 = *((unsigned int *)this + 12);
        if ( (((unsigned __int8)v7 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0 )
        {
          VideoStandard = a3->VideoStandard;
          if ( (((unsigned __int16)v7 ^ (unsigned __int16)*(_DWORD *)&a2->AdditionalSignalInfo) & 0x1F8) == 0 )
            VideoStandard = 1;
          LOBYTE(a3->VideoStandard) = VideoStandard;
        }
      }
      v10 = 0;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v8, v7);
      *(_QWORD *)(v11 + 24) = 0LL;
      WdLogEvent5_WdError(v11);
      v10 = -1071774959;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    v10 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16, v7);
  if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v16);
  return v10;
}
