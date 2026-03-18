/*
 * XREFs of _xxxReceiveMessage@4 @ 0x415B8
 * Callers:
 *     ?xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z @ 0x45220 (-xxxRealSleepThread@@YGHIKHHPAW4SLEEP_STATUS@@@Z.c)
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 *     _xxxUserYield@4 @ 0x9875A (_xxxUserYield@4.c)
 *     _xxxWaitForDITMouseInjectionFlush@0 @ 0xAFF56 (_xxxWaitForDITMouseInjectionFlush@0.c)
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     ?xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z @ 0xE3788 (-xxxPollAndWaitForSingleObject@@YGKPAU_KEVENT@@PAXK@Z.c)
 * Callees:
 *     _SfnOUTLPCOMBOBOXINFO@32 @ 0x11346 (_SfnOUTLPCOMBOBOXINFO@32.c)
 *     _xxxEventWndProc@16 @ 0x15E80 (_xxxEventWndProc@16.c)
 *     _xxxDesktopWndProc@16 @ 0x16118 (_xxxDesktopWndProc@16.c)
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _NtUserfnNCDESTROY@28 @ 0x3C762 (_NtUserfnNCDESTROY@28.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z @ 0x40764 (-xxxSendMessageToClient@@YGXPAUtagWND@@IIJPAUtagSMS@@HPAJ@Z.c)
 *     _SfnINOUTSTYLECHANGE@32 @ 0x40A10 (_SfnINOUTSTYLECHANGE@32.c)
 *     _SfnDWORD@32 @ 0x40E50 (_SfnDWORD@32.c)
 *     _SfnINOUTLPWINDOWPOS@32 @ 0x411EA (_SfnINOUTLPWINDOWPOS@32.c)
 *     _SfnINLPWINDOWPOS@32 @ 0x43456 (_SfnINLPWINDOWPOS@32.c)
 *     _UnlinkSendListSms@4 @ 0x439C4 (_UnlinkSendListSms@4.c)
 *     _xxxInterSendMsgEx@36 @ 0x43A56 (_xxxInterSendMsgEx@36.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _SfnINLPCREATESTRUCT@32 @ 0x448FE (_SfnINLPCREATESTRUCT@32.c)
 *     _xxxSleepTask@8 @ 0x457AA (_xxxSleepTask@8.c)
 *     _IsTouchInputMessage@4 @ 0x46022 (_IsTouchInputMessage@4.c)
 *     _SfnINOUTLPPOINT5@32 @ 0x47D94 (_SfnINOUTLPPOINT5@32.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
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
 *     _GreAssertSystemCriticalProcess@4 @ 0xB5596 (_GreAssertSystemCriticalProcess@4.c)
 *     _SfnINOUTLPUAHMEASUREMENUITEM@32 @ 0xB8942 (_SfnINOUTLPUAHMEASUREMENUITEM@32.c)
 *     _SfnINLPUAHDRAWMENU@32 @ 0xB8C12 (_SfnINLPUAHDRAWMENU@32.c)
 *     _SfnINLPUAHINITMENU@32 @ 0xB8DEE (_SfnINLPUAHINITMENU@32.c)
 *     _SfnINLPUAHDRAWMENUITEM@32 @ 0xB8FCA (_SfnINLPUAHDRAWMENUITEM@32.c)
 *     _SfnINDEVICECHANGE@32 @ 0xC8560 (_SfnINDEVICECHANGE@32.c)
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _DirectedScheduleTask@16 @ 0x1559F9 (_DirectedScheduleTask@16.c)
 *     _xxxSwitchWndProc@16 @ 0x15DF4B (_xxxSwitchWndProc@16.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SGXXZ @ 0x180B78 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SGXXZ.c)
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
 */

