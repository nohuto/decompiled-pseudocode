/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C017678C
 * Callers:
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C005B608 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimCompleteReads @ 0x1C00AB9B0 (rimCompleteReads.c)
 *     RIMInjectInput @ 0x1C015A190 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C016AD1C (RIMIDEInjectDeviceInput.c)
 *     RIMQueueKeyboardInput @ 0x1C016C4E0 (RIMQueueKeyboardInput.c)
 *     RIMQueueMouseInput @ 0x1C016C60C (RIMQueueMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C016D92C (RIMIDE_InjectGenericHidInput.c)
 *     rimInputApc @ 0x1C0175DE0 (rimInputApc.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B0B4C (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 * Callees:
 *     RIMStartDeviceSpecificRead @ 0x1C0015ACC (RIMStartDeviceSpecificRead.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0055BBC (RimDeviceTypeToRimInputTypeString.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C005F37C (rimFreeAutoRepeatCompleteFrame.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00ADEB0 (WPP_RECORDER_SF_qq.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012D11C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013EEE0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0154834 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01548C8 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C0155D44 (rimIsPointerInputAllowed.c)
 *     RIMIsInputSuppressed @ 0x1C01687B8 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C0168B3C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016C760 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0174914 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C0174F2C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0175394 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C0176D50 (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C0176E50 (rimProcessInjectedDeviceBuffers.c)
 *     rimProcessKeyboardInput @ 0x1C01772BC (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C0177348 (rimProcessMouseInput.c)
 *     rimSignalReadComplete @ 0x1C0177480 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C0179AAC (RIMProcessAnyPointerDeviceInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C017FCEC (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     RIMHandleTTMDeviceInput @ 0x1C0182AFC (RIMHandleTTMDeviceInput.c)
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C01CB078 (ApiSetEtwTracePointerDeviceReadStart.c)
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C01CB10C (ApiSetEtwTracePointerDeviceReadStop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  char *v43; // rbx
  char *v44; // rdi
  char **v45; // rax
  __int64 v47; // [rsp+50h] [rbp-20h] BYREF
  const WCHAR *v48; // [rsp+58h] [rbp-18h] BYREF
  const WCHAR *v49; // [rsp+60h] [rbp-10h] BYREF
  const char *v50; // [rsp+68h] [rbp-8h] BYREF
  __int64 v51; // [rsp+B8h] [rbp+48h] BYREF
  char v52; // [rsp+C0h] [rbp+50h]
  __int64 v53; // [rsp+C8h] [rbp+58h] BYREF

  v52 = a3;
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
  ++*((_DWORD *)a2 + 573);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = *((_DWORD *)a2 + 573);
  v10 = (_DWORD *)((char *)a2 + 2304);
  v11 = PerformanceCounter;
  v12 = 100 * (v9 / 0x64);
  if ( v9 == (_DWORD)v12 && (v13 = (unsigned int)*v10, !(_DWORD)v13)
    || (v13 = (unsigned int)*v10, (_DWORD)v13)
    && (v12 = 600000 * gliQpcFreq.QuadPart,
        v8.QuadPart = PerformanceCounter.QuadPart - *((_QWORD *)a2 + 287),
        v8.QuadPart >= 600000 * gliQpcFreq.QuadPart / 1000)
    && !(v9 % 0x64) )
  {
    v8.QuadPart = (unsigned int)v13;
    if ( (unsigned int)dword_1C0245170 > 5 && tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
    {
      if ( *((char *)a2 + 200) < 0 && (v15 = *((_QWORD *)a2 + 60)) != 0 )
        v16 = *(_DWORD *)(v15 + 720);
      else
        v16 = -1;
      LODWORD(v51) = v13 == 0;
      v17 = *((unsigned __int8 *)a2 + 48);
      v47 = v16;
      v53 = v14;
      v48 = RimDeviceTypeToRimInputTypeString((__int64)a2, v17);
      v49 = (const WCHAR *)*((_QWORD *)a2 + 27);
      v50 = "rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v18,
        byte_1C0217994,
        v19,
        v20,
        (void **)&v50,
        &v49,
        &v48,
        (__int64)&v47,
        (__int64)&v53,
        (__int64)&v51);
      v8.QuadPart = (unsigned int)*v10;
    }
    if ( !v8.LowPart )
      *v10 = 1;
    *((LARGE_INTEGER *)a2 + 287) = v11;
  }
  if ( (unsigned int)dword_1C0246A70 > 5 && tlgKeywordOn((__int64)&dword_1C0246A70, 256LL) )
  {
    v51 = (__int64)InputTraceLogging::RimDevTypeToString(*((unsigned __int8 *)a2 + 48));
    v53 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0246A70,
      byte_1C021795E,
      v21,
      v22,
      (__int64)&v53,
      (void **)&v51);
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
      v38 = *((_DWORD *)a2 + 46);
      if ( (v38 & 0x2000) != 0 || (v38 & 0x40) != 0 )
        rimProcessInjectedDeviceBuffers(a1, a2);
    }
    if ( *((_BYTE *)a1 + 584) && (*((_DWORD *)a2 + 46) & 0x2000) == 0 && !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          (__int64)gRimLog,
          4u,
          1u,
          0x19u,
          (__int64)&WPP_0d925eab253539aeb97635bf94432844_Traceguids,
          a1,
          a2);
      DbgPrintGDI("FailSafeRead pRimObj(%p) pRimDev(%p)\n", a1, a2);
      goto LABEL_84;
    }
  }
  else if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    if ( v52 )
    {
      if ( !v25 )
      {
        InputTraceLogging::RIM::DropInput((__int64)a2);
        if ( (*((_DWORD *)a2 + 46) & 0x2000) == 0 )
        {
          LOBYTE(v28) = *((_BYTE *)a2 + 48);
          if ( (unsigned __int8)v28 <= 1u
            && (unsigned int)dword_1C0245250 > 5
            && tlgKeywordOn((__int64)&dword_1C0245250, 0x400000000000LL) )
          {
            LOBYTE(v51) = v28;
            v53 = 0x1000000LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
              (__int64)&dword_1C0245250,
              byte_1C021791F,
              v28,
              v29,
              (__int64)&v53,
              (__int64)&v51);
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
    v43 = (char *)a2 + 104;
    if ( *(char **)v43 != v43 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
    v44 = (char *)a1 + 592;
    v45 = (char **)*((_QWORD *)v44 + 1);
    if ( *v45 != v44 )
      __fastfail(3u);
    *(_QWORD *)v43 = v44;
    *((_QWORD *)v43 + 1) = v45;
    *v45 = v43;
    *((_QWORD *)v44 + 1) = v43;
  }
  return v6;
}
