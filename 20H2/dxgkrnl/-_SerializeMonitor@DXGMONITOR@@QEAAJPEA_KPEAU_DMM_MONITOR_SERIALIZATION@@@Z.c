/*
 * XREFs of ?_SerializeMonitor@DXGMONITOR@@QEAAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x1C02F8088
 * Callers:
 *     MonitorSerializeMonitor @ 0x1C02F3110 (MonitorSerializeMonitor.c)
 * Callees:
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0187534 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_SerializeMonitor(
        DXGMONITOR **this,
        unsigned __int64 *a2,
        struct _DMM_MONITOR_SERIALIZATION *a3)
{
  unsigned __int64 *v4; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  DXGMONITOR *v14; // rax
  int v15; // eax
  unsigned int v16; // r8d
  DXGMONITOR *v17; // rax
  DXGMONITOR *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned int v21; // r8d
  unsigned __int8 *v22; // r9
  DXGMONITOR *v23; // rax
  DXGMONITOR *v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  unsigned int v27; // r12d
  char *v28; // r15
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rbx

  v4 = a2;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_DWORD *)this + 52);
  v8 = 112LL;
  if ( v7 )
    v8 = 104LL * (unsigned int)(v7 - 1) + 112;
  v9 = *((_DWORD *)this + 64);
  v10 = 56LL;
  if ( v9 )
    v10 = 48LL * (unsigned int)(v9 - 1) + 56;
  v11 = *((_DWORD *)this + 32);
  if ( v11 )
    v12 = 140LL * (unsigned int)(v11 - 1) + 184;
  else
    v12 = 184LL;
  v13 = v8 + v12 + v10;
  if ( a3 && v13 <= *v4 )
  {
    *(_DWORD *)a3 = v13;
    *((_DWORD *)a3 + 1) = *((_DWORD *)this + 11);
    *((_DWORD *)a3 + 2) = *((_DWORD *)this + 31);
    *((_BYTE *)a3 + 12) = *((_DWORD *)this + 108) != 1;
    *((_BYTE *)a3 + 13) = ((_DWORD)this[5] & 8) != 0;
    *((_DWORD *)a3 + 4) = *((_DWORD *)this + 30);
    v14 = this[7];
    if ( v14 )
      v15 = *(_DWORD *)(*((_QWORD *)v14 + 8) + 284LL);
    else
      v15 = 0;
    *((_DWORD *)a3 + 5) = v15;
    v16 = 0;
    *((_DWORD *)a3 + 9) = *((_DWORD *)this + 108);
    *((_DWORD *)a3 + 10) = *((_DWORD *)this + 52);
    v17 = this[27];
    if ( v17 != (DXGMONITOR *)(this + 27) )
    {
      a2 = (unsigned __int64 *)((char *)v17 - 96);
      if ( !v17 )
        a2 = 0LL;
      while ( a2 )
      {
        v12 = 104LL * v16;
        *(_DWORD *)((char *)a3 + v12 + 144) = *((_DWORD *)a2 + 28);
        *(_OWORD *)((char *)a3 + v12 + 48) = *(_OWORD *)a2;
        *(_OWORD *)((char *)a3 + v12 + 64) = *((_OWORD *)a2 + 1);
        *(_OWORD *)((char *)a3 + v12 + 80) = *((_OWORD *)a2 + 2);
        *(_OWORD *)((char *)a3 + v12 + 96) = *((_OWORD *)a2 + 3);
        *(_OWORD *)((char *)a3 + v12 + 112) = *((_OWORD *)a2 + 4);
        *(_OWORD *)((char *)a3 + v12 + 128) = *((_OWORD *)a2 + 5);
        v18 = (DXGMONITOR *)a2[12];
        if ( v18 == (DXGMONITOR *)(this + 27) )
        {
          a2 = 0LL;
        }
        else
        {
          a2 = (unsigned __int64 *)((char *)v18 - 96);
          if ( !v18 )
            a2 = 0LL;
        }
        ++v16;
      }
    }
    *((_DWORD *)a3 + 6) = 40;
    if ( v16 != *((_DWORD *)a3 + 10) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v12, a2);
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = v8 + 40;
    v21 = 0;
    v22 = (unsigned __int8 *)a3 + v20;
    *((_BYTE *)a3 + v20) = *((_BYTE *)this + 256);
    v23 = this[33];
    if ( v23 != (DXGMONITOR *)(this + 33) )
    {
      a2 = (unsigned __int64 *)((char *)v23 - 48);
      if ( !v23 )
        a2 = 0LL;
      while ( a2 )
      {
        v12 = 6LL * v21;
        *(_OWORD *)&v22[8 * v12 + 8] = *(_OWORD *)a2;
        *(_OWORD *)&v22[8 * v12 + 24] = *((_OWORD *)a2 + 1);
        *(_OWORD *)&v22[8 * v12 + 40] = *((_OWORD *)a2 + 2);
        v24 = (DXGMONITOR *)a2[6];
        if ( v24 == (DXGMONITOR *)(this + 33) )
        {
          a2 = 0LL;
        }
        else
        {
          a2 = (unsigned __int64 *)((char *)v24 - 48);
          if ( !v24 )
            a2 = 0LL;
        }
        ++v21;
      }
    }
    *((_DWORD *)a3 + 7) = v20;
    if ( v21 != *v22 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v12, a2);
      WdLogEvent5_WdAssertion(v25);
    }
    v26 = v10 + v20;
    v27 = 0;
    v28 = (char *)a3 + v26;
    for ( *((_BYTE *)a3 + v26) = *((_BYTE *)this + 128);
          v27 < *((_DWORD *)this + 32);
          *(_OWORD *)&v28[v31 + 128] = *(_OWORD *)(v12 + 136) )
    {
      v29 = v27;
      if ( !*((_QWORD *)this[17] + v27) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v12, a2);
        WdLogEvent5_WdAssertion(v30);
      }
      v31 = 140LL * v27;
      *(_DWORD *)&v28[v31 + 4] = v27;
      *(_DWORD *)&v28[v31 + 8] = *(_DWORD *)(*((_QWORD *)this[17] + v27) + 12LL);
      ConvertMonitorCapablitiesOrigin(*(unsigned int *)(*((_QWORD *)this[17] + v27++) + 8LL), &v28[v31 + 12]);
      v12 = *((_QWORD *)this[17] + v29);
      *(_OWORD *)&v28[v31 + 16] = *(_OWORD *)(v12 + 24);
      *(_OWORD *)&v28[v31 + 32] = *(_OWORD *)(v12 + 40);
      *(_OWORD *)&v28[v31 + 48] = *(_OWORD *)(v12 + 56);
      *(_OWORD *)&v28[v31 + 64] = *(_OWORD *)(v12 + 72);
      *(_OWORD *)&v28[v31 + 80] = *(_OWORD *)(v12 + 88);
      *(_OWORD *)&v28[v31 + 96] = *(_OWORD *)(v12 + 104);
      *(_OWORD *)&v28[v31 + 112] = *(_OWORD *)(v12 + 120);
    }
    *((_DWORD *)a3 + 8) = v26;
    return 0LL;
  }
  else
  {
    *v4 = v13;
    return 3221225507LL;
  }
}
