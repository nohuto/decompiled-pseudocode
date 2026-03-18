/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C01F14EC
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01F0E64 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x1C00238CC (-SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z.c)
 *     ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0158260 (-QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CON.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEAE@Z @ 0x1C01E2680 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z @ 0x1C03B3BCC (-_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(
        struct DXGADAPTER *a1,
        __int64 a2,
        int *a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int64 a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  int *v7; // r12
  __int64 v8; // r14
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  unsigned int *v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // r14
  int *v19; // rsi
  char v20; // r12
  __int64 v21; // r15
  __int64 v22; // r13
  int v23; // eax
  unsigned __int64 v24; // rbx
  int v25; // esi
  __int64 v26; // r9
  bool v27; // zf
  int *v28; // rbx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v30; // rax
  unsigned int *v31; // r15
  unsigned int *v32; // rbx
  unsigned __int64 v33; // rax
  unsigned int *v34; // rax
  int v35; // eax
  unsigned int *v36; // [rsp+40h] [rbp-58h]
  unsigned __int8 v37; // [rsp+A0h] [rbp+8h]
  unsigned int v38; // [rsp+A8h] [rbp+10h]
  unsigned int v40; // [rsp+B8h] [rbp+20h] BYREF

  LOBYTE(v40) = a4;
  v38 = a2;
  v7 = a3;
  v8 = (unsigned int)a2;
  v10 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2);
  v11[5] = 2LL;
  v11[4] = a1;
  v11[3] = v8;
  if ( !a1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v14 = *((_QWORD *)a1 + 349);
  if ( !v14 )
  {
    WdLogSingleEntry0(1LL);
    v14 = *((_QWORD *)a1 + 349);
  }
  v15 = *(unsigned int **)(v14 + 112);
  v36 = v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  v16 = (unsigned int)(v8 - 1);
  v37 = 0;
  a5 = 0;
  v17 = (a6 != 0) + 2LL;
  if ( (_DWORD)v8 != 1 )
  {
    v18 = 0;
    v19 = v7;
    v20 = v40;
    v21 = (unsigned int)v16;
    v22 = (__int64)v15;
    do
    {
      LOBYTE(v13) = v20;
      v23 = MONITOR_MGR::_EnableDisableMonitor(v22, (unsigned int)*v19, v13, 2, v17);
      if ( v23 < 0 )
        WdLogSingleEntry3(2LL, (unsigned int)*v19, a1, v23);
      v18 |= a5;
      ++v19;
      --v21;
    }
    while ( v21 );
    v7 = a3;
    v37 = v18;
    LODWORD(v8) = v38;
    v10 = v38;
    v16 = v38 - 1;
  }
  v24 = a6;
  LOBYTE(v13) = v40;
  v25 = MONITOR_MGR::_EnableDisableMonitor((__int64)v36, (unsigned int)v7[v16], v13, 2, a6);
  if ( v25 >= 0 )
  {
    if ( (_DWORD)v8 )
    {
      v27 = v24 == 0;
      v28 = v7;
      if ( v27 )
      {
        do
        {
          Global = DXGGLOBAL_GetGlobal();
          HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
            (KSPIN_LOCK *)Global + 38115,
            *(struct _LUID *)((char *)a1 + 404),
            *v28++,
            1u);
          --v10;
        }
        while ( v10 );
      }
      else
      {
        do
        {
          v30 = DXGGLOBAL_GetGlobal();
          HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
            (KSPIN_LOCK *)v30 + 38115,
            *(struct _LUID *)((char *)a1 + 404),
            *v28++,
            0);
          --v10;
        }
        while ( v10 );
      }
    }
    if ( v37 | a5 && (_BYTE)v40 == 1 )
    {
      v31 = 0LL;
      v32 = 0LL;
      if ( (_DWORD)v8 == 1 && *v7 == -1 )
      {
        v40 = v36[8];
        v8 = v40;
        v33 = 4LL * v40;
        if ( !is_mul_ok(v40, 4uLL) )
          v33 = -1LL;
        v34 = (unsigned int *)operator new[](v33, 0x4D677844u, 256LL, v26);
        v32 = v34;
        if ( v34 )
        {
          MONITOR_MGR::_GetUsb4TargetList((MONITOR_MGR *)v36, &v40, v34);
          LODWORD(v8) = v40;
          v31 = v32;
        }
        else
        {
          WdLogSingleEntry1(2LL, v8);
          v25 = -1073741801;
        }
        if ( v25 < 0 )
          goto LABEL_35;
      }
      else
      {
        v31 = (unsigned int *)v7;
      }
      v35 = USB4_POWERON_WORK_QUEUE::QueueWorkItem(
              (USB4_POWERON_WORK_QUEUE *)((char *)MONITOR_MGR::_pUsb4Manager + 72),
              a1,
              v8,
              v31,
              a7);
      v25 = v35;
      if ( v35 < 0 )
        WdLogSingleEntry1(2LL, v35);
LABEL_35:
      if ( v32 )
        operator delete[](v32);
    }
  }
  return (unsigned int)v25;
}
