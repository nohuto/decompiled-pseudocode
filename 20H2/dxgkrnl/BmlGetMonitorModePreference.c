/*
 * XREFs of BmlGetMonitorModePreference @ 0x1C0137AFC
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C0137668 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C013784C (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     ?DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z @ 0x1C001999C (-DivideAndRound@DMMVIDEOSIGNALMODE@@SA_K_K0@Z.c)
 *     BmlGetMonitorModeVSyncPreference @ 0x1C0137B98 (BmlGetMonitorModeVSyncPreference.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C0137D10 (BmlIsLowResAnalogTvOutput.c)
 */

__int64 __fastcall BmlGetMonitorModePreference(unsigned int *a1, int a2, __int64 a3)
{
  unsigned int *v3; // r9
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v10; // edx
  int v11; // edx
  int v12; // edx
  __int64 v13; // r9
  int v14; // edx
  int v15; // edx
  int v16; // edx

  v3 = a1;
  v4 = a1[21] - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( !v7 )
          return 5LL;
        if ( v7 == 1 )
        {
          v8 = *(_DWORD *)(a3 + 80);
          if ( (v8 == 0x80000000
             || v8 == -1
             || v8 > 0 && (v8 <= 3 || v8 == 6 || v8 > 7 && (v8 <= 9 || v8 > 10 && v8 <= 14)))
            && v3[22] == 1 )
          {
            return 11LL;
          }
          if ( v8 == -1 || v8 > 0 && (v8 <= 3 || v8 == 14) )
          {
            if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(v3[7], v3[8]) != 60 )
              return 7LL;
            goto LABEL_41;
          }
          return BmlGetMonitorModeVSyncPreference(v3);
        }
      }
      else
      {
        v14 = a2 - 1;
        if ( !v14 )
          return 9LL;
        v15 = v14 - 1;
        if ( !v15 )
          return 9LL;
        v16 = v15 - 1;
        if ( !v16 )
          return 9LL;
        if ( v16 == 1 )
          return 10LL;
      }
    }
    else
    {
      v10 = a2 - 1;
      if ( !v10 )
        return 6LL;
      v11 = v10 - 1;
      if ( !v11 )
        return 6LL;
      v12 = v11 - 1;
      if ( !v12 )
        return 6LL;
      if ( v12 == 1 )
        return 8LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !(unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
    return BmlGetMonitorModeVSyncPreference(v3);
  if ( (unsigned int)DMMVIDEOSIGNALMODE::DivideAndRound(v3[7], v3[8]) != 60 )
    return 0LL;
LABEL_41:
  if ( *(_DWORD *)(v13 + 20) == 800 && *(_DWORD *)(v13 + 24) == 600 )
    return 4LL;
  else
    return 3LL;
}
