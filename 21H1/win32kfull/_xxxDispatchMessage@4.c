/*
 * XREFs of _xxxDispatchMessage@4 @ 0x45B62
 * Callers:
 *     _NtUserDispatchMessage@4 @ 0x45A6E (_NtUserDispatchMessage@4.c)
 *     ?xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0xA18FA (-xxxHandleDesktopMessages@@YGHPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290 (_xxxRestoreCsrssThreadDesktop@8.c)
 *     _xxxSetCsrssThreadDesktop@8 @ 0xC9346 (_xxxSetCsrssThreadDesktop@8.c)
 *     _xxxDCETrackCaptionButton@8 @ 0x151F8A (_xxxDCETrackCaptionButton@8.c)
 *     _xxxOldNextWindow@4 @ 0x15D8AF (_xxxOldNextWindow@4.c)
 *     _xxxMoveSize@12 @ 0x177959 (_xxxMoveSize@12.c)
 *     _xxxMNLoop@16 @ 0x195C44 (_xxxMNLoop@16.c)
 *     ?xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z @ 0x1A31F2 (-xxxSBTrackLoop@@YGXPAUtagWND@@JPAUtagSBCALC@@@Z.c)
 *     _xxxTrackCaptionButton@8 @ 0x1A558D (_xxxTrackCaptionButton@8.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _SfnOUTLPCOMBOBOXINFO@32 @ 0x11346 (_SfnOUTLPCOMBOBOXINFO@32.c)
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
 *     _xxxDesktopWndProc@16 @ 0x16118 (_xxxDesktopWndProc@16.c)
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _NtUserfnNCDESTROY@28 @ 0x3C762 (_NtUserfnNCDESTROY@28.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _SfnINOUTSTYLECHANGE@32 @ 0x40A10 (_SfnINOUTSTYLECHANGE@32.c)
 *     _SfnDWORD@32 @ 0x40E50 (_SfnDWORD@32.c)
 *     _SfnINOUTLPWINDOWPOS@32 @ 0x411EA (_SfnINOUTLPWINDOWPOS@32.c)
 *     _SfnINLPWINDOWPOS@32 @ 0x43456 (_SfnINLPWINDOWPOS@32.c)
 *     _SfnINLPCREATESTRUCT@32 @ 0x448FE (_SfnINLPCREATESTRUCT@32.c)
 *     _IsTouchInputMessage@4 @ 0x46022 (_IsTouchInputMessage@4.c)
 *     _SfnINOUTLPPOINT5@32 @ 0x47D94 (_SfnINOUTLPPOINT5@32.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _SfnINOUTNCCALCSIZE@32 @ 0x93FEA (_SfnINOUTNCCALCSIZE@32.c)
 *     _ValidateTimerCallback@8 @ 0x981D0 (_ValidateTimerCallback@8.c)
 *     _SfnNCDESTROY@32 @ 0x9A370 (_SfnNCDESTROY@32.c)
 *     _SfnOUTSTRING@32 @ 0x9DE4E (_SfnOUTSTRING@32.c)
 *     _SfnEMPTY@32 @ 0xA14EC (_SfnEMPTY@32.c)
 *     _SfnCOPYDATA@32 @ 0xA297A (_SfnCOPYDATA@32.c)
 *     _SfnSHELLWINDOWMANAGEMENTNOTIFY@32 @ 0xA3D5E (_SfnSHELLWINDOWMANAGEMENTNOTIFY@32.c)
 *     _SfnINOUTLPRECT@32 @ 0xA4082 (_SfnINOUTLPRECT@32.c)
 *     _SfnINSTRINGNULL@32 @ 0xA436C (_SfnINSTRINGNULL@32.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 *     _SfnPOWERBROADCAST@32 @ 0xA4C38 (_SfnPOWERBROADCAST@32.c)
 *     _SfnSHELLWINDOWMANAGEMENTCALLOUT@32 @ 0xA78D4 (_SfnSHELLWINDOWMANAGEMENTCALLOUT@32.c)
 *     _GreAssertSystemCriticalProcess@4 @ 0xB5596 (_GreAssertSystemCriticalProcess@4.c)
 *     _SfnINOUTLPUAHMEASUREMENUITEM@32 @ 0xB8942 (_SfnINOUTLPUAHMEASUREMENUITEM@32.c)
 *     _SfnINLPUAHDRAWMENU@32 @ 0xB8C12 (_SfnINLPUAHDRAWMENU@32.c)
 *     _SfnINLPUAHINITMENU@32 @ 0xB8DEE (_SfnINLPUAHINITMENU@32.c)
 *     _SfnINLPUAHDRAWMENUITEM@32 @ 0xB8FCA (_SfnINLPUAHDRAWMENUITEM@32.c)
 *     _RtlWCSMessageWParamCharToMB@8 @ 0xC5322 (_RtlWCSMessageWParamCharToMB@8.c)
 *     _SfnINDEVICECHANGE@32 @ 0xC8560 (_SfnINDEVICECHANGE@32.c)
 *     ?FindSystemTimer@@YGPAUtagTIMER@@PAUtagMSG@@PAUtagWND@@@Z @ 0xCA322 (-FindSystemTimer@@YGPAUtagTIMER@@PAUtagMSG@@PAUtagWND@@@Z.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 *     _SfnCOPYGLOBALDATA@32 @ 0x18A2D8 (_SfnCOPYGLOBALDATA@32.c)
 *     _SfnDWORDOPTINLPMSG@32 @ 0x18A66A (_SfnDWORDOPTINLPMSG@32.c)
 *     _SfnGESTURE@32 @ 0x18A8A8 (_SfnGESTURE@32.c)
 *     _SfnGETDBCSTEXTLENGTHS@32 @ 0x18AAE2 (_SfnGETDBCSTEXTLENGTHS@32.c)
 *     _SfnGETWINDOWDATA@32 @ 0x18B312 (_SfnGETWINDOWDATA@32.c)
 *     _SfnIMECONTROL@32 @ 0x18B448 (_SfnIMECONTROL@32.c)
 *     _SfnINCNTOUTSTRING@32 @ 0x18BE0A (_SfnINCNTOUTSTRING@32.c)
 *     _SfnINCNTOUTSTRINGNULL@32 @ 0x18C3A4 (_SfnINCNTOUTSTRINGNULL@32.c)
 *     _SfnINDESTROYCLIPBRD@32 @ 0x18C8E2 (_SfnINDESTROYCLIPBRD@32.c)
 *     _SfnINLPCOMPAREITEMSTRUCT@32 @ 0x18CB0A (_SfnINLPCOMPAREITEMSTRUCT@32.c)
 *     _SfnINLPDELETEITEMSTRUCT@32 @ 0x18CD4E (_SfnINLPDELETEITEMSTRUCT@32.c)
 *     _SfnINLPDRAWITEMSTRUCT@32 @ 0x18CF89 (_SfnINLPDRAWITEMSTRUCT@32.c)
 *     _SfnINLPHELPINFOSTRUCT@32 @ 0x18D261 (_SfnINLPHELPINFOSTRUCT@32.c)
 *     _SfnINLPHLPSTRUCT@32 @ 0x18D5F5 (_SfnINLPHLPSTRUCT@32.c)
 *     _SfnINLPKDRAWSWITCHWND@32 @ 0x18D98D (_SfnINLPKDRAWSWITCHWND@32.c)
 *     _SfnINLPMDICREATESTRUCT@32 @ 0x18DE71 (_SfnINLPMDICREATESTRUCT@32.c)
 *     _SfnINLPUAHNCPAINTMENUPOPUP@32 @ 0x18E3FD (_SfnINLPUAHNCPAINTMENUPOPUP@32.c)
 *     _SfnINOUTDRAG@32 @ 0x18E682 (_SfnINOUTDRAG@32.c)
 *     _SfnINOUTLPMEASUREITEMSTRUCT@32 @ 0x18E955 (_SfnINOUTLPMEASUREITEMSTRUCT@32.c)
 *     _SfnINOUTLPSCROLLINFO@32 @ 0x18EC31 (_SfnINOUTLPSCROLLINFO@32.c)
 *     _SfnINOUTLPSIZE@32 @ 0x18EF0E (_SfnINOUTLPSIZE@32.c)
 *     _SfnINOUTMENUGETOBJECT@32 @ 0x18F1B8 (_SfnINOUTMENUGETOBJECT@32.c)
 *     _SfnINOUTNEXTMENU@32 @ 0x18F4A3 (_SfnINOUTNEXTMENU@32.c)
 *     _SfnINPAINTCLIPBRD@32 @ 0x18F764 (_SfnINPAINTCLIPBRD@32.c)
 *     _SfnINPGESTURENOTIFYSTRUCT@32 @ 0x18FA31 (_SfnINPGESTURENOTIFYSTRUCT@32.c)
 *     _SfnINSIZECLIPBRD@32 @ 0x18FDC5 (_SfnINSIZECLIPBRD@32.c)
 *     _SfnINSTRING@32 @ 0x19002A (_SfnINSTRING@32.c)
 *     _SfnINWPARAMCHAR@32 @ 0x1904C6 (_SfnINWPARAMCHAR@32.c)
 *     _SfnINWPARAMDBCSCHAR@32 @ 0x19072C (_SfnINWPARAMDBCSCHAR@32.c)
 *     _SfnKEYBOARDCORRECTIONCALLOUT@32 @ 0x190967 (_SfnKEYBOARDCORRECTIONCALLOUT@32.c)
 *     _SfnOPTOUTLPDWORDOPTOUTLPDWORD@32 @ 0x190C25 (_SfnOPTOUTLPDWORDOPTOUTLPDWORD@32.c)
 *     _SfnOUTDWORDINDWORD@32 @ 0x190EC7 (_SfnOUTDWORDINDWORD@32.c)
 *     _SfnOUTLPRECT@32 @ 0x191150 (_SfnOUTLPRECT@32.c)
 *     _SfnOUTLPSCROLLBARINFO@32 @ 0x1913F7 (_SfnOUTLPSCROLLBARINFO@32.c)
 *     _SfnOUTLPTITLEBARINFOEX@32 @ 0x1916FB (_SfnOUTLPTITLEBARINFOEX@32.c)
 *     _SfnPOPTINLPUINT@32 @ 0x191A41 (_SfnPOPTINLPUINT@32.c)
 *     _SfnPOUTLPINT@32 @ 0x191E47 (_SfnPOUTLPINT@32.c)
 *     _SfnSENTDDEMSG@32 @ 0x1922F9 (_SfnSENTDDEMSG@32.c)
 *     _SfnTOUCH@32 @ 0x1925A8 (_SfnTOUCH@32.c)
 *     _SfnTOUCHHITTESTING@32 @ 0x1927E2 (_SfnTOUCHHITTESTING@32.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _SfnINCBOXSTRING@32 @ 0x1A0007 (_SfnINCBOXSTRING@32.c)
 *     _SfnINLBOXSTRING@32 @ 0x1A0032 (_SfnINLBOXSTRING@32.c)
 *     _SfnOUTCBOXSTRING@32 @ 0x1A005D (_SfnOUTCBOXSTRING@32.c)
 *     _SfnOUTLBOXSTRING@32 @ 0x1A00F1 (_SfnOUTLBOXSTRING@32.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 *     _RtlMBMessageWParamCharToWCS@8 @ 0x1B72F5 (_RtlMBMessageWParamCharToWCS@8.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __thiscall xxxDispatchMessage(unsigned int *this)
{
  unsigned int *v1; // ebx
  unsigned int v2; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v5; // edi
  unsigned int v6; // ecx
  int *v7; // eax
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  struct tagTIMER *SystemTimer; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  int v15; // edx
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // eax
  int v19; // ecx
  char v20; // al
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // edx
  int v24; // eax
  int *v25; // edx
  int v26; // ecx
  PKTHREAD v27; // eax
  int v28; // eax
  struct tagMSG *v30; // [esp+0h] [ebp-38h]
  struct tagWND *v31; // [esp+4h] [ebp-34h]
  char v32; // [esp+13h] [ebp-25h]
  int *v33; // [esp+14h] [ebp-24h]
  unsigned int v34; // [esp+18h] [ebp-20h]
  int v35; // [esp+18h] [ebp-20h]
  PKTHREAD v36; // [esp+1Ch] [ebp-1Ch]
  struct tagTIMER *v37; // [esp+1Ch] [ebp-1Ch]
  unsigned int v39; // [esp+24h] [ebp-14h]
  int (__stdcall *v40)(int, int, int, int, int, int, int, int); // [esp+24h] [ebp-14h]
  int v41; // [esp+28h] [ebp-10h]
  int v42; // [esp+2Ch] [ebp-Ch] BYREF
  int *v43; // [esp+30h] [ebp-8h]
  int v44; // [esp+34h] [ebp-4h]

  v42 = 0;
  v1 = this;
  v2 = this[1];
  v43 = 0;
  v39 = v2;
  v44 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  EtwTraceBeginDispatchMessage(*(unsigned __int8 *)(ThreadWin32Thread + 704), v2);
  v5 = 0;
  v33 = 0;
  if ( !*v1 || (v33 = (int *)ValidateHwnd(*v1)) != 0 )
  {
    v6 = v1[1];
    if ( v6 < 0x400 && ((MessageTable[v6] & 0x200) != 0 || v6 == 537 && (v1[2] & 0x8000) != 0)
      || v6 == 536 && (v1[2] & 0x8000) != 0 )
    {
      if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) == 0 )
      {
        UserSetLastError(1159);
        goto LABEL_69;
      }
      v1[1] = v6 | 0x10000;
    }
    v36 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached() || (v7 = (int *)PsGetThreadWin32Thread(v36)) == 0 )
      v8 = 0;
    else
      v8 = *v7;
    v9 = (int)v33;
    v42 = *(_DWORD *)(v8 + 228);
    *(_DWORD *)(v8 + 228) = &v42;
    v43 = v33;
    if ( v33 )
    {
      HMLockObject(v33);
      v9 = (int)v33;
    }
    v10 = v1[1];
    if ( v10 != 275 && v10 != 280 || !v1[3] )
    {
      if ( v9 )
      {
        if ( v10 == 15 )
        {
          SetOrClrWF(1, v9, 0x240u, 1);
          v9 = (int)v33;
        }
        v19 = *(_DWORD *)(v9 + 20);
        v20 = *(_BYTE *)(v19 + 10);
        v32 = v20;
        if ( (v20 & 4) != 0 )
        {
          v21 = v1[1];
          if ( v21 < 0x400 )
            v40 = gapfnScSendMessage[(unsigned __int8)MessageTable[v21]];
          else
            v40 = (int (__stdcall *)(int, int, int, int, int, int, int, int))SfnDWORD;
          if ( v40 == SfnINWPARAMCHAR && (v32 & 8) != 0 )
          {
            RtlMBMessageWParamCharToWCS(v21, v1 + 2);
            v9 = (int)v33;
            v19 = v33[5];
          }
          v22 = *(_DWORD *)(v19 + 84);
          if ( v22 < 7 )
            v5 = ((int (__stdcall *)(int, int, int, int))(&gServerHandlers)[v22])(v9, v1[1], v1[2], v1[3]);
        }
        else
        {
          v35 = *(_DWORD *)(v19 + 84);
          v41 = v1[1];
          if ( (v20 & 8) != 0 )
          {
            RtlWCSMessageWParamCharToMB();
            if ( IsTouchInputMessage(v1[1]) || v23 == 281 )
              v24 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v23]](
                      (int)v33,
                      v23,
                      v1[2],
                      v1[3],
                      v35,
                      *(_DWORD *)(_gpsi + 408),
                      1,
                      0);
            else
              v24 = SfnDWORD(v33, v23, v1[2], v1[3], v35, *(_DWORD *)(_gpsi + 408), 1, 0);
          }
          else if ( IsTouchInputMessage(v1[1]) || v26 == 281 )
          {
            v24 = gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v26]](
                    (int)v25,
                    v41,
                    v1[2],
                    v1[3],
                    v35,
                    *(_DWORD *)(_gpsi + 408),
                    1,
                    0);
          }
          else
          {
            v24 = SfnDWORD(v25, v26, v1[2], v1[3], v35, *(_DWORD *)(_gpsi + 408), 1, 0);
          }
          v5 = v24;
          if ( v1[1] == 15 && HMValidateHandleNoSecure(*v1, 1) && (*(_BYTE *)(v33[5] + 10) & 0x40) != 0 )
          {
            SetOrClrWF(0, (int)v33, 0x401u, 1);
            xxxSimpleDoSyncPaint((struct tagVWPL **)v33);
          }
        }
      }
      goto LABEL_68;
    }
    if ( v10 == 280 )
    {
      SystemTimer = FindSystemTimer(v30, v31);
      v37 = SystemTimer;
      if ( !SystemTimer )
        goto LABEL_68;
      if ( !*((_DWORD *)SystemTimer + 4) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        if ( !*((_DWORD *)v37 + 4) )
          goto LABEL_68;
      }
      v12 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v14 = MEMORY[0xFFDF0324];
        v34 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v14 = MEMORY[0xFFDF0324];
            v34 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v1 = this;
          v12 = MEMORY[0xFFDF0004];
        }
        v13 = v12 * (v14 << 8) + (((unsigned int)v12 * (unsigned __int64)v34) >> 24);
      }
      else
      {
        v13 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      (*((void (__stdcall **)(int *, int, unsigned int, int))v37 + 4))(v33, 280, v1[2], v13);
    }
    else
    {
      if ( (*(_BYTE *)(_gptiCurrent + 264) & 4) != 0 || !ValidateTimerCallback() )
        goto LABEL_68;
      v15 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v17 = MEMORY[0xFFDF0324];
        if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
        {
          v18 = MEMORY[0xFFDF0320];
        }
        else
        {
          do
          {
            _mm_pause();
            v17 = MEMORY[0xFFDF0324];
            v18 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v1 = this;
          v15 = MEMORY[0xFFDF0004];
        }
        v16 = MEMORY[0xFFDF0004] * (v17 << 8) + (((unsigned int)v15 * (unsigned __int64)v18) >> 24);
      }
      else
      {
        v16 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      v5 = SfnDWORD(v33, 275, v1[2], v16, v1[3], *(_DWORD *)(_gpsi + 408), 1, 0);
    }
    v2 = v39;
LABEL_68:
    ThreadUnlock1();
  }
LABEL_69:
  v27 = KeGetCurrentThread();
  v28 = W32GetThreadWin32Thread(v27);
  EtwTraceEndDispatchMessage(*(unsigned __int8 *)(v28 + 704), v2);
  return v5;
}
