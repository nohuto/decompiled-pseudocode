/*
 * XREFs of ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C01678A4
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0163448 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C01677DC (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0187A44 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     MonitorSetAdvancedColorParams @ 0x1C02F32B8 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02F381C (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02F3B8C (MonitorSetSDRWhiteLevel.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F9AFC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C0058E80 (DpiSetTargetAdjustedColorimetry2.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x1C0197BE8 (DpiSetTargetAdjustedColorimetry.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C02F8CC0 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C02F8D10 (-_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02FA130 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::_SendAdjustedHDRParamsToDriver(DXGMONITOR *this, char a2)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  int v6; // r10d
  int v7; // r11d
  int v8; // r15d
  int v9; // r12d
  int v10; // r13d
  unsigned int v11; // esi
  unsigned int FinalMaxLuminanceValueFromRaw; // edi
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  DXGMONITOR *v18; // rcx
  DXGMONITOR *v19; // rcx
  unsigned int FinalMinLuminanceValueFromRaw; // eax
  __int64 v21; // rcx
  int v22; // edx
  int v23; // [rsp+20h] [rbp-50h]
  int v24; // [rsp+24h] [rbp-4Ch]
  int v25; // [rsp+28h] [rbp-48h]
  int v26; // [rsp+30h] [rbp-40h] BYREF
  int v27; // [rsp+34h] [rbp-3Ch]
  int v28; // [rsp+38h] [rbp-38h]
  int v29; // [rsp+3Ch] [rbp-34h]
  int v30; // [rsp+40h] [rbp-30h]
  int v31; // [rsp+44h] [rbp-2Ch]
  int v32; // [rsp+48h] [rbp-28h]
  int v33; // [rsp+4Ch] [rbp-24h]
  unsigned int v34; // [rsp+50h] [rbp-20h]
  unsigned int v35; // [rsp+54h] [rbp-1Ch]
  unsigned int v36; // [rsp+58h] [rbp-18h]
  __int64 v37; // [rsp+5Ch] [rbp-14h]
  int v38; // [rsp+B8h] [rbp+48h]
  int v39; // [rsp+C8h] [rbp+58h]

  if ( !a2 || *(int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 2596LL) >= 2500 )
  {
    v3 = *((_DWORD *)this + 160);
    v4 = *((_DWORD *)this + 161);
    v5 = *((_DWORD *)this + 162);
    v6 = *((_DWORD *)this + 163);
    v7 = *((_DWORD *)this + 164);
    v8 = *((_DWORD *)this + 157);
    v9 = *((_DWORD *)this + 158);
    v10 = *((_DWORD *)this + 159);
    v38 = v3;
    v39 = v4;
    v23 = v5;
    v24 = v6;
    v25 = v7;
    if ( *((_BYTE *)this + 692) )
    {
      FinalMaxLuminanceValueFromRaw = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(this, *((_DWORD *)this + 167));
      v11 = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v18, *((_DWORD *)this + 168));
      FinalMinLuminanceValueFromRaw = DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(
                                        v19,
                                        *((_DWORD *)this + 166),
                                        FinalMaxLuminanceValueFromRaw);
      v3 = v38;
      v13 = FinalMinLuminanceValueFromRaw;
      v4 = v39;
    }
    else
    {
      v11 = *((_DWORD *)this + 171);
      FinalMaxLuminanceValueFromRaw = *((_DWORD *)this + 170);
      v13 = *((_DWORD *)this + 169);
    }
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    if ( *(int *)(v14 + 2596) >= 2500 )
    {
      v21 = *(_QWORD *)(v14 + 216);
      v37 = 0LL;
      v30 = v4;
      v29 = v3;
      v31 = v5;
      v26 = v8;
      v22 = *((_DWORD *)this + 11);
      v27 = v9;
      v28 = v10;
      v32 = v6;
      v33 = v7;
      v34 = v13;
      v35 = FinalMaxLuminanceValueFromRaw;
      v36 = v11;
      v17 = DpiSetTargetAdjustedColorimetry2(v21, v22, (__int64)&v26);
      if ( v17 != -1073741637 )
      {
LABEL_9:
        if ( v17 < 0 )
        {
          *(_QWORD *)((char *)this + 620) = 0LL;
          *(_OWORD *)((char *)this + 600) = 0LL;
          *((_DWORD *)this + 154) = 0;
          DXGMONITOR::_SetColorPrimariesToBT709(this);
          *((_BYTE *)this + 700) = 0;
          *((_DWORD *)this + 167) = 2700000;
          *((_DWORD *)this + 168) = 2700000;
          *((_DWORD *)this + 170) = 2700000;
          *((_DWORD *)this + 171) = 2700000;
          *((_DWORD *)this + 174) = 3;
          *((_DWORD *)this + 165) = 3;
          *((_DWORD *)this + 166) = 5000;
          *((_DWORD *)this + 169) = 5000;
          *((_BYTE *)this + 692) = 0;
        }
        return;
      }
      v29 = v38;
      v30 = v39;
      v31 = v23;
      v32 = v24;
      v33 = v25;
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 216LL);
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 216);
      v29 = v3;
      v30 = v4;
      v31 = v5;
      v32 = v6;
      v33 = v7;
    }
    v16 = *((unsigned int *)this + 11);
    v35 = FinalMaxLuminanceValueFromRaw;
    v37 = 0LL;
    v36 = v11;
    v34 = v13;
    v28 = v10;
    v27 = v9;
    v26 = v8;
    v17 = DpiSetTargetAdjustedColorimetry(v15, v16, &v26);
    goto LABEL_9;
  }
}
