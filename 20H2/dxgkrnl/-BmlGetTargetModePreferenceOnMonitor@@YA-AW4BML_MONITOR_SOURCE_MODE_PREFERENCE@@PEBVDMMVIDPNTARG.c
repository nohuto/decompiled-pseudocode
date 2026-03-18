/*
 * XREFs of ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C013784C
 * Callers:
 *     BmlCompareTargetModesWithMonitor @ 0x1C013B040 (BmlCompareTargetModesWithMonitor.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C000B31C (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C0134F74 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     MonitorGetNextMonitorSourceMode @ 0x1C01379E0 (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C0137AFC (BmlGetMonitorModePreference.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C0138060 (BmlIsEDIDCapableOutputTechonology.c)
 */

__int64 __fastcall BmlGetTargetModePreferenceOnMonitor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdi
  int v7; // ebp
  int v8; // r12d
  char v9; // r13
  __int64 v10; // rcx
  int NextMonitorSourceMode; // eax
  int v12; // edi
  int v13; // r10d
  int MonitorModePreference; // r14d
  _QWORD *v16; // rax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+28h] [rbp-40h] BYREF
  char v19; // [rsp+78h] [rbp+10h]
  char v20; // [rsp+80h] [rbp+18h]
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  v19 = a2;
  v3 = 0LL;
  if ( !*(_QWORD *)(a3 + 112) )
    return 0xFFFFFFFFLL;
  v6 = 0LL;
  v17 = 0LL;
  v21 = 0;
  v7 = -1;
  v8 = 0;
  v18[0] = 0LL;
  v20 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_QWORD *)(a3 + 112);
    if ( !v10 )
    {
      v12 = -1071774920;
      goto LABEL_32;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v10, v6, &v17, &v21);
    v12 = NextMonitorSourceMode;
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v3 = v17;
LABEL_32:
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v10, a2);
      v16[3] = v3;
      v16[4] = *(_QWORD *)(a3 + 112);
      v16[5] = v12;
      WdLogEvent5_WdError(v16);
      return 0xFFFFFFFFLL;
    }
    v6 = v17;
    if ( *(_DWORD *)(v17 + 88) == 1 && *(_DWORD *)(v17 + 84) == 5 )
      ++v8;
    MonitorModePreference = BmlGetMonitorModePreference(v17, v21, a3);
    if ( MonitorModePreference == 8 )
      v9 = v13;
    if ( *(_DWORD *)(v6 + 20) == *(_DWORD *)(a1 + 84) && *(_DWORD *)(v6 + 24) == *(_DWORD *)(a1 + 88) )
    {
      if ( v19 )
      {
LABEL_14:
        if ( *(_DWORD *)(v6 + 88) == v13 && *(_DWORD *)(v6 + 84) == 5 )
          v18[0] = *(_QWORD *)(v6 + 20);
        if ( MonitorModePreference == 11 )
        {
          v20 = v13;
          MonitorModePreference = 0;
        }
        if ( MonitorModePreference > v7 )
          v7 = MonitorModePreference;
      }
      else if ( DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a1 + 72),
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v6 + 8),
                  0) )
      {
        v13 = 1;
        goto LABEL_14;
      }
    }
  }
  if ( v8 == 1
    && (v20
     || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3)
     && v9
     && !(unsigned int)BmlCompareModeExtents((int *)(a1 + 84), v18)) )
  {
    return 11;
  }
  return (unsigned int)v7;
}
