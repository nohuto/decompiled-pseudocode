/*
 * XREFs of ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00D4DBC
 * Callers:
 *     fnHkINLPNOTIFYSTRUCT @ 0x1C0006920 (fnHkINLPNOTIFYSTRUCT.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0071090 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnPOWERBROADCAST @ 0x1C00733C0 (SfnPOWERBROADCAST.c)
 *     xxxClientCopyImage @ 0x1C0073878 (xxxClientCopyImage.c)
 *     xxxClientAddFontResourceW @ 0x1C0073C68 (xxxClientAddFontResourceW.c)
 *     SfnINDEVICECHANGE @ 0x1C0075540 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0075918 (ClientLoadLibrary.c)
 *     SfnINSTRINGNULL @ 0x1C0076660 (SfnINSTRINGNULL.c)
 *     xxxClientLoadImage @ 0x1C0077158 (xxxClientLoadImage.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0077490 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadMenu @ 0x1C0077E08 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C0078330 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C007880C (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C007A6A4 (xxxClientExpandStringW.c)
 *     SfnINSTRING @ 0x1C007B6F0 (SfnINSTRING.c)
 *     xxxClientFreeWindowClassExtraBytes @ 0x1C00D442C (xxxClientFreeWindowClassExtraBytes.c)
 *     SfnNCDESTROY @ 0x1C00D4540 (SfnNCDESTROY.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C00D482C (xxxClientAllocWindowClassExtraBytes.c)
 *     SfnINLPWINDOWPOS @ 0x1C00D49B0 (SfnINLPWINDOWPOS.c)
 *     fnHkINDWORD @ 0x1C00D6144 (fnHkINDWORD.c)
 *     xxxClientCallWinEventProc @ 0x1C00D62D0 (xxxClientCallWinEventProc.c)
 *     xxxClientCallDitThread @ 0x1C00D6980 (xxxClientCallDitThread.c)
 *     SfnOUTLPCOMBOBOXINFO @ 0x1C00F5180 (SfnOUTLPCOMBOBOXINFO.c)
 *     SfnEMPTY @ 0x1C00F7B90 (SfnEMPTY.c)
 *     SfnINOUTLPPOINT5 @ 0x1C00FB490 (SfnINOUTLPPOINT5.c)
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00FCE80 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00FD270 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00FD550 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00FD830 (SfnINLPUAHDRAWMENUITEM.c)
 *     ClientImmProcessKey @ 0x1C00FDF2C (ClientImmProcessKey.c)
 *     xxxClientWOWGetProcModule @ 0x1C0103390 (xxxClientWOWGetProcModule.c)
 *     SfnINOUTLPSCROLLINFO @ 0x1C01060F0 (SfnINOUTLPSCROLLINFO.c)
 *     SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C010C7D0 (SfnSHELLWINDOWMANAGEMENTNOTIFY.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C010F9B8 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     SfnINOUTLPRECT @ 0x1C01113B0 (SfnINOUTLPRECT.c)
 *     SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C0111BA0 (SfnSHELLWINDOWMANAGEMENTCALLOUT.c)
 *     xxxClientMonitorEnumProc @ 0x1C0113650 (xxxClientMonitorEnumProc.c)
 *     ClientFreeLibrary @ 0x1C0114840 (ClientFreeLibrary.c)
 *     SfnOUTLPTITLEBARINFOEX @ 0x1C011AA40 (SfnOUTLPTITLEBARINFOEX.c)
 *     xxxClientBroadcastThemeChange @ 0x1C0122A80 (xxxClientBroadcastThemeChange.c)
 *     xxxClientRimDevCallback @ 0x1C0123C64 (xxxClientRimDevCallback.c)
 *     ClientImmLoadLayout @ 0x1C01254E4 (ClientImmLoadLayout.c)
 *     xxxClientGetCharsetInfo @ 0x1C01262F8 (xxxClientGetCharsetInfo.c)
 *     SfnOUTLPRECT @ 0x1C0145930 (SfnOUTLPRECT.c)
 *     SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0148E50 (SfnOPTOUTLPDWORDOPTOUTLPDWORD.c)
 *     SfnINLPDRAWITEMSTRUCT @ 0x1C014A760 (SfnINLPDRAWITEMSTRUCT.c)
 *     SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C014D1C0 (SfnINOUTLPMEASUREITEMSTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C014E060 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C014E388 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C014EFC4 (ClientGetListboxString.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C015146C (fnHkINLPCBTACTIVATESTRUCT.c)
 *     SfnINDESTROYCLIPBRD @ 0x1C0151D00 (SfnINDESTROYCLIPBRD.c)
 *     SfnINWPARAMDBCSCHAR @ 0x1C0154700 (SfnINWPARAMDBCSCHAR.c)
 *     ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C02280F8 (-xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C022826C (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 *     ClientEventCallback @ 0x1C02283F8 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02287F0 (SfnCOPYGLOBALDATA.c)
 *     SfnGESTURE @ 0x1C0228C30 (SfnGESTURE.c)
 *     SfnGETWINDOWDATA @ 0x1C0228F80 (SfnGETWINDOWDATA.c)
 *     SfnIMECONTROL @ 0x1C0229130 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C0229CD0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022A2F0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPCOMPAREITEMSTRUCT @ 0x1C022A8A0 (SfnINLPCOMPAREITEMSTRUCT.c)
 *     SfnINLPDELETEITEMSTRUCT @ 0x1C022AC10 (SfnINLPDELETEITEMSTRUCT.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022AF60 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022B3D0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B830 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022BD70 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C022C3F0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 *     SfnINOUTDRAG @ 0x1C022C7B0 (SfnINOUTDRAG.c)
 *     SfnINOUTLPSIZE @ 0x1C022CBB0 (SfnINOUTLPSIZE.c)
 *     SfnINOUTMENUGETOBJECT @ 0x1C022CF70 (SfnINOUTMENUGETOBJECT.c)
 *     SfnINOUTNEXTMENU @ 0x1C022D3B0 (SfnINOUTNEXTMENU.c)
 *     SfnINPAINTCLIPBRD @ 0x1C022D7A0 (SfnINPAINTCLIPBRD.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022DBA0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSIZECLIPBRD @ 0x1C022E000 (SfnINSIZECLIPBRD.c)
 *     SfnINWPARAMCHAR @ 0x1C022E390 (SfnINWPARAMCHAR.c)
 *     SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C022E730 (SfnKEYBOARDCORRECTIONCALLOUT.c)
 *     SfnOUTDWORDINDWORD @ 0x1C022EB10 (SfnOUTDWORDINDWORD.c)
 *     SfnOUTLPSCROLLBARINFO @ 0x1C022EED0 (SfnOUTLPSCROLLBARINFO.c)
 *     SfnPOPTINLPUINT @ 0x1C022F310 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C022F7D0 (SfnPOUTLPINT.c)
 *     SfnSENTDDEMSG @ 0x1C022FD90 (SfnSENTDDEMSG.c)
 *     SfnTOUCH @ 0x1C0230170 (SfnTOUCH.c)
 *     SfnTOUCHHITTESTING @ 0x1C02304C0 (SfnTOUCHHITTESTING.c)
 *     fnHkINLPDEBUGHOOKSTRUCT @ 0x1C0230988 (fnHkINLPDEBUGHOOKSTRUCT.c)
 *     fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0230B68 (fnHkINLPKBDLLHOOKSTRUCT.c)
 *     fnHkINLPMSLLHOOKSTRUCT @ 0x1C0230CE0 (fnHkINLPMSLLHOOKSTRUCT.c)
 *     fnHkINLPRECT @ 0x1C0230E5C (fnHkINLPRECT.c)
 *     fnHkOPTINLPEVENTMSG @ 0x1C0231050 (fnHkOPTINLPEVENTMSG.c)
 *     xxxClientCallDefWindowProc @ 0x1C02312C0 (xxxClientCallDefWindowProc.c)
 *     xxxClientCallDefaultInputHandler @ 0x1C0231430 (xxxClientCallDefaultInputHandler.c)
 *     xxxClientCallDelegateThread @ 0x1C02315AC (xxxClientCallDelegateThread.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C02318F4 (xxxClientCallLocalMouseHooks.c)
 *     xxxClientCharToWchar @ 0x1C0231A58 (xxxClientCharToWchar.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0231B80 (xxxClientCopyDDEIn1.c)
 *     xxxClientCopyDDEOut1 @ 0x1C0232044 (xxxClientCopyDDEOut1.c)
 *     xxxClientFindMnemChar @ 0x1C0232400 (xxxClientFindMnemChar.c)
 *     xxxClientFreeDDEHandle @ 0x1C0232698 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEFlags @ 0x1C02327C0 (xxxClientGetDDEFlags.c)
 *     xxxClientGetDDEHookData @ 0x1C02328E8 (xxxClientGetDDEHookData.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232AEC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232F54 (xxxClientPSMTextOut.c)
 *     xxxClientUpdateDpi @ 0x1C02332E4 (xxxClientUpdateDpi.c)
 * Callees:
 *     <none>
 */

ReleaseAndReacquirePerObjectLocks *__fastcall ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
        ReleaseAndReacquirePerObjectLocks *this)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax

  *(_BYTE *)this = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(this)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v13),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *(_BYTE *)this = *(_BYTE *)(v3 + 1480);
  *(_BYTE *)(v3 + 1480) = 0;
  if ( (*(_BYTE *)this & 1) != 0 )
  {
    tagObjLock::UnLockExclusive((tagObjLock *)(v3 + 392));
    DLT = DLT_THREADINFO::getDLT();
    DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
    tagDomLock::UnLockShared(DomainLockRef);
  }
  return this;
}
