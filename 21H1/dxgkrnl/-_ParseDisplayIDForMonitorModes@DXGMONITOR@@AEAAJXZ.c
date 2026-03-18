/*
 * XREFs of ?_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C02F6104
 * Callers:
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F652C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000BEAC (--3@YAXPEAX@Z.c)
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C005E888 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 *     ConvertMonitorModeTimingType @ 0x1C0169CE4 (ConvertMonitorModeTimingType.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0169D48 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ConvertVideoSignalInfo @ 0x1C0169D90 (ConvertVideoSignalInfo.c)
 *     MonitorLogBadEDID @ 0x1C02EF7A8 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_ParseDisplayIDForMonitorModes(DXGMONITOR *this, __int64 a2)
{
  unsigned int v2; // r13d
  const struct DisplayIDObj *v3; // r14
  char v5; // r12
  unsigned __int16 *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  int SupportedModes; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // edx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _DWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // eax
  _QWORD *v44; // rbx
  _QWORD *v45; // rax
  __int64 v47; // rax
  __int128 v48; // [rsp+20h] [rbp-20h]
  unsigned int v49; // [rsp+80h] [rbp+40h] BYREF
  __int64 v50; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0;
  v3 = (DXGMONITOR *)((char *)this + 168);
  v5 = 0;
  v6 = 0LL;
  if ( !*((_QWORD *)this + 21) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (_QWORD *)((char *)this + 216);
  if ( (_QWORD *)*v8 != v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v10 + 24) = this;
  *(_QWORD *)(v10 + 32) = *(_QWORD *)v3;
  WdLogEvent5_WdDmmEvent(v10);
  v49 = 0;
  SupportedModes = DisplayID_GetSupportedModes(v3, &v49, 0LL, 0LL);
  v14 = SupportedModes;
  v15 = SupportedModes + 0x80000000;
  if ( (int)v15 >= 0 && SupportedModes != -1073741789 )
  {
    v16 = WdLogNewEntry5_WdError(v15, v12);
    *(_QWORD *)(v16 + 24) = v14;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v14;
  }
  if ( !v49 )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v12, v13);
    WdLogEvent5_WdWarning(v17);
LABEL_36:
    *((_DWORD *)this + 64) = 0;
    if ( !v5 )
      *((_DWORD *)this + 30) = 2;
    LODWORD(v14) = 0;
    goto LABEL_39;
  }
  v18 = (unsigned __int16 *)operator new[](56LL * (v49 - 1) + 60, 0x4D677844u, PagedPool);
  v6 = v18;
  if ( !v18 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    WdLogEvent5_WdError(v21);
    LODWORD(v14) = -1073741801;
    return (unsigned int)v14;
  }
  LODWORD(v50) = 0;
  v22 = DisplayID_GetSupportedModes(v3, &v49, (unsigned int *)&v50, (struct _VideoModeDescriptor *)(v18 + 2));
  v14 = v22;
  if ( v22 >= 0 )
  {
    *v6 = v49;
    v26 = 28LL * (unsigned int)v50;
    v6[1] = v50;
    v27 = v6[v26 + 13];
    v28 = v6[v26 + 12];
    v29 = *((_DWORD *)this + 10) | 0x100;
    if ( v28 >= v27 )
      v29 = *((_DWORD *)this + 10) & 0xFFFFFEFF;
    v30 = v29 & 0xFFFFFDFF;
    if ( v28 >= v27 )
      v28 = v27;
    *(_QWORD *)&v48 = 0x800000008LL;
    *((_QWORD *)&v48 + 1) = 8LL;
    *((_DWORD *)this + 10) = (v28 < 0x400 ? 0x200 : 0) | v30;
    if ( !*v6 )
      goto LABEL_36;
    while ( 1 )
    {
      v31 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v34 = v31;
      if ( !v31 )
      {
        v47 = WdLogNewEntry5_WdError(v33, v32);
        WdLogEvent5_WdError(v47);
        LODWORD(v14) = -1073741801;
        goto LABEL_39;
      }
      *v31 = (*((_DWORD *)this + 53))++;
      v50 = 56LL * v2;
      v49 = ConvertVideoSignalInfo((unsigned int *)&v6[(unsigned __int64)v50 / 2 + 2], (__int64)(v31 + 2));
      if ( (v49 & 0x80000000) != 0
        || (v38 = v50,
            v34[16] = 2,
            *(_OWORD *)(v34 + 17) = v48,
            v49 = ConvertMonitorCapablitiesOrigin(*((unsigned __int8 *)v6 + v38 + 57), v34 + 21),
            (v49 & 0x80000000) != 0) )
      {
        v37 = WdLogNewEntry5_WdError(v36, v35);
        *(_QWORD *)(v37 + 24) = *(_QWORD *)v3;
        *(_QWORD *)(v37 + 32) = (int)v49;
        WdLogEvent5_WdError(v37);
      }
      else
      {
        v49 = ConvertMonitorModeTimingType(LOBYTE(v6[(unsigned __int64)v50 / 2 + 29]), v34 + 28);
        if ( (v49 & 0x80000000) == 0 )
        {
          if ( (unsigned int)(v34[28] - 1) <= 2 )
            v5 = 1;
          if ( v6[1] == v2 )
          {
            if ( *((_QWORD *)this + 29) )
            {
              v42 = WdLogNewEntry5_WdAssertion(0LL, 1LL);
              WdLogEvent5_WdAssertion(v42);
            }
            *((_QWORD *)this + 29) = v34;
            v43 = 1;
          }
          else
          {
            v43 = 2;
          }
          v34[22] = v43;
          v44 = v34 + 24;
          ++*((_DWORD *)this + 52);
          v45 = (_QWORD *)*((_QWORD *)this + 28);
          if ( (_QWORD *)*v45 != v8 )
            __fastfail(3u);
          *v44 = v8;
          v44[1] = v45;
          *v45 = v44;
          *((_QWORD *)this + 28) = v44;
          goto LABEL_35;
        }
        v41 = WdLogNewEntry5_WdWarning(0LL, v39, v40);
        *(_QWORD *)(v41 + 24) = *(_QWORD *)v3;
        *(_QWORD *)(v41 + 32) = (int)v49;
        WdLogEvent5_WdWarning(v41);
        MonitorLogBadEDID(*(_QWORD *)v3, v49);
      }
      operator delete(v34);
LABEL_35:
      if ( ++v2 >= *v6 )
        goto LABEL_36;
    }
  }
  v25 = WdLogNewEntry5_WdError(v24, v23);
  *(_QWORD *)(v25 + 24) = v14;
  WdLogEvent5_WdError(v25);
LABEL_39:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v14;
}
