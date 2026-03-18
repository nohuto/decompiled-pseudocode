/*
 * XREFs of DxgkPollDisplayChildrenInternal @ 0x1C0220DC0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C0220DA0 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021DB28 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0265EDC (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02911A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 */

__int64 __fastcall DxgkPollDisplayChildrenInternal(_D3DKMT_POLLDISPLAYCHILDREN *a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  _D3DKMT_POLLDISPLAYCHILDREN v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  DXGGLOBAL *Global; // rax
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  _D3DKMT_POLLDISPLAYCHILDREN v18; // [rsp+30h] [rbp-108h] BYREF
  int v19; // [rsp+38h] [rbp-100h] BYREF
  __int64 v20; // [rsp+40h] [rbp-F8h]
  char v21; // [rsp+48h] [rbp-F0h]
  struct DXGPROCESS *Current; // [rsp+50h] [rbp-E8h]
  _QWORD v23[24]; // [rsp+60h] [rbp-D8h] BYREF

  memset(v23, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v23[1]);
  v23[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v23[3]) = 43;
  LOBYTE(v23[6]) = -1;
  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerEnter, v5, 2036);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2036LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  if ( a2 == 1 )
  {
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_D3DKMT_POLLDISPLAYCHILDREN *)MmUserProbeAddress;
    v8 = *a1;
    v18 = *a1;
  }
  else
  {
    v8 = *a1;
    v18 = *a1;
  }
  v9 = HIDWORD(*(unsigned __int64 *)&v8);
  if ( (unsigned int)v9 >= 0x20 )
    *((_DWORD *)&v18 + 1) = v9 & 1;
  v10 = *((unsigned int *)&v18 + 1);
  v11 = ((*((_BYTE *)&v18 + 4) & 1) != 0 ? 1 : 4) | 2;
  if ( (*((_BYTE *)&v18 + 4) & 0x10) == 0 )
    v11 = (*((_BYTE *)&v18 + 4) & 1) != 0 ? 1 : 4;
  if ( (*((_BYTE *)&v18 + 4) & 8) == 0 )
  {
    v13 = PollDisplayChildrenForAdapter(&v18, v11, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v23);
    goto LABEL_19;
  }
  if ( !v18.hAdapter )
  {
    Global = DXGGLOBAL::GetGlobal((*((_BYTE *)&v18 + 4) & 1) != 0 ? 1 : 4, *((unsigned int *)&v18 + 1));
    v13 = DXGGLOBAL::PollDisplayChildrenAll(Global, &v18, v11, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v23);
LABEL_19:
    v14 = v13;
    goto LABEL_20;
  }
  v14 = -1073741811;
LABEL_20:
  if ( v14 >= 0 && (*((_BYTE *)&v18 + 4) & 4) != 0 )
  {
    v18 = (_D3DKMT_POLLDISPLAYCHILDREN)-1LL;
    memset(&v23[10], 0, 0x68uLL);
    v14 = DxgkHandleMonitorEvent(-1LL, 0xFFFFFFFFLL, 5LL);
    if ( v14 == -1071774941 )
      v14 = 0;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19, v10);
  if ( v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
  return (unsigned int)v14;
}
