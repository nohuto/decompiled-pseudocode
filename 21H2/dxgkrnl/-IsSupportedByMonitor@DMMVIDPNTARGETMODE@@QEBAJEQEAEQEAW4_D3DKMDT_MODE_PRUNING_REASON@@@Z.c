/*
 * XREFs of ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A8DFC
 * Callers:
 *     ?IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@IQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A8CE0 (-IsSupportedByMonitor@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMO.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x1C01B5B18 (BmlIsSupportedByMonitorTargetMode.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C0010D08 (-AcquireMonitorShared@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@$$CBVDXGMONITOR@@@@PEAUHDXGMONI.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C01A9040 (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODE::IsSupportedByMonitor(
        DMMVIDPNTARGETMODE *this,
        char a2,
        unsigned __int8 *const a3,
        enum _D3DKMDT_MODE_PRUNING_REASON *const a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rsi
  int v13; // r12d
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  char v18; // r14
  char v19; // si
  int v20; // ebx
  int IsSupportedModeInternal; // eax
  _BYTE v23[3]; // [rsp+31h] [rbp-27h] BYREF
  int v24; // [rsp+34h] [rbp-24h] BYREF
  int v25; // [rsp+38h] [rbp-20h] BYREF
  __int64 v26; // [rsp+40h] [rbp-18h]
  __int64 v27; // [rsp+A0h] [rbp+48h] BYREF
  char v28; // [rsp+A8h] [rbp+50h]
  unsigned __int8 *v29; // [rsp+B0h] [rbp+58h]
  enum _D3DKMDT_MODE_PRUNING_REASON *v30; // [rsp+B8h] [rbp+60h]

  v30 = a4;
  v29 = a3;
  v28 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  *a4 = D3DKMDT_MPR_UNINITIALIZED;
  v8 = *((_QWORD *)this + 5);
  *a3 = 0;
  if ( !v8 )
  {
    WdLogSingleEntry0(1LL);
    v8 = *((_QWORD *)this + 5);
    if ( !v8 )
    {
      WdLogSingleEntry1(2LL, this);
      return 3223192337LL;
    }
  }
  v9 = *(_QWORD *)(v8 + 112);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, v8);
    return 3223192337LL;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 112LL);
  v26 = v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(3LL, *(unsigned int *)(v9 + 24), this);
    return 3223192376LL;
  }
  if ( this == (DMMVIDPNTARGETMODE *)-72LL )
  {
    v20 = -1073741811;
  }
  else
  {
    MONITOR_MGR::AcquireMonitorShared(&v27, v10);
    v11 = v27;
    if ( v27 )
    {
      v12 = *(_QWORD *)(v27 + 232);
      v13 = 0;
      LOBYTE(v27) = 0;
      v25 = 0;
      if ( ((*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 40LL))(*(_QWORD *)(v12 + 232)) == 1
         || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 40LL))(*(_QWORD *)(v12 + 232)) == 2
         || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 40LL))(*(_QWORD *)(v12 + 232)) == 3
         || (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 40LL))(*(_QWORD *)(v12 + 232)) == 14)
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 232) + 80LL))(*(_QWORD *)(v12 + 232)) )
      {
        WdLogSingleEntry1(7LL, v12);
        v13 = 1;
        v19 = 1;
        goto LABEL_23;
      }
      v15 = *(unsigned int *)(v12 + 112);
      if ( (unsigned int)(v15 - 1) <= 1 )
      {
        LOBYTE(v14) = a2;
        IsSupportedModeInternal = DxgMonitor::MonitorModes::_IsSupportedModeInternal(
                                    v12,
                                    (char *)this + 72,
                                    v15,
                                    v14,
                                    &v27,
                                    &v25);
        v19 = v27;
        v17 = IsSupportedModeInternal;
        v13 = v25;
      }
      else
      {
        v24 = 0;
        v25 = 0;
        LOBYTE(v27) = 0;
        v23[0] = 0;
        if ( (_DWORD)v15 != 3 )
          WdLogSingleEntry0(1LL);
        LOBYTE(v14) = a2;
        v17 = DxgMonitor::MonitorModes::_IsSupportedModeInternal(v12, (char *)this + 72, 2LL, v14, &v27, &v24);
        if ( v17 >= 0 )
        {
          LOBYTE(v16) = v28;
          v17 = DxgMonitor::MonitorModes::_IsSupportedModeInternal(v12, (char *)this + 72, 1LL, v16, v23, &v25);
          if ( v17 >= 0 )
          {
            v18 = v23[0];
            v13 = v25;
            if ( (_BYTE)v27 != v23[0] )
            {
              WdLogSingleEntry5(7LL, v12, (unsigned __int8)v27, v24, v23[0], v25);
              WdLogSingleEntry5(
                7LL,
                *((unsigned int *)this + 21),
                *((unsigned int *)this + 22),
                *((unsigned int *)this + 23),
                *((unsigned int *)this + 24),
                (int)(*((_DWORD *)this + 30) << 29) >> 29);
              WdLogSingleEntry3(7LL, *((unsigned int *)this + 25), *((unsigned int *)this + 26), *((_QWORD *)this + 14));
            }
            if ( v18 || (_BYTE)v27 )
            {
              v19 = 1;
              if ( v18 )
              {
LABEL_23:
                v17 = 0;
                goto LABEL_24;
              }
            }
            else
            {
              v19 = 0;
            }
            v13 = v24;
            goto LABEL_23;
          }
        }
        v19 = 0;
      }
LABEL_24:
      ExReleaseResourceLite((PERESOURCE)(v11 + 24));
      KeLeaveCriticalRegion();
      v20 = v17;
      if ( v17 >= 0 )
      {
        *v29 = v19;
        *v30 = v13;
        return 0LL;
      }
      goto LABEL_40;
    }
    v20 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>(&v27);
  }
LABEL_40:
  WdLogSingleEntry3(2LL, this, v26, v20);
  return (unsigned int)v20;
}
