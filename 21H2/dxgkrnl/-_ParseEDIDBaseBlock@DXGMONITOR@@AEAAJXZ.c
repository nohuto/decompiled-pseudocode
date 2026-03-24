/*
 * XREFs of ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C018C6F4
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018D400 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDescriptor@@2@Z @ 0x1C001EEC0 (-EDID_V1_GetMonitorModes@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAKPEAU_VideoModeDesc.c)
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C00220F4 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 *     ConvertFrequencyRange @ 0x1C018C4C8 (ConvertFrequencyRange.c)
 *     ConvertMonitorModeTimingType @ 0x1C018CA78 (ConvertMonitorModeTimingType.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C018CADC (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertVideoSignalInfo @ 0x1C018CB24 (ConvertVideoSignalInfo.c)
 *     MonitorLogBadEDID @ 0x1C02F4078 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDBaseBlock(DXGMONITOR ***this, __int64 a2)
{
  unsigned __int16 *v3; // rsi
  _DWORD *v4; // r15
  DXGMONITOR **v5; // rax
  int MonitorModes; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int16 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGMONITOR **v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r12d
  unsigned __int16 v19; // cx
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r13
  int v32; // r13d
  int v33; // eax
  int v34; // eax
  DXGMONITOR **v35; // rbx
  DXGMONITOR **v36; // rax
  DXGMONITOR **v37; // rax
  int SupportedMonitorFrequencyRanges; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  __int16 v41; // bx
  unsigned int v42; // r12d
  char *v43; // rax
  int v44; // eax
  int v45; // ebx
  _QWORD *v46; // rax
  _QWORD *v47; // r14
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r13
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  DXGMONITOR *v58; // r14
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  DXGMONITOR **v68; // rdx
  DXGMONITOR *v69; // rax
  __int128 v70; // [rsp+30h] [rbp-20h]
  int v71; // [rsp+90h] [rbp+40h] BYREF
  int v72; // [rsp+98h] [rbp+48h]
  int v73; // [rsp+A0h] [rbp+50h] BYREF

  LOBYTE(v72) = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( !this[18] )
  {
    v54 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v54);
  }
  v55 = WdLogNewEntry5_WdDmmEvent(this, a2);
  *(_QWORD *)(v55 + 24) = this;
  *(_QWORD *)(v55 + 32) = this[18];
  WdLogEvent5_WdDmmEvent(v55);
  v58 = (DXGMONITOR *)(this + 27);
  if ( *(DXGMONITOR **)v58 != v58 )
  {
    v59 = WdLogNewEntry5_WdAssertion(v57, v56);
    WdLogEvent5_WdAssertion(v59);
  }
  v5 = this[18];
  v71 = 0;
  MonitorModes = EDID_V1_GetMonitorModes(
                   *((unsigned int *)v5 + 2),
                   *((_DWORD *)v5 + 4),
                   (unsigned __int8 *)v5 + 24,
                   (unsigned __int16 *)&v71,
                   0LL,
                   0LL);
  v9 = MonitorModes;
  v10 = MonitorModes + 0x80000000;
  if ( (int)v10 >= 0 && MonitorModes != -1073741789 )
  {
    v60 = WdLogNewEntry5_WdError(v10, v7);
    *(_QWORD *)(v60 + 24) = v9;
    WdLogEvent5_WdError(v60);
    return (unsigned int)v9;
  }
  if ( v71 )
  {
    v11 = (unsigned __int16 *)operator new[](56LL * (unsigned int)(v71 - 1) + 60, 0x4D677844u, PagedPool);
    v3 = v11;
    if ( !v11 )
    {
      v62 = WdLogNewEntry5_WdError(v13, v12);
      WdLogEvent5_WdError(v62);
      LODWORD(v9) = -1073741801;
      return (unsigned int)v9;
    }
    v14 = this[18];
    v73 = 0;
    v15 = EDID_V1_GetMonitorModes(
            *((unsigned int *)v14 + 2),
            *((_DWORD *)v14 + 4),
            (unsigned __int8 *)v14 + 24,
            (unsigned __int16 *)&v71,
            (struct _VideoModeDescriptor *)(v11 + 2),
            &v73);
    v9 = v15;
    if ( v15 < 0 )
      goto LABEL_47;
    v18 = 0;
    v19 = v71;
    v3[1] = v73;
    *(_QWORD *)&v70 = 0x800000008LL;
    *((_QWORD *)&v70 + 1) = 8LL;
    *v3 = v19;
    if ( v19 )
    {
      do
      {
        v20 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
        v23 = v20;
        if ( !v20 )
          goto LABEL_51;
        *v20 = (*((_DWORD *)this + 53))++;
        v24 = 28LL * v18;
        v71 = ConvertVideoSignalInfo(&v3[v24 + 2], v20 + 2);
        if ( v71 < 0
          || (v23[16] = 2,
              *(_OWORD *)(v23 + 17) = v70,
              v71 = ConvertMonitorCapablitiesOrigin(HIBYTE(v3[v24 + 28]), v23 + 21),
              v71 < 0) )
        {
          v64 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v64 + 24) = this[18] + 3;
          v31 = v71;
        }
        else
        {
          v28 = ConvertMonitorModeTimingType(LOBYTE(v3[v24 + 29]), v23 + 28);
          v31 = v28;
          if ( v28 >= 0 )
          {
            v32 = (unsigned __int8)v72;
            v33 = v3[1];
            if ( (unsigned int)(v23[28] - 1) <= 2 )
              v32 = 1;
            v72 = v32;
            if ( v33 == v18 )
            {
              if ( this[29] )
              {
                v65 = WdLogNewEntry5_WdAssertion(0LL, 1LL);
                WdLogEvent5_WdAssertion(v65);
              }
              this[29] = (DXGMONITOR **)v23;
              v34 = 1;
            }
            else
            {
              v34 = 2;
            }
            v23[22] = v34;
            v35 = (DXGMONITOR **)(v23 + 24);
            ++*((_DWORD *)this + 52);
            v36 = this[28];
            if ( *v36 != v58 )
LABEL_28:
              __fastfail(3u);
            *v35 = v58;
            v35[1] = (DXGMONITOR *)v36;
            *v36 = (DXGMONITOR *)v35;
            this[28] = v35;
            goto LABEL_18;
          }
          v64 = WdLogNewEntry5_WdWarning(0LL, v29, v30);
          *(_QWORD *)(v64 + 24) = this[18] + 3;
        }
        *(_QWORD *)(v64 + 32) = v31;
        WdLogEvent5_WdWarning(v64);
        MonitorLogBadEDID(this[18] + 3, (unsigned int)v31);
        operator delete(v23);
LABEL_18:
        ++v18;
      }
      while ( v18 < *v3 );
    }
  }
  else
  {
    v61 = WdLogNewEntry5_WdWarning(v10, 1LL, v8);
    WdLogEvent5_WdWarning(v61);
  }
  v37 = this[18];
  LOWORD(v71) = 0;
  SupportedMonitorFrequencyRanges = EDID_V1_GetSupportedMonitorFrequencyRanges(
                                      *((_DWORD *)v37 + 2),
                                      *((_DWORD *)v37 + 4),
                                      (unsigned __int8 *)v37 + 24,
                                      (__int64)&v71,
                                      0LL);
  v9 = SupportedMonitorFrequencyRanges;
  if ( SupportedMonitorFrequencyRanges == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v17, v16, v39, v40);
    goto LABEL_33;
  }
  if ( ((SupportedMonitorFrequencyRanges + 0x80000000) & 0x80000000) != 0
    || SupportedMonitorFrequencyRanges == -1073741789 )
  {
    v41 = v71;
    if ( !(_WORD)v71 )
      goto LABEL_33;
    v42 = (unsigned __int16)v71;
    v43 = (char *)operator new[](52LL * (unsigned __int16)v71 + 4, 0x4D677844u, PagedPool);
    v4 = v43;
    if ( !v43 )
    {
LABEL_51:
      v66 = WdLogNewEntry5_WdError(v22, v21);
      WdLogEvent5_WdError(v66);
      LODWORD(v9) = -1073741801;
      goto LABEL_35;
    }
    *(_WORD *)v43 = v41;
    v44 = EDID_V1_GetSupportedMonitorFrequencyRanges(
            *((_DWORD *)this[18] + 2),
            *((_DWORD *)this[18] + 4),
            (unsigned __int8 *)this[18] + 24,
            (__int64)v43,
            (struct _FrequencyRangeDescriptor *)(v43 + 4));
    v9 = v44;
    if ( v44 >= 0 )
    {
      v45 = 0;
      if ( v42 )
      {
        do
        {
          v46 = operator new[](0x40uLL, 0x4D677844u, PagedPool);
          v47 = v46;
          if ( !v46 )
            goto LABEL_51;
          v48 = ConvertFrequencyRange(&v4[13 * v45 + 1], (__int64)v46);
          v52 = v48;
          if ( v48 < 0 )
          {
            v67 = WdLogNewEntry5_WdWarning(v50, v49, v51);
            *(_QWORD *)(v67 + 24) = this[18] + 3;
            *(_QWORD *)(v67 + 32) = v52;
            WdLogEvent5_WdWarning(v67);
            MonitorLogBadEDID(this[18] + 3, (unsigned int)v52);
            operator delete(v47);
          }
          else
          {
            v68 = this[34];
            v69 = (DXGMONITOR *)(v47 + 6);
            if ( *v68 != (DXGMONITOR *)(this + 33) )
              goto LABEL_28;
            *(_QWORD *)v69 = this + 33;
            v47[7] = v68;
            *v68 = v69;
            this[34] = (DXGMONITOR **)v69;
            ++*((_DWORD *)this + 64);
          }
        }
        while ( ++v45 < v42 );
      }
LABEL_33:
      if ( !(_BYTE)v72 && !*((_DWORD *)this + 64) )
        *((_DWORD *)this + 30) = 2;
      LODWORD(v9) = 0;
      goto LABEL_35;
    }
  }
LABEL_47:
  v63 = WdLogNewEntry5_WdError(v17, v16);
  *(_QWORD *)(v63 + 24) = v9;
  WdLogEvent5_WdError(v63);
LABEL_35:
  if ( v3 )
    operator delete[](v3);
  if ( v4 )
    operator delete[](v4);
  return (unsigned int)v9;
}
