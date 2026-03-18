/*
 * XREFs of DxgkPollDisplayChildrenInternal @ 0x1C02D31C0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C02D31A0 (DxgkPollDisplayChildren.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02CF750 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02F07A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C030B034 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkPollDisplayChildrenInternal(_D3DKMT_POLLDISPLAYCHILDREN *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r9
  _D3DKMT_POLLDISPLAYCHILDREN v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // ebx
  DXGGLOBAL *Global; // rax
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  _D3DKMT_POLLDISPLAYCHILDREN v20; // [rsp+50h] [rbp-128h] BYREF
  int v21; // [rsp+58h] [rbp-120h] BYREF
  __int64 v22; // [rsp+60h] [rbp-118h]
  char v23; // [rsp+68h] [rbp-110h]
  struct DXGPROCESS *Current; // [rsp+70h] [rbp-108h]
  _QWORD v25[28]; // [rsp+80h] [rbp-F8h] BYREF

  memset(v25, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v25[1]);
  v25[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v25[3]) = 43;
  LOBYTE(v25[6]) = -1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2036);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2036);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    v11 = *a1;
    v20 = *a1;
  }
  else
  {
    v11 = *a1;
    v20 = *a1;
  }
  v12 = HIDWORD(*(unsigned __int64 *)&v11);
  if ( (unsigned int)v12 >= 0x20 )
    *((_DWORD *)&v20 + 1) = v12 & 1;
  v13 = ((*((_BYTE *)&v20 + 4) & 1) != 0 ? 1 : 4) | 2;
  if ( (*((_BYTE *)&v20 + 4) & 0x10) == 0 )
    v13 = (*((_BYTE *)&v20 + 4) & 1) != 0 ? 1 : 4;
  if ( (*((_BYTE *)&v20 + 4) & 8) == 0 )
  {
    v15 = PollDisplayChildrenForAdapter(&v20, v13, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v25, v10);
    goto LABEL_19;
  }
  if ( !v20.hAdapter )
  {
    Global = DXGGLOBAL_GetGlobal();
    v15 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v20, v13, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v25);
LABEL_19:
    v16 = v15;
    goto LABEL_20;
  }
  v16 = -1073741811;
LABEL_20:
  if ( v16 >= 0 && (*((_BYTE *)&v20 + 4) & 4) != 0 )
  {
    v20 = (_D3DKMT_POLLDISPLAYCHILDREN)-1LL;
    memset(&v25[10], 0, 0x90uLL);
    v16 = DxgkHandleMonitorEvent(-1LL, 0xFFFFFFFFLL, 5LL);
    if ( v16 == -1071774941 )
      v16 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v21);
  return (unsigned int)v16;
}