int __thiscall xxxReceiveMessage(_DWORD *this)
{
  _DWORD *v1; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  int result; // eax
  unsigned int v5; // ebx
  int v6; // edx
  _DWORD *v7; // ecx
  int v8; // eax
  _DWORD *v9; // edi
  int v10; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v13; // ecx
  int v14; // eax
  int v15; // edx
  unsigned int *v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // edi
  PKTHREAD v22; // eax
  int v23; // eax
  _DWORD *v24; // ecx
  int *v25; // edi
  int v26; // eax
  char v27; // al
  int (*v28)(void); // edi
  int v29; // eax
  unsigned int v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int CurrentProcessWin32Process; // eax
  unsigned int v35; // edx
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int *v39; // eax
  int v40; // eax
  int *v41; // edi
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // edx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // ecx
  int v50; // edi
  PKTHREAD v51; // eax
  int v52; // eax
  unsigned int *v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // ecx
  BOOL v57; // eax
  int *v58; // eax
  struct _KTHREAD *v59; // edi
  ULONG_PTR v60; // edx
  unsigned int v61; // ecx
  int v62; // eax
  PKTHREAD v63; // eax
  int v64; // eax
  unsigned int v65; // eax
  int v66; // eax
  void *v67; // esi
  int v68; // ecx
  unsigned int v69; // eax
  int v70; // eax
  int v71; // esi
  int *v72; // eax
  int *v73; // ecx
  int v74; // esi
  unsigned int v75; // ecx
  BOOL v76; // eax
  int v77; // eax
  int *v78; // eax
  unsigned int *v79; // ecx
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // ecx
  int v83; // [esp-4h] [ebp-BCh]
  int *v84; // [esp+0h] [ebp-B8h]
  int *v85; // [esp+4h] [ebp-B4h]
  int v86; // [esp+14h] [ebp-A4h]
  int v87; // [esp+18h] [ebp-A0h]
  int v88; // [esp+1Ch] [ebp-9Ch] BYREF
  int v89; // [esp+20h] [ebp-98h]
  int v90; // [esp+24h] [ebp-94h]
  int v91; // [esp+28h] [ebp-90h] BYREF
  int v92; // [esp+2Ch] [ebp-8Ch] BYREF
  int v93; // [esp+30h] [ebp-88h]
  int v94; // [esp+34h] [ebp-84h]
  unsigned int v95; // [esp+38h] [ebp-80h]
  int v96; // [esp+3Ch] [ebp-7Ch]
  unsigned int v97; // [esp+40h] [ebp-78h]
  int v98; // [esp+44h] [ebp-74h]
  unsigned int v99; // [esp+48h] [ebp-70h] BYREF
  int v100; // [esp+4Ch] [ebp-6Ch]
  int v101; // [esp+50h] [ebp-68h]
  int v102; // [esp+54h] [ebp-64h]
  PKTHREAD v103; // [esp+58h] [ebp-60h]
  _DWORD *v104; // [esp+5Ch] [ebp-5Ch]
  int v105; // [esp+60h] [ebp-58h] BYREF
  int *v106; // [esp+64h] [ebp-54h]
  int v107; // [esp+68h] [ebp-50h]
  int v108; // [esp+6Ch] [ebp-4Ch] BYREF
  int v109; // [esp+70h] [ebp-48h] BYREF
  int v110; // [esp+74h] [ebp-44h]
  char v111; // [esp+7Bh] [ebp-3Dh]
  _DWORD *v112; // [esp+7Ch] [ebp-3Ch]
  _DWORD *v113; // [esp+80h] [ebp-38h]
  int v114[7]; // [esp+84h] [ebp-34h] BYREF
  CPPEH_RECORD ms_exc; // [esp+A0h] [ebp-18h]

  v1 = this;
  v113 = this;
  v105 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v2 = this + 70;
  v3 = (_DWORD *)this[70];
  if ( v3 == this + 70 )
  {
    *(_WORD *)(this[61] + 6) &= ~0x40u;
    result = this[61];
    *(_WORD *)(result + 4) &= ~0x40u;
    return result;
  }
  v5 = (unsigned int)(v3 - 2);
  v99 = (unsigned int)(v3 - 2);
  --this[72];
  v6 = *v3;
  v7 = (_DWORD *)v3[1];
  if ( *(_DWORD **)(*v3 + 4) != v3 || (_DWORD *)*v7 != v3 )
    __fastfail(3u);
  *v7 = v6;
  *(_DWORD *)(v6 + 4) = v7;
  *v3 = 0;
  EtwTraceBeginRetrieveSendMessage(v3 - 2);
  *(_DWORD *)(v5 + 44) |= 0x4010u;
  v8 = *(_DWORD *)(v5 + 44);
  if ( (_DWORD *)*v2 == v2 )
  {
    *(_WORD *)(v1[61] + 6) &= ~0x40u;
    *(_WORD *)(v1[61] + 4) &= ~0x40u;
    v8 = *(_DWORD *)(v5 + 44);
  }
  v9 = *(_DWORD **)(v5 + 16);
  v104 = v9;
  if ( (v8 & 0x200) != 0 )
  {
    if ( !v9 )
    {
      v10 = *(_DWORD *)(v5 + 60);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v88 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v88;
      v89 = v10;
      if ( v10 )
        HMLockObject(v10);
      v9 = v104;
    }
    if ( (*(_DWORD *)(v5 + 44) & 0x400) != 0 )
    {
      v13 = *(int **)(_gptiCurrent + 244);
      v14 = *v13;
      v107 = *v13 & 8;
      *v13 = v14 | 4;
      **(_DWORD **)(_gptiCurrent + 244) |= 8u;
      if ( IsTouchInputMessage(*(_DWORD *)(v5 + 56)) || v15 == 281 )
        gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)v15]](
          *(_DWORD *)(v5 + 60),
          v15,
          *(_DWORD *)(v5 + 28),
          *(_DWORD *)(v5 + 36),
          *(_DWORD *)(v5 + 24),
          *(_DWORD *)(_gpsi + 408),
          1,
          0);
      else
        SfnDWORD(
          *(int **)(v5 + 60),
          v15,
          *(_DWORD *)(v5 + 28),
          *(_DWORD *)(v5 + 36),
          *(_DWORD *)(v5 + 24),
          *(_DWORD *)(_gpsi + 408),
          1,
          0);
      **(_DWORD **)(_gptiCurrent + 244) &= ~4u;
      v16 = *(unsigned int **)(_gptiCurrent + 244);
      v17 = *v16;
      if ( v107 )
        v18 = v17 | 8;
      else
        v18 = v17 & 0xFFFFFFF7;
      *v16 = v18;
      v9 = v104;
    }
    else
    {
      v19 = *(_DWORD **)(v5 + 60);
      if ( v19 )
        v19 = (_DWORD *)*v19;
      (*(void (__stdcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(v5 + 24))(
        v19,
        *(_DWORD *)(v5 + 56),
        *(_DWORD *)(v5 + 28),
        *(_DWORD *)(v5 + 36));
    }
    if ( !v9 )
      ThreadUnlock1();
    goto LABEL_185;
  }
  if ( (v8 & 7) == 0 )
  {
    v20 = (_DWORD *)v1[61];
    v86 = *v20 & 8;
    v87 = v1[69];
    v1[69] = v5;
    *v20 |= 2u;
    *(_DWORD *)v1[61] |= 8u;
    if ( !v9 )
    {
      v21 = *(_DWORD *)(v5 + 60);
      v22 = KeGetCurrentThread();
      v23 = W32GetThreadWin32Thread(v22);
      v88 = *(_DWORD *)(v23 + 228);
      *(_DWORD *)(v23 + 228) = &v88;
      v89 = v21;
      if ( v21 )
        HMLockObject(v21);
    }
    if ( *(_DWORD *)(v5 + 56) == 788 )
    {
      memset(v114, 0, 0x18u);
      v99 = 0;
      v102 = 0;
      v101 = 0;
      v100 = 0;
      v107 = 0;
      v24 = *(_DWORD **)(v5 + 52);
      v112 = v24;
      v25 = (int *)v24[2];
      v106 = v25;
      v26 = *(_DWORD *)(*v24 + 24);
      v98 = v26;
      v103 = (PKTHREAD)v1[197];
      if ( v26 < 0 )
        goto LABEL_78;
      if ( v26 <= 1 )
      {
        if ( !v25 )
          goto LABEL_79;
        qmemcpy(v114, v25, 0x14u);
        v28 = PsGetCurrentProcessWin32Process;
        if ( (unsigned int)(v114[0] - 512) <= 0xE )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
          v35 = *(_DWORD *)(v5 + 72);
          if ( ((*(_DWORD *)(CurrentProcessWin32Process + 156) >> 8) & 0x1FF) != ((v35 >> 8) & 0x1FF)
            || ((*(_DWORD *)(PsGetCurrentProcessWin32Process() + 156) & 0xF) != 2
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 156) & 0x20000000) == 0
              ? (v36 = 0)
              : (v36 = 1),
                (v35 = *(_DWORD *)(v5 + 72), (v35 & 0xF) != 2) || (v35 & 0x20000000) == 0 ? (v37 = 0) : (v37 = 1),
                v36 != v37) )
          {
            v109 = v114[1];
            v110 = v114[2];
            LogicalToPhysicalDPIPoint(&v109, &v109, v35, 0);
            v38 = PsGetCurrentProcessWin32Process();
            PhysicalToLogicalDPIPoint(&v109, &v109, *(_DWORD *)(v38 + 156), 0);
            v114[1] = v109;
            v114[2] = v110;
          }
        }
      }
      else
      {
        if ( v26 == 2 )
          goto LABEL_63;
        if ( v26 != 7 )
        {
          if ( v26 != 10 )
          {
            if ( v26 == 13 )
            {
              if ( v25 )
              {
                qmemcpy(v114, v25, 0x14u);
                v1 = v113;
                if ( v112[3] == -1 )
                {
                  v24 = v112;
                }
                else
                {
                  v27 = CheckAccess(v112 + 3, v113[58] + 496);
                  v24 = v112;
                  if ( !v27 )
                    v114[2] |= 2u;
                }
              }
              v102 = v1[193];
              v101 = v1[194];
              v100 = v1[195];
              v107 = v1[196];
              goto LABEL_44;
            }
            if ( v26 == 14 )
            {
              InputTraceLogging::Mouse::HandleLowLevelHook();
              if ( v25 )
              {
                qmemcpy(v114, v25, 0x18u);
                v1 = v113;
                if ( v112[3] != -1 && !(unsigned __int8)CheckAccess(v112 + 3, v113[58] + 496) )
                  v114[3] |= 2u;
              }
              v102 = v1[193];
              v101 = v1[194];
              v100 = v1[195];
              v107 = v1[196];
              v24 = v112;
LABEL_44:
              v1[193] = v24[3];
              v1[194] = v24[4];
              v1[195] = v24[5];
              v1[196] = v24[6];
              v1[197] = v114;
LABEL_79:
              v28 = PsGetCurrentProcessWin32Process;
LABEL_80:
              v39 = v114;
              if ( v106 )
              {
LABEL_82:
                v105 = xxxCallHook2(*(struct tagHOOK **)(v5 + 48), (int)v39, (unsigned int)&v99, 0, v84, (bool)v85);
                v40 = v98;
                if ( v98 == 13 || v98 == 14 )
                {
                  v1[193] = v102;
                  v1[194] = v101;
                  v1[195] = v100;
                  v1[196] = v107;
                  v1[197] = v103;
                }
                if ( (*(_BYTE *)(v5 + 44) & 5) != 0 || !v106 || v40 < 0 )
                  goto LABEL_120;
                if ( v40 <= 1 )
                {
                  if ( (unsigned int)(v114[0] - 512) <= 0xE )
                  {
                    if ( ((*(_DWORD *)(v28() + 156) >> 8) & 0x1FF) != ((*(_DWORD *)(v5 + 72) >> 8) & 0x1FF)
                      || ((*(_DWORD *)(v28() + 156) & 0xF) != 2 || (*(_DWORD *)(v28() + 156) & 0x20000000) == 0
                        ? (v45 = 0)
                        : (v45 = 1),
                          (*(_DWORD *)(v5 + 72) & 0xF) != 2 || (*(_DWORD *)(v5 + 72) & 0x20000000) == 0
                        ? (v46 = 0)
                        : (v46 = 1),
                          v45 != v46) )
                    {
                      v109 = v114[1];
                      v110 = v114[2];
                      v47 = v28();
                      LogicalToPhysicalDPIPoint(&v109, &v109, *(_DWORD *)(v47 + 156), 0);
                      PhysicalToLogicalDPIPoint(&v109, &v109, *(_DWORD *)(v5 + 72), 0);
                      v114[1] = v109;
                      v114[2] = v110;
                    }
                  }
                }
                else
                {
                  if ( v40 == 7 )
                  {
                    if ( ((*(_DWORD *)(v28() + 156) >> 8) & 0x1FF) != ((*(_DWORD *)(v5 + 72) >> 8) & 0x1FF)
                      || ((*(_DWORD *)(v28() + 156) & 0xF) != 2 || (*(_DWORD *)(v28() + 156) & 0x20000000) == 0
                        ? (v42 = 0)
                        : (v42 = 1),
                          (*(_DWORD *)(v5 + 72) & 0xF) != 2 || (*(_DWORD *)(v5 + 72) & 0x20000000) == 0
                        ? (v43 = 0)
                        : (v43 = 1),
                          v42 != v43) )
                    {
                      v44 = v28();
                      LogicalToPhysicalDPIPoint(v114, v114, *(_DWORD *)(v44 + 156), 0);
                      PhysicalToLogicalDPIPoint(v114, v114, *(_DWORD *)(v5 + 72), 0);
                    }
                    v83 = 6;
                    goto LABEL_118;
                  }
                  if ( v40 != 13 )
                  {
                    if ( v40 != 14 )
                      goto LABEL_120;
                    v83 = 6;
                    v41 = v106;
LABEL_119:
                    qmemcpy(v41, v114, 4 * v83);
                    v1 = v113;
LABEL_120:
                    v48 = *(_DWORD *)(v5 + 44);
                    if ( (v48 & 0x101) == 0x100 )
                    {
                      v95 = 0;
                      v96 = 0;
                      v97 = 0;
                      v49 = v48 | 1;
                      *(_DWORD *)(v5 + 44) = v49;
                      if ( (v49 & 4) == 0 )
                      {
                        v110 = 0;
                        v91 = 33;
                        if ( (v49 & 0x400) != 0 )
                          v91 = 289;
                        v92 = *(_DWORD *)(v5 + 24);
                        v93 = *(_DWORD *)(v5 + 28);
                        v94 = v105;
                        v50 = *(_DWORD *)(v5 + 60);
                        v51 = KeGetCurrentThread();
                        v52 = W32GetThreadWin32Thread(v51);
                        v108 = *(_DWORD *)(v52 + 228);
                        *(_DWORD *)(v52 + 228) = &v108;
                        v109 = v50;
                        if ( v50 )
                          HMLockObject(v50);
                        xxxInterSendMsgEx(0, 0, 0, *(_DWORD *)(v5 + 32), (int)&v91, 1u, *(_DWORD *)(v5 + 44) & 0x10000);
                        ThreadUnlock1();
                      }
                    }
                    v9 = v104;
                    if ( !v104 )
                      ThreadUnlock1();
                    v1[69] = v87;
                    v53 = (unsigned int *)v1[61];
                    v54 = *v53;
                    if ( v87 )
                      v55 = v54 | 2;
                    else
                      v55 = v54 & 0xFFFFFFFD;
                    *v53 = v55;
                    v79 = (unsigned int *)v1[61];
                    v80 = *v79;
                    if ( v86 )
                      v81 = v80 | 8;
                    else
                      v81 = v80 & 0xFFFFFFF7;
                    *v79 = v81;
                    goto LABEL_185;
                  }
                }
                v83 = 5;
LABEL_118:
                v41 = v106;
                goto LABEL_119;
              }
LABEL_81:
              v39 = (int *)v24[2];
              goto LABEL_82;
            }
LABEL_78:
            UserSetLastError(87);
            v106 = 0;
            v24 = v112;
            goto LABEL_79;
          }
LABEL_63:
          v106 = 0;
          v28 = PsGetCurrentProcessWin32Process;
          goto LABEL_81;
        }
        if ( !v25 )
          goto LABEL_79;
        qmemcpy(v114, v25, 0x18u);
        v28 = PsGetCurrentProcessWin32Process;
        v29 = PsGetCurrentProcessWin32Process();
        v30 = *(_DWORD *)(v5 + 72);
        if ( ((*(_DWORD *)(v29 + 156) >> 8) & 0x1FF) != ((v30 >> 8) & 0x1FF)
          || ((*(_DWORD *)(PsGetCurrentProcessWin32Process() + 156) & 0xF) != 2
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 156) & 0x20000000) == 0
            ? (v31 = 0)
            : (v31 = 1),
              (v30 = *(_DWORD *)(v5 + 72), (v30 & 0xF) != 2) || (v30 & 0x20000000) == 0 ? (v32 = 0) : (v32 = 1),
              v31 != v32) )
        {
          LogicalToPhysicalDPIPoint(v114, v114, v30, 0);
          v33 = PsGetCurrentProcessWin32Process();
          PhysicalToLogicalDPIPoint(v114, v114, *(_DWORD *)(v33 + 156), 0);
        }
      }
      v1 = v113;
      v24 = v112;
      goto LABEL_80;
    }
    v98 = *(_DWORD *)(_gptiCurrent + 808);
    *(_DWORD *)(_gptiCurrent + 808) = *(_DWORD *)(v5 + 68);
    if ( ((*(_BYTE *)(*(_DWORD *)v1[63] + 8) | *((_BYTE *)v1 + 372)) & 0x20) != 0 )
    {
      v56 = *(_DWORD *)(v5 + 56);
      v57 = v56 < 0x400 && ((unsigned __int16)MessageTable[v56] >> 14) & 1;
      if ( !v57 || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v5 + 60) + 20) + 10) & 4) == 0 )
      {
        v58 = *(int **)(v5 + 60);
        if ( v58 )
          v114[4] = *v58;
        else
          v114[4] = 0;
        v114[3] = v56;
        v114[2] = *(_DWORD *)(v5 + 48);
        v114[1] = *(_DWORD *)(v5 + 52);
        v114[5] = v5;
        xxxCallHook((int)&v114[1], 4u, (int)v84, (int)v85);
      }
    }
    if ( (*(_BYTE *)(v5 + 44) & 7) != 0 )
      goto LABEL_120;
    v59 = *(struct _KTHREAD **)(v5 + 60);
    v103 = v59;
    if ( !v59 )
      goto LABEL_120;
    v60 = 0;
    v107 = 0;
    ms_exc.registration.TryLevel = 0;
    v61 = (unsigned __int16)*(_DWORD *)v59;
    ms_exc.registration.TryLevel = -2;
    if ( v61 >= *(_DWORD *)(_gpsi + 4)
      || (v60 = _gSharedInfo[1] + v61 * _gSharedInfo[2], *(struct _KTHREAD **)(12 * v61 + _gpKernelHandleTable) != v59)
      || *(_BYTE *)(v60 + 12) != 1 )
    {
      KeBugCheckEx(0x197u, 1u, *(_DWORD *)(v5 + 60), v60, 1u);
    }
    v62 = *((_DWORD *)v59 + 5);
    v110 = 0;
    if ( (*(_BYTE *)(v62 + 10) & 4) == 0 )
    {
      v103 = KeGetCurrentThread();
      v71 = 0;
      if ( !IsThreadCrossSessionAttached() )
      {
        v72 = (int *)PsGetThreadWin32Thread(v103);
        if ( v72 )
          v71 = *v72;
      }
      v108 = *(_DWORD *)(v71 + 228);
      *(_DWORD *)(v71 + 228) = &v108;
      v109 = (int)v59;
      HMLockObject(v59);
      v73 = *(int **)(_gptiCurrent + 244);
      v74 = *v73;
      *v73 |= 0x10u;
      xxxSendMessageToClient(
        *(_DWORD *)(v5 + 56),
        *(_DWORD *)(v5 + 60),
        *(struct tagWND **)(v5 + 48),
        *(_DWORD *)(v5 + 52),
        v5,
        1,
        (struct tagSMS *)&v105,
        (int)v84,
        v85);
      **(_DWORD **)(_gptiCurrent + 244) ^= ((unsigned __int8)v74 ^ (unsigned __int8)**(_DWORD **)(_gptiCurrent + 244)) & 0x10;
      ThreadUnlock1();
      v1 = v113;
      goto LABEL_166;
    }
    memset(&v114[3], 0, 12);
    v111 = 0;
    v63 = KeGetCurrentThread();
    v64 = W32GetThreadWin32Thread(v63);
    v108 = *(_DWORD *)(v64 + 228);
    *(_DWORD *)(v64 + 228) = &v108;
    v109 = (int)v103;
    HMLockObject(v103);
    v65 = *(_DWORD *)(v5 + 56);
    if ( v65 >= 0x400 )
    {
      v66 = 0;
    }
    else
    {
      if ( (MessageTable[v65] & 0x200) == 0 && (v65 != 537 || (*(_DWORD *)(v5 + 48) & 0x8000) == 0) )
      {
LABEL_156:
        v68 = *(_DWORD *)(v5 + 60);
        v69 = *(_DWORD *)(*(_DWORD *)(v68 + 20) + 84);
        if ( v69 < 7 )
          v70 = ((int (__stdcall *)(int, int, int, int))(&gServerHandlers)[v69])(
                  v68,
                  *(_DWORD *)(v5 + 56),
                  *(_DWORD *)(v5 + 48),
                  *(_DWORD *)(v5 + 52));
        else
          v70 = 0;
        v105 = v70;
        if ( v111 )
          PopAndFreeW32ThreadLock((int)&v114[3]);
        ThreadUnlock1();
LABEL_166:
        if ( ((v1[93] | *(_DWORD *)(*(_DWORD *)v1[63] + 8)) & 0x2000) != 0 && (*(_BYTE *)(v5 + 44) & 4) == 0 )
        {
          v75 = *(_DWORD *)(v5 + 56);
          v76 = v75 < 0x400 && ((unsigned __int16)MessageTable[v75] >> 14) & 1;
          if ( !v76 || (v77 = *(_DWORD *)(v5 + 60)) != 0 && (*(_BYTE *)(*(_DWORD *)(v77 + 20) + 10) & 4) == 0 )
          {
            v78 = *(int **)(v5 + 60);
            if ( v78 )
              v96 = *v78;
            else
              v96 = 0;
            v95 = v75;
            v94 = *(_DWORD *)(v5 + 48);
            v93 = *(_DWORD *)(v5 + 52);
            v92 = v105;
            v97 = v5;
            xxxCallHook((int)&v92, 0xCu, (int)v84, (int)v85);
          }
        }
        *(_DWORD *)(_gptiCurrent + 808) = v98;
        goto LABEL_120;
      }
      v66 = 1;
    }
    if ( v66 )
    {
      *(_DWORD *)(v5 + 44) |= 0x20u;
      if ( v104 )
      {
        v111 = 1;
        v67 = (void *)*v104;
        PushW32ThreadLock(*v104, &v114[3], DereferenceKernelStack);
        ObfReferenceObject(v67);
        PsReferenceKernelStack(v67);
        v1 = v113;
      }
    }
    goto LABEL_156;
  }
LABEL_185:
  result = EtwTraceEndRetrieveSendMessage(v5);
  v82 = *(_DWORD *)(v5 + 44) & 0xFFFFBFFF;
  *(_DWORD *)(v5 + 44) = v82;
  if ( (v82 & 8) != 0 )
    return UnlinkSendListSms(v5);
  if ( (v82 & 1) == 0 )
  {
    result = v105;
    *(_DWORD *)(v5 + 36) = v105;
    *(_DWORD *)(v5 + 44) = v82 | 1;
    if ( v9 )
    {
      result = SetWakeBit(v9, 512);
      if ( (v9[66] & 2) != 0 || (v1[66] & 2) != 0 )
      {
        result = DirectedScheduleTask(0, v5);
        if ( (v1[66] & 2) != 0 && v9[68] == v5 )
          return xxxSleepTask(1, 0);
      }
    }
  }
  return result;
}
