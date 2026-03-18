/*
 * XREFs of _xxxDefWindowProc@16 @ 0x16650
 * Callers:
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z @ 0x40764 (-xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _xxxGetWindowText@12 @ 0xBDB18 (_xxxGetWindowText@12.c)
 *     _xxxGetControlColor@16 @ 0xBFABC (_xxxGetControlColor@16.c)
 *     ?xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z @ 0xC1E2A (-xxxGetColorObjects@@YGPAUHBRUSH__@@PAUtagWND@@PAUHDC__@@@Z.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxSBWndProc@16 @ 0x1A3EEF (_xxxSBWndProc@16.c)
 * Callees:
 *     _SfnOUTLPCOMBOBOXINFO@32 @ 0x11346 (_SfnOUTLPCOMBOBOXINFO@32.c)
 *     _xxxLoadUserApiHook@0 @ 0x16798 (_xxxLoadUserApiHook@0.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _SfnINOUTSTYLECHANGE@32 @ 0x40A10 (_SfnINOUTSTYLECHANGE@32.c)
 *     _SfnDWORD@32 @ 0x40E50 (_SfnDWORD@32.c)
 *     _SfnINOUTLPWINDOWPOS@32 @ 0x411EA (_SfnINOUTLPWINDOWPOS@32.c)
 *     _SfnINLPWINDOWPOS@32 @ 0x43456 (_SfnINLPWINDOWPOS@32.c)
 *     _SfnINLPCREATESTRUCT@32 @ 0x448FE (_SfnINLPCREATESTRUCT@32.c)
 *     _SfnINOUTLPPOINT5@32 @ 0x47D94 (_SfnINOUTLPPOINT5@32.c)
 *     _SfnINOUTNCCALCSIZE@32 @ 0x93FEA (_SfnINOUTNCCALCSIZE@32.c)
 *     _SfnNCDESTROY@32 @ 0x9A370 (_SfnNCDESTROY@32.c)
 *     _SfnOUTSTRING@32 @ 0x9DE4E (_SfnOUTSTRING@32.c)
 *     _SfnEMPTY@32 @ 0xA14EC (_SfnEMPTY@32.c)
 *     _SfnCOPYDATA@32 @ 0xA297A (_SfnCOPYDATA@32.c)
 *     _SfnSHELLWINDOWMANAGEMENTNOTIFY@32 @ 0xA3D5E (_SfnSHELLWINDOWMANAGEMENTNOTIFY@32.c)
 *     _SfnINOUTLPRECT@32 @ 0xA4082 (_SfnINOUTLPRECT@32.c)
 *     _SfnINSTRINGNULL@32 @ 0xA436C (_SfnINSTRINGNULL@32.c)
 *     _SfnPOWERBROADCAST@32 @ 0xA4C38 (_SfnPOWERBROADCAST@32.c)
 *     _SfnSHELLWINDOWMANAGEMENTCALLOUT@32 @ 0xA78D4 (_SfnSHELLWINDOWMANAGEMENTCALLOUT@32.c)
 *     _SfnINOUTLPUAHMEASUREMENUITEM@32 @ 0xB8942 (_SfnINOUTLPUAHMEASUREMENUITEM@32.c)
 *     _SfnINLPUAHDRAWMENU@32 @ 0xB8C12 (_SfnINLPUAHDRAWMENU@32.c)
 *     _SfnINLPUAHINITMENU@32 @ 0xB8DEE (_SfnINLPUAHINITMENU@32.c)
 *     _SfnINLPUAHDRAWMENUITEM@32 @ 0xB8FCA (_SfnINLPUAHDRAWMENUITEM@32.c)
 *     _SfnINDEVICECHANGE@32 @ 0xC8560 (_SfnINDEVICECHANGE@32.c)
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
 *     _SfnINCBOXSTRING@32 @ 0x1A0007 (_SfnINCBOXSTRING@32.c)
 *     _SfnINLBOXSTRING@32 @ 0x1A0032 (_SfnINLBOXSTRING@32.c)
 *     _SfnOUTCBOXSTRING@32 @ 0x1A005D (_SfnOUTCBOXSTRING@32.c)
 *     _SfnOUTLBOXSTRING@32 @ 0x1A00F1 (_SfnOUTLBOXSTRING@32.c)
 */

int __stdcall xxxDefWindowProc(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  unsigned int v6; // ecx

  if ( a2 == 397 || a2 == 325 )
    return 0;
  v4 = a2 != 60 ? a4 : 0;
  if ( gihmodUserApiHook < 0 )
    return xxxRealDefWindowProc(a3, v4);
  v5 = *(_DWORD *)(a1 + 20);
  if ( *(char *)(v5 + 11) < 0 && (a2 != 130 || (*(_BYTE *)(v5 + 10) & 4) == 0 || *(__int16 *)(v5 + 30) < 0) )
    return xxxRealDefWindowProc(a3, v4);
  if ( (*(_BYTE *)(_gptiCurrent + 264) & 1) != 0 || !xxxLoadUserApiHook() )
    return xxxRealDefWindowProc(a3, v4);
  v6 = ((unsigned int)&loc_1FFFA + 5) & a2;
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 10) & 8) != 0 )
  {
    if ( v6 < 0x400 )
      return gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]](
               a1,
               a2,
               a3,
               v4,
               0,
               *(_DWORD *)(_gpsi + 308),
               1,
               0);
    else
      return SfnDWORD(a1, a2, a3, v4, 0, *(_DWORD *)(_gpsi + 308), 1, 0);
  }
  else if ( v6 < 0x400 )
  {
    return gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]](
             a1,
             a2,
             a3,
             v4,
             0,
             *(_DWORD *)(_gpsi + 404),
             0,
             0);
  }
  else
  {
    return SfnDWORD(a1, a2, a3, v4, 0, *(_DWORD *)(_gpsi + 404), 0, 0);
  }
}
