/*
 * XREFs of ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02EF870
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02EF7B8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004D190 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDisplayBlackboxRecorder@DisplayDiagnostics@@QEAAPEAVDisplayBlackboxRecorder@@XZ @ 0x1C004ECFC (-GetDisplayBlackboxRecorder@DisplayDiagnostics@@QEAAPEAVDisplayBlackboxRecorder@@XZ.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1C02EF2B0 (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1C02FEE88 (-Reserve@DXGBLACKBOX@@QEAAPEAEI@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackBoxData(DISPLAYSTATECHECKER *this, unsigned int *a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DisplayBlackboxRecorder *DisplayBlackboxRecorder; // rdi
  __int64 v6; // rax
  unsigned int TotalNumOfVidpnSourcesAcrossAdapters; // r12d
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // esi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  struct DISPLAYDIAGNOSTICADAPTERDATA *v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 *v17; // rax
  _QWORD InputBuffer[3]; // [rsp+50h] [rbp-38h] BYREF
  int v19; // [rsp+68h] [rbp-20h]
  int v20; // [rsp+6Ch] [rbp-1Ch]

  *a2 = 0;
  Global = DXGGLOBAL_GetGlobal();
  DisplayBlackboxRecorder = DisplayDiagnostics::GetDisplayBlackboxRecorder((struct DXGGLOBAL *)((char *)Global + 304640));
  v6 = *((_QWORD *)DisplayBlackboxRecorder + 7);
  if ( v6 )
    *(_DWORD *)(v6 + 4) = 8;
  TotalNumOfVidpnSourcesAcrossAdapters = DISPLAYSTATECHECKER::GetTotalNumOfVidpnSourcesAcrossAdapters(this);
  v8 = DXGBLACKBOX::Reserve(DisplayBlackboxRecorder, 32 * TotalNumOfVidpnSourcesAcrossAdapters + 20);
  v9 = v8;
  if ( v8 )
  {
    v10 = 0;
    v11 = 0;
    *(_OWORD *)v8 = *(_OWORD *)this;
    for ( *((_DWORD *)v8 + 4) = *((_DWORD *)this + 4); v11 < *((_DWORD *)this + 3522); ++v11 )
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v11);
      v13 = DisplayAdapterDiagData;
      if ( DisplayAdapterDiagData )
      {
        v14 = 0;
        if ( *((_DWORD *)DisplayAdapterDiagData + 240) )
        {
          do
          {
            if ( v14 < 4 )
            {
              v15 = (__int64)v13 + 224 * v14 + 64;
              if ( v15 )
              {
                if ( v10 >= TotalNumOfVidpnSourcesAcrossAdapters )
                {
                  WdLogSingleEntry1(2LL, 323LL);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"GlobalSourceIndex should never exceed the TotalNumOfVidpnSource",
                    323LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  break;
                }
                v16 = 32LL * v10++;
                *(_OWORD *)&v9[v16 + 20] = *(_OWORD *)(v15 + 16);
                *(_OWORD *)&v9[v16 + 36] = *(_OWORD *)(v15 + 32);
              }
            }
            ++v14;
          }
          while ( v14 < *((_DWORD *)v13 + 240) );
        }
      }
    }
    v17 = (unsigned __int16 *)*((_QWORD *)DisplayBlackboxRecorder + 7);
    if ( *((_DWORD *)v17 + 1) != 8 )
    {
      InputBuffer[2] = 0LL;
      v20 = 0;
      v19 = 12;
      InputBuffer[0] = v17;
      InputBuffer[1] = *((unsigned int *)v17 + 1);
      ZwPowerInformation(TraceApplicationPowerMessage|0x40, InputBuffer, 0x20u, 0LL, 0);
      v17 = (unsigned __int16 *)*((_QWORD *)DisplayBlackboxRecorder + 7);
    }
    *a2 = *v17;
  }
}
