/*
 * XREFs of ?LogDisplayBlackBoxData@DISPLAYSTATECHECKER@@AEAAXPEAI@Z @ 0x1C02BB460
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BB3A8 (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C004D060 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetDisplayBlackboxRecorder@DisplayDiagnostics@@QEAAPEAVDisplayBlackboxRecorder@@XZ @ 0x1C004FD10 (-GetDisplayBlackboxRecorder@DisplayDiagnostics@@QEAAPEAVDisplayBlackboxRecorder@@XZ.c)
 *     ?GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ @ 0x1C02BAF5C (-GetTotalNumOfVidpnSourcesAcrossAdapters@DISPLAYSTATECHECKER@@QEAAIXZ.c)
 *     ?Reserve@DXGBLACKBOX@@QEAAPEAEI@Z @ 0x1C02BBCAC (-Reserve@DXGBLACKBOX@@QEAAPEAEI@Z.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayBlackBoxData(DISPLAYSTATECHECKER *this, unsigned int *a2)
{
  struct DXGGLOBAL *Global; // rax
  struct DisplayBlackboxRecorder *DisplayBlackboxRecorder; // rsi
  __int64 v6; // rax
  unsigned int TotalNumOfVidpnSourcesAcrossAdapters; // r12d
  unsigned __int8 *v8; // rax
  unsigned __int8 *v9; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // edi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  struct DISPLAYDIAGNOSTICADAPTERDATA *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int16 *v18; // rax
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+48h] [rbp-20h]
  int v21; // [rsp+4Ch] [rbp-1Ch]

  *a2 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  DisplayBlackboxRecorder = DisplayDiagnostics::GetDisplayBlackboxRecorder((struct DXGGLOBAL *)((char *)Global + 304432));
  v6 = *((_QWORD *)DisplayBlackboxRecorder + 6);
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
    for ( *((_DWORD *)v8 + 4) = *((_DWORD *)this + 4); v11 < *((_DWORD *)this + 3514); ++v11 )
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v11);
      v13 = DisplayAdapterDiagData;
      if ( DisplayAdapterDiagData )
      {
        v14 = 0LL;
        if ( *((_DWORD *)DisplayAdapterDiagData + 240) )
        {
          do
          {
            if ( (unsigned int)v14 >= 4 )
              v15 = 0LL;
            else
              v15 = (__int64)v13 + 224 * (unsigned int)v14 + 64;
            if ( v15 )
            {
              if ( v10 >= TotalNumOfVidpnSourcesAcrossAdapters )
              {
                v17 = WdLogNewEntry5_WdError(v15, v14);
                *(_QWORD *)(v17 + 24) = 298LL;
                WdLogEvent5_WdError(v17);
                break;
              }
              v16 = 32LL * v10++;
              *(_OWORD *)&v9[v16 + 20] = *(_OWORD *)(v15 + 16);
              *(_OWORD *)&v9[v16 + 36] = *(_OWORD *)(v15 + 32);
            }
            v14 = (unsigned int)(v14 + 1);
          }
          while ( (unsigned int)v14 < *((_DWORD *)v13 + 240) );
        }
      }
    }
    v18 = (unsigned __int16 *)*((_QWORD *)DisplayBlackboxRecorder + 6);
    if ( *((_DWORD *)v18 + 1) != 8 )
    {
      InputBuffer[2] = 0LL;
      v21 = 0;
      v20 = 12;
      InputBuffer[0] = v18;
      InputBuffer[1] = *((unsigned int *)v18 + 1);
      ZwPowerInformation(TraceApplicationPowerMessage|0x40, InputBuffer, 0x20u, 0LL, 0);
      v18 = (unsigned __int16 *)*((_QWORD *)DisplayBlackboxRecorder + 6);
    }
    *a2 = *v18;
  }
}
