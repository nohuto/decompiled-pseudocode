/*
 * XREFs of ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1C020A298
 * Callers:
 *     ?OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z @ 0x1C020A1A0 (-OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0027140 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x1C0027334 (-ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C002738C (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00273C8 (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     MonitorLogBadEDID @ 0x1C03B090C (MonitorLogBadEDID.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::ParseDescriptorModes(
        DxgMonitor::MonitorModes ***this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  DxgMonitor::MonitorModes *v4; // r13
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned __int16 *v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdi
  __int16 v14; // cx
  __int128 v15; // xmm6
  __int64 v16; // rax
  _DWORD *v17; // rdi
  int v18; // ecx
  struct _D3DKMDT_VIDEO_SIGNAL_INFO *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  _DWORD *v26; // rcx
  DxgMonitor::MonitorModes **v27; // rdi
  DxgMonitor::MonitorModes **v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned __int16 *v35; // rax
  int v36; // eax
  __int64 v37; // r9
  int v38; // r15d
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v39; // rdi
  int v40; // eax
  unsigned int v41; // r13d
  DxgMonitor::MonitorModes *v43; // rdi
  DxgMonitor::MonitorModes **v44; // rcx
  int v45; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v46; // [rsp+34h] [rbp-2Ch]
  __int128 v47; // [rsp+38h] [rbp-28h]
  unsigned __int16 v48; // [rsp+A0h] [rbp+40h] BYREF
  int v49; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v50; // [rsp+B0h] [rbp+50h]
  int v51; // [rsp+B8h] [rbp+58h]

  LOBYTE(v51) = 0;
  WdLogSingleEntry2(7LL, this, a2);
  v4 = (DxgMonitor::MonitorModes *)(this + 16);
  if ( *(DxgMonitor::MonitorModes **)v4 != v4 )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)a2;
  v49 = 0;
  v6 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, _QWORD, _QWORD))(v5 + 192))(
         a2,
         &v49,
         0LL,
         0LL);
  v8 = v6;
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
    goto LABEL_39;
  if ( v49 )
  {
    v9 = (unsigned __int16 *)operator new[](56LL * (unsigned int)(v49 - 1) + 60, 0x4D677844u, 256LL, v7);
    if ( !v9 )
    {
      WdLogSingleEntry0(2LL);
LABEL_43:
      LODWORD(v13) = -1073741801;
      goto LABEL_45;
    }
    v10 = *(_QWORD *)a2;
    v45 = 0;
    v11 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, int *, unsigned __int16 *))(v10 + 192))(
            a2,
            &v49,
            &v45,
            v9 + 2);
    v13 = v11;
    if ( v11 < 0 )
    {
LABEL_44:
      WdLogSingleEntry1(2LL, v13);
LABEL_45:
      if ( !v9 )
        return (unsigned int)v13;
      goto LABEL_49;
    }
    v14 = v49;
    *v9 = v49;
    v9[1] = v45;
    *(_QWORD *)&v47 = 0x800000008LL;
    *((_QWORD *)&v47 + 1) = 8LL;
    v50 = 0;
    if ( v14 )
    {
      v15 = v47;
      do
      {
        v16 = operator new[](0x78uLL, 0x4D677844u, 256LL, v12);
        v17 = (_DWORD *)v16;
        if ( !v16 )
          goto LABEL_48;
        v18 = *((_DWORD *)this + 31);
        v19 = (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v16 + 8);
        *((_DWORD *)this + 31) = v18 + 1;
        v20 = 28LL * v50;
        *v17 = v18;
        *(_QWORD *)&v47 = v20 * 2;
        v21 = ConvertVideoSignalInfo((const struct _VideoModeDescriptor *)&v9[v20 + 2], v19);
        v46 = v21;
        if ( v21 < 0
          || (v22 = v47,
              v17[16] = 2,
              *(_OWORD *)(v17 + 17) = v15,
              v21 = ConvertMonitorCapablitiesOrigin(*((unsigned __int8 *)v9 + v22 + 57), v17 + 21),
              v46 = v21,
              v21 < 0)
          || (v21 = ConvertMonitorModeTimingType(*((unsigned __int8 *)v9 + v47 + 58), v17 + 28), v46 = v21, v21 < 0) )
        {
          WdLogSingleEntry1(3LL, v21);
          MonitorLogBadEDID(v46);
          operator delete(v17);
        }
        else
        {
          v23 = (unsigned __int8)v51;
          v24 = v9[1];
          if ( (unsigned int)(v17[28] - 1) <= 2 )
            v23 = 1;
          v51 = v23;
          if ( v24 == v50 )
          {
            if ( this[18] )
              WdLogSingleEntry0(1LL);
            this[18] = (DxgMonitor::MonitorModes **)v17;
            v25 = 1;
          }
          else
          {
            v25 = 2;
          }
          v26 = v17;
          v27 = (DxgMonitor::MonitorModes **)(v17 + 24);
          v26[22] = v25;
          ++*((_DWORD *)this + 30);
          v28 = this[17];
          if ( *v28 != v4 )
LABEL_30:
            __fastfail(3u);
          *v27 = v4;
          v27[1] = (DxgMonitor::MonitorModes *)v28;
          *v28 = (DxgMonitor::MonitorModes *)v27;
          this[17] = v27;
        }
        v29 = *v9;
      }
      while ( ++v50 < v29 );
    }
    operator delete[](v9);
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
  v30 = *(_QWORD *)a2;
  v48 = 0;
  v31 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, unsigned __int16 *, _QWORD))(v30 + 200))(
          a2,
          &v48,
          0LL);
  v8 = v31;
  if ( v31 == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v33, v32);
    goto LABEL_36;
  }
  if ( (int)(v31 + 0x80000000) >= 0 && v31 != -1073741789 )
  {
LABEL_39:
    WdLogSingleEntry1(2LL, v8);
    return (unsigned int)v8;
  }
  if ( !v48 )
    goto LABEL_36;
  v35 = (unsigned __int16 *)operator new[](52LL * v48 + 4, 0x4D677844u, 256LL, v34);
  v9 = v35;
  if ( !v35 )
  {
    WdLogSingleEntry0(2LL);
    goto LABEL_43;
  }
  *v35 = v48;
  v36 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)a2 + 200LL))(
          a2,
          v35,
          v35 + 2);
  v13 = v36;
  if ( v36 < 0 )
    goto LABEL_44;
  v38 = 0;
  if ( v48 )
  {
    while ( 1 )
    {
      v39 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new[](0x40uLL, 0x4D677844u, 256LL, v37);
      if ( !v39 )
        break;
      v40 = ConvertFrequencyRange((const struct _FrequencyRangeDescriptor *)&v9[26 * v38 + 2], v39);
      v41 = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry1(3LL, v40);
        MonitorLogBadEDID(v41);
        operator delete(v39);
      }
      else
      {
        v43 = (DxgMonitor::MonitorModes *)&v39[1];
        v44 = this[23];
        if ( *v44 != (DxgMonitor::MonitorModes *)(this + 22) )
          goto LABEL_30;
        *(_QWORD *)v43 = this + 22;
        *((_QWORD *)v43 + 1) = v44;
        *v44 = v43;
        this[23] = (DxgMonitor::MonitorModes **)v43;
        ++*((_DWORD *)this + 42);
      }
      if ( ++v38 >= (unsigned int)v48 )
        goto LABEL_35;
    }
LABEL_48:
    WdLogSingleEntry0(2LL);
    LODWORD(v13) = -1073741801;
LABEL_49:
    operator delete[](v9);
    return (unsigned int)v13;
  }
LABEL_35:
  operator delete[](v9);
LABEL_36:
  if ( !(_BYTE)v51 && !*((_DWORD *)this + 42) )
    *((_DWORD *)this + 28) = 2;
  return 0LL;
}
