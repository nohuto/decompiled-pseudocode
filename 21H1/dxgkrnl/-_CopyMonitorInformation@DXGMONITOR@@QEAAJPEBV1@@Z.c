/*
 * XREFs of ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02F5108
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0167C8C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C016C5A4 (MonitorNotifyDeviceNodeReady.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02EE1E4 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0168BA4 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C01696C8 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C02F0C38 (-_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02F4FB4 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_CopyMonitorInformation(DXGMONITOR *this, const struct DXGMONITOR *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  const struct DXGMONITOR *i; // rax
  char *v15; // rax
  __int64 v16; // rdx
  void **v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  DXGMONITOR *v20; // rcx
  DXGMONITOR **v21; // r8
  char *v22; // rdi
  const struct DXGMONITOR *j; // rax
  __int64 v24; // rax
  _OWORD *v26; // rax
  DXGMONITOR **v27; // rdx
  DXGMONITOR *v28; // rax
  char *v29; // rdi
  PVOID v30; // rax
  void *v31; // rcx

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_DWORD *)this + 108) == 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v5);
  }
  DXGMONITOR::_CleanupMonitorDescriptors(this, (__int64)a2);
  DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v6, v7);
  DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this, v8);
  DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(this, v9);
  if ( *((_DWORD *)this + 52) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 64) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v13);
  }
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ *((_DWORD *)a2 + 10)) & 8;
  *((_DWORD *)this + 30) = *((_DWORD *)a2 + 30);
  for ( i = (const struct DXGMONITOR *)*((_QWORD *)a2 + 27);
        i != (const struct DXGMONITOR *)((char *)a2 + 216);
        i = (const struct DXGMONITOR *)*((_QWORD *)v22 + 12) )
  {
    v22 = (char *)i - 96;
    if ( !i )
      v22 = 0LL;
    if ( !v22 )
      break;
    v15 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
    if ( !v15 )
      goto LABEL_20;
    v20 = (DXGMONITOR *)(v15 + 96);
    *(_OWORD *)v15 = *(_OWORD *)v22;
    *((_OWORD *)v15 + 1) = *((_OWORD *)v22 + 1);
    *((_OWORD *)v15 + 2) = *((_OWORD *)v22 + 2);
    *((_OWORD *)v15 + 3) = *((_OWORD *)v22 + 3);
    *((_OWORD *)v15 + 4) = *((_OWORD *)v22 + 4);
    *((_OWORD *)v15 + 5) = *((_OWORD *)v22 + 5);
    *((_OWORD *)v15 + 6) = *((_OWORD *)v22 + 6);
    *((_QWORD *)v15 + 14) = *((_QWORD *)v22 + 14);
    v21 = (DXGMONITOR **)*((_QWORD *)this + 28);
    if ( *v21 != (DXGMONITOR *)((char *)this + 216) )
LABEL_33:
      __fastfail(3u);
    *(_QWORD *)v20 = (char *)this + 216;
    *((_QWORD *)v15 + 13) = v21;
    *v21 = v20;
    *((_QWORD *)this + 28) = v20;
    ++*((_DWORD *)this + 52);
    if ( v22 == *((char **)a2 + 29) )
      *((_QWORD *)this + 29) = v15;
  }
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  for ( j = (const struct DXGMONITOR *)*((_QWORD *)a2 + 33);
        j != (const struct DXGMONITOR *)((char *)a2 + 264);
        j = (const struct DXGMONITOR *)*((_QWORD *)v29 + 6) )
  {
    v29 = (char *)j - 48;
    if ( !j )
      v29 = 0LL;
    if ( !v29 )
      break;
    v26 = operator new[](0x40uLL, 0x4D677844u, PagedPool);
    if ( !v26 )
      goto LABEL_20;
    *v26 = *(_OWORD *)v29;
    v26[1] = *((_OWORD *)v29 + 1);
    v26[2] = *((_OWORD *)v29 + 2);
    v26[3] = *((_OWORD *)v29 + 3);
    v27 = (DXGMONITOR **)*((_QWORD *)this + 34);
    v28 = (DXGMONITOR *)(v26 + 3);
    if ( *v27 != (DXGMONITOR *)((char *)this + 264) )
      goto LABEL_33;
    *(_QWORD *)v28 = (char *)this + 264;
    *((_QWORD *)v28 + 1) = v27;
    *v27 = v28;
    *((_QWORD *)this + 34) = v28;
    ++*((_DWORD *)this + 64);
  }
  if ( *((_QWORD *)a2 + 18) )
  {
    v30 = operator new[](8uLL, 0x4D677844u, PagedPool);
    *((_QWORD *)this + 17) = v30;
    if ( !v30
      || (**((_QWORD **)this + 17) = operator new[](0x9FuLL, 0x4D677844u, PagedPool),
          v17 = (void **)*((_QWORD *)this + 17),
          !*v17) )
    {
LABEL_20:
      v24 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
      WdLogEvent5_WdLowResource(v24);
      return 3221225495LL;
    }
    *((_DWORD *)this + 32) = 1;
    v31 = *v17;
    *((_QWORD *)this + 18) = v31;
    memmove(v31, *((const void **)a2 + 18), 0x9FuLL);
  }
  return 0LL;
}
