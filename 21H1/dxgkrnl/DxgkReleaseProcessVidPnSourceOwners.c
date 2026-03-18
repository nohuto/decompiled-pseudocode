/*
 * XREFs of DxgkReleaseProcessVidPnSourceOwners @ 0x1C0282560
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0008130 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00DA400 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00DA4A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0155968 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkReleaseProcessVidPnSourceOwners(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // ebx
  DXGPROCESS *Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-79h] BYREF
  __int64 v16; // [rsp+28h] [rbp-71h]
  char v17; // [rsp+30h] [rbp-69h]
  _BYTE v18[8]; // [rsp+40h] [rbp-59h] BYREF
  __int64 v19; // [rsp+48h] [rbp-51h]
  __int64 v20; // [rsp+50h] [rbp-49h]
  int v21; // [rsp+58h] [rbp-41h]
  __int16 v22; // [rsp+5Ch] [rbp-3Dh]
  char v23; // [rsp+5Eh] [rbp-3Bh]
  _QWORD v24[10]; // [rsp+90h] [rbp-9h] BYREF

  memset(v24, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v24[1]);
  v15 = -1;
  v16 = 0LL;
  v24[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v24[3]) = 42;
  LOBYTE(v24[6]) = -1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2033;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2033);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2033LL);
  v20 = 0LL;
  v22 = 0;
  v19 = a1;
  v21 = 512;
  v23 = 0;
  if ( (int)DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v18, 1) >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v18, v4);
    DXGPROCESS::ReleaseVidPnSourceOwners(Process, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v24);
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v18, v11);
    v9 = 0;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v5, v4, v6, v7) + 24) = a1;
    v9 = -1073741811;
  }
  if ( (_BYTE)v22 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v18, v8);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15, v8);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  return v9;
}
