/*
 * XREFs of DxgkSetStereoEnabled @ 0x1C030D6E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetStereoEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  unsigned int updated; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+50h] [rbp-20h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  char v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+88h] [rbp+18h] BYREF
  BOOL v18; // [rsp+90h] [rbp+20h] BYREF

  v14 = -1;
  v3 = a1;
  v15 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2089;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2089);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 2089);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v17 = 0;
    v10 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*((_QWORD *)Current + 11) + 224LL))(&v17, 0LL, 0LL);
    if ( !v17 || v10 )
    {
      updated = -1073741637;
    }
    else
    {
      v18 = v3 != 0;
      updated = ZwUpdateWnfStateData(&WNF_DX_STEREO_CONFIG, &v18, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else
  {
    updated = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
  return updated;
}
