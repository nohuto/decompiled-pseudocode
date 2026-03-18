/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C017435C
 * Callers:
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0024060 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimCompleteReads @ 0x1C00268A8 (rimCompleteReads.c)
 *     RIMInjectInput @ 0x1C0157C30 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01687BC (RIMIDEInjectDeviceInput.c)
 *     RIMQueueKeyboardInput @ 0x1C0169F80 (RIMQueueKeyboardInput.c)
 *     RIMQueueMouseInput @ 0x1C016A0AC (RIMQueueMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016B3CC (RIMIDE_InjectGenericHidInput.c)
 *     rimInputApc @ 0x1C01739B0 (rimInputApc.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01AE7CC (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0020CCC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0077870 (WPP_RECORDER_SF_qq.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C00B5C88 (RimDeviceTypeToRimInputTypeString.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00BF6BC (rimFreeAutoRepeatCompleteFrame.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012ADCC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013CB90 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01522D4 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0152368 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C01537E4 (rimIsPointerInputAllowed.c)
 *     RIMIsInputSuppressed @ 0x1C0166258 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C01665DC (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A200 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C01724E4 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0172AFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0172F64 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C0174920 (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0174A20 (rimProcessInjectedDeviceBuffers.c)
 *     rimProcessKeyboardInput @ 0x1C0174E8C (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C0174F18 (rimProcessMouseInput.c)
 *     rimSignalReadComplete @ 0x1C0175050 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C017767C (RIMProcessAnyPointerDeviceInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017D8BC (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01805BC (RIMHandleTTMDeviceInput.c)
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C01C8CF8 (ApiSetEtwTracePointerDeviceReadStart.c)
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C01C8D8C (ApiSetEtwTracePointerDeviceReadStop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  int v5; // edx
  unsigned int v6; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v8; // r8
  unsigned int v9; // r11d
  _DWORD *v10; // rsi
  LARGE_INTEGER v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rax
  unsigned int v16; // ecx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24; // r15d
  char v25; // r12
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // edx
  int v38; // edx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  char *v44; // rbx
  char *v45; // rdi
  char **v46; // rax
  __int64 v48; // [rsp+50h] [rbp-20h] BYREF
  const WCHAR *v49; // [rsp+58h] [rbp-18h] BYREF
  const WCHAR *v50; // [rsp+60h] [rbp-10h] BYREF
  const char *v51; // [rsp+68h] [rbp-8h] BYREF
  __int64 v52; // [rsp+B8h] [rbp+48h] BYREF
  char v53; // [rsp+C0h] [rbp+50h]
  __int64 v54; // [rsp+C8h] [rbp+58h] BYREF

  v53 = a3;
  if ( (unsigned int)RIMIsInputSuppressed((__int64)a2) || (*((_DWORD *)a2 + 50) & 0x40) != 0 || !gbTtmEnabled )
    v6 = 0;
  else
    v6 = RIMHandleTTMDeviceInput(a2);
  if ( (v6 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v5, 1, 23, (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids, v6);
    }
    v6 = 0;
  }
  ++*((_DWORD *)a2 + 575);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = *((_DWORD *)a2 + 575);
  v10 = (_DWORD *)((char *)a2 + 2312);
  v11 = PerformanceCounter;
  v12 = 100 * (v9 / 0x64);
  if ( v9 == (_DWORD)v12 && (v13 = (unsigned int)*v10, !(_DWORD)v13)
    || (v13 = (unsigned int)*v10, (_DWORD)v13)
    && (v12 = 600000 * gliQpcFreq.QuadPart,
        v8.QuadPart = PerformanceCounter.QuadPart - *((_QWORD *)a2 + 288),
        v8.QuadPart >= 600000 * gliQpcFreq.QuadPart / 1000)
    && !(v9 % 0x64) )
  {
    v8.QuadPart = (unsigned int)v13;
    if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 0x400000000000LL) )
    {
      if ( *((char *)a2 + 200) < 0 && (v15 = *((_QWORD *)a2 + 60)) != 0 )
        v16 = *(_DWORD *)(v15 + 720);
      else
        v16 = -1;
      LODWORD(v52) = v13 == 0;
      v17 = *((unsigned __int8 *)a2 + 48);
      v48 = v16;
      v54 = v14;
      v49 = RimDeviceTypeToRimInputTypeString((__int64)a2, v17);
      v50 = (const WCHAR *)*((_QWORD *)a2 + 27);
      v51 = "rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v18,
        byte_1C0215B25,
        v19,
        v20,
        (void **)&v51,
        &v50,
        &v49,
        (__int64)&v48,
        (__int64)&v54,
        (__int64)&v52);
      v8.QuadPart = (unsigned int)*v10;
    }
    if ( !v8.LowPart )
      *v10 = 1;
    *((LARGE_INTEGER *)a2 + 288) = v11;
  }
  if ( (unsigned int)dword_1C0244A70 > 5 && tlgKeywordOn((__int64)&dword_1C0244A70, 256LL) )
  {
    v52 = (__int64)InputTraceLogging::RimDevTypeToString(*((unsigned __int8 *)a2 + 48));
    v54 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0244A70,
      byte_1C0215AEF,
      v21,
      v22,
      (__int64)&v54,
      (void **)&v52);
  }
  v23 = *((_DWORD *)a2 + 46);
  v24 = -__CFSHR__(v23, 7);
  v25 = 0;
  if ( *((_BYTE *)a2 + 48) < 2u )
  {
    if ( (v23 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 46), 7) )
    {
      v25 = 1;
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v12, (__int64)a2, v8.QuadPart, v13);
    }
  }
  else
  {
    if ( *((_BYTE *)a2 + 48) != 2 )
      return v6;
    if ( (v23 & 0x4000) == 0 && (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
    {
      if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
        && (*((_DWORD *)a2 + 50) & 0x80u) != 0
        && (unsigned int)rimIsPointerInputAllowed((__int64)a2, v26, v28, v29) )
      {
        ApiSetEtwTracePointerDeviceReadStart();
        rimFreeAutoRepeatCompleteFrame((__int64)a2);
        RIMProcessAnyPointerDeviceInput(a1, a2);
        ApiSetEtwTracePointerDeviceReadStop();
      }
      v30 = *((_DWORD *)a2 + 46);
      if ( (v30 & 0x2000) == 0 && !v24 )
      {
        if ( (v30 & 0x200) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28, v29);
        goto LABEL_84;
      }
      return v6;
    }
  }
  v31 = rimObsRouteInputAndCheckForExclusiveObservers(a2);
  v33 = 0LL;
  if ( v31 )
  {
    if ( (*((_DWORD *)a2 + 46) & 0x2000) == 0 && !v24 )
LABEL_84:
      RIMStartDeviceSpecificRead((HANDLE *)a1, (__int64)a2, v28, v29);
  }
  else if ( *((_BYTE *)a1 + 584)
         && ((*((_DWORD *)a2 + 46) & 0x200) != 0
          || *((struct RawInputManagerObject **)a1 + 74) == (struct RawInputManagerObject *)((char *)a1 + 592)) )
  {
    *((_BYTE *)a1 + 584) = 0;
    v34 = *((_DWORD *)a2 + 46);
    if ( (v34 & 0x200) != 0 )
    {
      InputTraceLogging::RIM::ResumeDevice(a2);
      v34 = *((_DWORD *)a2 + 46);
    }
    v35 = *((unsigned __int8 *)a2 + 48);
    *((_DWORD *)a2 + 46) = v34 & 0xFFFFFDFF;
    if ( v35 )
    {
      v36 = v35 - 1;
      if ( v36 )
      {
        if ( v36 == 1 )
        {
          rimProcessHidInput(a1, a2);
        }
        else
        {
          *((_BYTE *)a1 + 584) = 1;
          InputTraceLogging::RIM::DropInput((__int64)a2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v37) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v37,
              1,
              24,
              (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
              *((_BYTE *)a2 + 48));
          }
        }
      }
      else
      {
        rimProcessKeyboardInput(a1, a2);
      }
    }
    else
    {
      rimProcessMouseInput(a1, a2);
    }
    rimSignalReadComplete(a1, a2);
    if ( *((_BYTE *)a2 + 48) <= 1u )
    {
      v39 = *((_DWORD *)a2 + 46);
      if ( (v39 & 0x2000) != 0 || (v39 & 0x40) != 0 )
        rimProcessInjectedDeviceBuffers(a1, a2);
    }
    if ( *((_BYTE *)a1 + 584) && (*((_DWORD *)a2 + 46) & 0x2000) == 0 && !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v38) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v38,
          1,
          25,
          (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
          (char)a1,
          (char)a2);
      }
      DbgPrintGDI("FailSafeRead pRimObj(%p) pRimDev(%p)\n", a1, a2);
      goto LABEL_84;
    }
  }
  else if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    if ( v53 )
    {
      if ( !v25 )
      {
        InputTraceLogging::RIM::DropInput((__int64)a2);
        if ( (*((_DWORD *)a2 + 46) & 0x2000) == 0 )
        {
          LOBYTE(v28) = *((_BYTE *)a2 + 48);
          if ( (unsigned __int8)v28 <= 1u
            && (unsigned int)dword_1C0243250 > 5
            && tlgKeywordOn((__int64)&dword_1C0243250, 0x400000000000LL) )
          {
            LOBYTE(v52) = v28;
            v54 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
              (__int64)&dword_1C0243250,
              byte_1C0215AB0,
              v28,
              v29,
              (__int64)&v54,
              (__int64)&v52);
          }
        }
      }
    }
    if ( *((struct RIMDEV **)a2 + 13) == (struct RIMDEV *)((char *)a2 + 104) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v28, v29);
  }
  else
  {
    InputTraceLogging::RIM::PauseDevice(a2);
    *((_DWORD *)a2 + 46) |= 0x200u;
    v44 = (char *)a2 + 104;
    if ( *(char **)v44 != v44 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v41, v40, v42, v43);
    v45 = (char *)a1 + 592;
    v46 = (char **)*((_QWORD *)v45 + 1);
    if ( *v46 != v45 )
      __fastfail(3u);
    *(_QWORD *)v44 = v45;
    *((_QWORD *)v44 + 1) = v46;
    *v46 = v44;
    *((_QWORD *)v45 + 1) = v44;
  }
  return v6;
}
