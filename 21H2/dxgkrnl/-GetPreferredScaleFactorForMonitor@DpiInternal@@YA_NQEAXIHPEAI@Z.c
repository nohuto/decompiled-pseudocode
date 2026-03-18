/*
 * XREFs of ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x1C01D58F0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     MonitorGetPreferredScaleFactor @ 0x1C01D59A4 (MonitorGetPreferredScaleFactor.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C01D5A2C (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

char __fastcall DpiInternal::GetPreferredScaleFactorForMonitor(DpiInternal *this, void *const a2, int a3, int *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int PreferredScaleFactor; // eax
  int v11; // ebx
  _QWORD *v12; // rax
  int v14; // eax
  unsigned __int8 v15[4]; // [rsp+20h] [rbp-18h] BYREF
  int v16[5]; // [rsp+24h] [rbp-14h] BYREF

  v16[0] = 0;
  v5 = (unsigned int)a2;
  v15[0] = 0;
  IsTargetEmergencySimulatedMonitor(this, (unsigned int)a2, v15);
  if ( v15[0] )
  {
    v14 = dword_1C01303E0;
    if ( !dword_1C01303E0 )
    {
      v11 = -1073741823;
      goto LABEL_6;
    }
  }
  else
  {
    PreferredScaleFactor = MonitorGetPreferredScaleFactor(this, (unsigned int)v5, v16);
    v11 = PreferredScaleFactor;
    if ( a3 )
    {
      if ( PreferredScaleFactor >= 0 )
      {
        v14 = v16[0];
        dword_1C01303E0 = v16[0];
        goto LABEL_9;
      }
      dword_1C01303E0 = 0;
    }
    if ( PreferredScaleFactor < 0 )
    {
LABEL_6:
      v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
      v12[3] = this;
      v12[4] = v5;
      v12[5] = v11;
      *a4 = 0;
      return 0;
    }
    v14 = v16[0];
  }
LABEL_9:
  *a4 = v14;
  return 1;
}
