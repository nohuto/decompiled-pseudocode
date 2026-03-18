/*
 * XREFs of BmlFillPreferredMonitorMode @ 0x1C01D0BD0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C01B1560 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01B26AC (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     MonitorGetNextMonitorSourceMode @ 0x1C01D0DAC (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C01D0EB0 (BmlGetMonitorModePreference.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C01D0FA0 (BmlIsLowResAnalogTvOutput.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C01D0FC4 (BmlIsEDIDCapableOutputTechonology.c)
 *     MonitorGetNextFrequencyRange @ 0x1C01D1004 (MonitorGetNextFrequencyRange.c)
 */

__int64 __fastcall BmlFillPreferredMonitorMode(__int64 a1, unsigned int a2, __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  _DWORD *v7; // rdx
  int v8; // r12d
  __int64 v9; // rcx
  unsigned int v10; // ebx
  int NextFrequencyRange; // eax
  int v12; // esi
  unsigned __int64 v13; // rbx
  __int64 v14; // r10
  __int64 v15; // rcx
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  unsigned int v18; // r11d
  unsigned int v19; // r10d
  __int64 v20; // rdx
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-30h]
  _DWORD *v26; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-20h] BYREF
  __int64 v28[3]; // [rsp+40h] [rbp-18h] BYREF
  char v31; // [rsp+B0h] [rbp+58h]
  __int64 v32; // [rsp+B0h] [rbp+58h]
  int v33; // [rsp+B8h] [rbp+60h]

  v3 = 0LL;
  v5 = 0;
  v27 = 0LL;
  v6 = 0;
  v25 = 0LL;
  if ( !*(_QWORD *)(a3 + 112) )
    return 3223192376LL;
  v7 = 0LL;
  v33 = 0;
  v26 = 0LL;
  v8 = -1;
  v31 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a3 + 112);
    v10 = v5;
    if ( !v9 )
      break;
    NextFrequencyRange = MonitorGetNextFrequencyRange(v9, v7, &v26);
    v12 = NextFrequencyRange;
    if ( NextFrequencyRange == 1075708748 )
    {
      v13 = v25;
      v14 = 0LL;
      v28[0] = 0LL;
      v24 = 0;
      while ( 1 )
      {
        v15 = *(_QWORD *)(a3 + 112);
        LODWORD(v26) = v6;
        LODWORD(v25) = v5;
        if ( !v15 )
          goto LABEL_53;
        NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v15, v14, v28, &v24);
        v12 = NextMonitorSourceMode;
        if ( NextMonitorSourceMode == 1075708748 )
        {
          if ( v33 == 1 && (v31 || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && v8 >= 8) )
          {
            v8 = 11;
            v27 = v13;
          }
          if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
          {
            if ( v5 < 0x400 )
              v5 = 1024;
            if ( v6 < 0x300 )
              v6 = 768;
            v22 = BmlCompareModeExtents((int *)&qword_1C0094070, &v27);
            v23 = v27;
            if ( v22 == 1 )
              v23 = 0x30000000400LL;
            v27 = v23;
          }
          if ( v8 < 8 )
          {
            if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
            {
              v19 = 800;
              v18 = 600;
            }
            v27 = __PAIR64__(v18, v19);
          }
          else
          {
            v18 = HIDWORD(v27);
            v19 = v27;
          }
          if ( v5 < v19 )
            v5 = v19;
          LODWORD(v32) = v5;
          if ( v6 < v18 )
            v6 = v18;
          v20 = 120LL * a2;
          HIDWORD(v32) = v6;
          *(_QWORD *)(v20 + a1 + 52) = v27;
          *(_QWORD *)(v20 + a1 + 44) = v32;
          return 1075708748LL;
        }
        if ( NextMonitorSourceMode < 0 )
        {
          v3 = (_DWORD *)v28[0];
          goto LABEL_54;
        }
        if ( *(_DWORD *)(v28[0] + 88) == 1 && *(_DWORD *)(v28[0] + 84) == 5 )
        {
          ++v33;
          v13 = *(_QWORD *)(v28[0] + 20);
        }
        MonitorModePreference = BmlGetMonitorModePreference(v28[0], v24, a3);
        if ( MonitorModePreference == 11 )
        {
          v31 = 1;
          MonitorModePreference = 0;
        }
        if ( MonitorModePreference > v8 )
        {
          v8 = MonitorModePreference;
          v27 = *(_QWORD *)(v14 + 20);
        }
        v5 = *(_DWORD *)(v14 + 20);
        v6 = *(_DWORD *)(v14 + 24);
        if ( (unsigned int)v25 >= v5 )
          v5 = v25;
        if ( (unsigned int)v26 >= v6 )
          v6 = (unsigned int)v26;
      }
    }
    if ( NextFrequencyRange < 0 )
    {
      v3 = v26;
      goto LABEL_54;
    }
    v7 = v26;
    if ( v26[9] == 1 )
    {
      v5 = v26[10];
      if ( v10 >= v5 )
        v5 = v10;
      if ( v6 < v26[11] )
        v6 = v26[11];
    }
  }
LABEL_53:
  v12 = -1071774920;
LABEL_54:
  WdLogSingleEntry3(2LL, v3, *(_QWORD *)(a3 + 112), v12);
  return (unsigned int)v12;
}
