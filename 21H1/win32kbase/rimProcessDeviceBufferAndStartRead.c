/*
 * XREFs of rimProcessDeviceBufferAndStartRead @ 0x1C017C48C
 * Callers:
 *     rimInputApc @ 0x1C0049940 (rimInputApc.c)
 *     rimCompleteReads @ 0x1C00A18A8 (rimCompleteReads.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C00A34A8 (rimFindPausedDeviceAndCompleteRead.c)
 *     RIMInjectInput @ 0x1C01604E0 (RIMInjectInput.c)
 *     RIMIDEInjectDeviceInput @ 0x1C017106C (RIMIDEInjectDeviceInput.c)
 *     RIMQueueKeyboardInput @ 0x1C0172830 (RIMQueueKeyboardInput.c)
 *     RIMQueueMouseInput @ 0x1C017295C (RIMQueueMouseInput.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C0173C7C (RIMIDE_InjectGenericHidInput.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B68AC (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004813C (RimDeviceTypeToRimInputTypeString.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C005170C (rimFreeAutoRepeatCompleteFrame.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00A01C0 (WPP_RECORDER_SF_qq.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C013310C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0145230 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ?ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015AB84 (-ResumeDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C015AC18 (-RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     rimIsPointerInputAllowed @ 0x1C015C094 (rimIsPointerInputAllowed.c)
 *     RIMIsInputSuppressed @ 0x1C016EB08 (RIMIsInputSuppressed.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C016EE8C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C0172AB0 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C017AC44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U3@U-$_tlgWrapperByVal@$0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1C017B25C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C017B6C4 (-PauseDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     rimProcessHidInput @ 0x1C017CA50 (rimProcessHidInput.c)
 *     rimProcessInjectedDeviceBuffers @ 0x1C017CB50 (rimProcessInjectedDeviceBuffers.c)
 *     rimProcessKeyboardInput @ 0x1C017CFBC (rimProcessKeyboardInput.c)
 *     rimProcessMouseInput @ 0x1C017D048 (rimProcessMouseInput.c)
 *     rimSignalReadComplete @ 0x1C017D180 (rimSignalReadComplete.c)
 *     RIMProcessAnyPointerDeviceInput @ 0x1C017F7AC (RIMProcessAnyPointerDeviceInput.c)
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C01859EC (rimObsRouteInputAndCheckForExclusiveObservers.c)
 *     RIMHandleTTMDeviceInput @ 0x1C01887FC (RIMHandleTTMDeviceInput.c)
 *     ApiSetEtwTracePointerDeviceReadStart @ 0x1C01D0FF8 (ApiSetEtwTracePointerDeviceReadStart.c)
 *     ApiSetEtwTracePointerDeviceReadStop @ 0x1C01D108C (ApiSetEtwTracePointerDeviceReadStop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimProcessDeviceBufferAndStartRead(struct RawInputManagerObject *a1, struct RIMDEV *a2, char a3)
{
  int v5; // edx
  unsigned int v6; // r13d
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v8; // r11d
  int *v9; // rsi
  LARGE_INTEGER v10; // r14
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // r11
  __int64 v16; // rax
  unsigned int v17; // ecx
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  int v25; // r15d
  char v26; // r12
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  int v32; // ecx
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  __int64 v36; // rcx
  char *v37; // rbx
  char *v38; // rdi
  char **v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v43; // [rsp+50h] [rbp-20h] BYREF
  const WCHAR *v44; // [rsp+58h] [rbp-18h] BYREF
  const WCHAR *v45; // [rsp+60h] [rbp-10h] BYREF
  const char *v46; // [rsp+68h] [rbp-8h] BYREF
  __int64 v47; // [rsp+B8h] [rbp+48h] BYREF
  char v48; // [rsp+C0h] [rbp+50h]
  __int64 v49; // [rsp+C8h] [rbp+58h] BYREF

  v48 = a3;
  if ( (unsigned int)RIMIsInputSuppressed((__int64)a2) || (*((_DWORD *)a2 + 50) & 0x40) != 0 || !gbTtmEnabled )
    v6 = 0;
  else
    v6 = RIMHandleTTMDeviceInput(a2);
  if ( (v6 & 0x80000000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_d((_DWORD)gRimLog, v5, 1, 23, (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids, v6);
    }
    v6 = 0;
  }
  ++*((_DWORD *)a2 + 573);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v8 = *((_DWORD *)a2 + 573);
  v9 = (int *)((char *)a2 + 2304);
  v10 = PerformanceCounter;
  v11 = 100 * (v8 / 0x64);
  if ( v8 == (_DWORD)v11 && (v12 = *v9) == 0
    || (v12 = *v9) != 0
    && (v11 = 600000 * gliQpcFreq.QuadPart,
        PerformanceCounter.QuadPart - *((_QWORD *)a2 + 287) >= 600000 * gliQpcFreq.QuadPart / 1000)
    && !(v8 % 0x64) )
  {
    v13 = v12;
    if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
    {
      if ( *((char *)a2 + 200) < 0 && (v16 = *((_QWORD *)a2 + 60)) != 0 )
        v17 = *(_DWORD *)(v16 + 720);
      else
        v17 = -1;
      LODWORD(v47) = v14 == 0;
      v18 = *((unsigned __int8 *)a2 + 48);
      v43 = v17;
      v49 = v15;
      v44 = RimDeviceTypeToRimInputTypeString((__int64)a2, v18);
      v45 = (const WCHAR *)*((_QWORD *)a2 + 27);
      v46 = "rimProcessDeviceBufferAndStartRead";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v19,
        byte_1C021D504,
        v20,
        v21,
        (void **)&v46,
        &v45,
        &v44,
        (__int64)&v43,
        (__int64)&v49,
        (__int64)&v47);
      v13 = *v9;
    }
    if ( !v13 )
      *v9 = 1;
    *((LARGE_INTEGER *)a2 + 287) = v10;
  }
  if ( (unsigned int)dword_1C024C960 > 5 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v47 = (__int64)InputTraceLogging::RimDevTypeToString(*((unsigned __int8 *)a2 + 48));
    v49 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C024C960,
      byte_1C021D4CE,
      v22,
      v23,
      (__int64)&v49,
      (void **)&v47);
  }
  v24 = *((_DWORD *)a2 + 46);
  v25 = -__CFSHR__(v24, 7);
  v26 = 0;
  if ( *((_BYTE *)a2 + 48) < 2u )
  {
    if ( (v24 & 0x2000) != 0 || __CFSHR__(*((_DWORD *)a2 + 46), 7) )
    {
      v26 = 1;
      RIMTransferInjectionDeviceDataFifoToDataBuffer(v11, (__int64)a2);
    }
  }
  else
  {
    if ( *((_BYTE *)a2 + 48) != 2 )
      return v6;
    if ( (v24 & 0x4000) == 0 && (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
    {
      if ( !(unsigned int)rimObsRouteInputAndCheckForExclusiveObservers(a2)
        && (*((_DWORD *)a2 + 50) & 0x80u) != 0
        && (unsigned int)rimIsPointerInputAllowed((__int64)a2) )
      {
        ApiSetEtwTracePointerDeviceReadStart();
        rimFreeAutoRepeatCompleteFrame((__int64)a2);
        RIMProcessAnyPointerDeviceInput(a1, a2);
        ApiSetEtwTracePointerDeviceReadStop();
      }
      v28 = *((_DWORD *)a2 + 46);
      if ( (v28 & 0x2000) == 0 && !v25 )
      {
        if ( (v28 & 0x200) != 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
        goto LABEL_84;
      }
      return v6;
    }
  }
  v29 = rimObsRouteInputAndCheckForExclusiveObservers(a2);
  v30 = 0LL;
  if ( v29 )
  {
    if ( (*((_DWORD *)a2 + 46) & 0x2000) == 0 && !v25 )
LABEL_84:
      RIMStartDeviceSpecificRead((HANDLE *)a1, (__int64)a2);
  }
  else if ( *((_BYTE *)a1 + 584)
         && ((*((_DWORD *)a2 + 46) & 0x200) != 0
          || *((struct RawInputManagerObject **)a1 + 74) == (struct RawInputManagerObject *)((char *)a1 + 592)) )
  {
    *((_BYTE *)a1 + 584) = 0;
    v31 = *((_DWORD *)a2 + 46);
    if ( (v31 & 0x200) != 0 )
    {
      InputTraceLogging::RIM::ResumeDevice(a2);
      v31 = *((_DWORD *)a2 + 46);
    }
    v32 = *((unsigned __int8 *)a2 + 48);
    *((_DWORD *)a2 + 46) = v31 & 0xFFFFFDFF;
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
          rimProcessHidInput(a1, a2);
        }
        else
        {
          *((_BYTE *)a1 + 584) = 1;
          InputTraceLogging::RIM::DropInput((__int64)a2);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 3;
            WPP_RECORDER_SF_d(
              (_DWORD)gRimLog,
              v34,
              1,
              24,
              (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
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
      v35 = *((_DWORD *)a2 + 46);
      if ( (v35 & 0x2000) != 0 || (v35 & 0x40) != 0 )
        rimProcessInjectedDeviceBuffers(a1, a2);
    }
    if ( *((_BYTE *)a1 + 584) && (*((_DWORD *)a2 + 46) & 0x2000) == 0 && !v25 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          (__int64)gRimLog,
          4u,
          1u,
          0x19u,
          (__int64)&WPP_9efa7cdda93c372db13b9b42dbad300f_Traceguids,
          a1,
          a2);
      DbgPrintGDI("FailSafeRead pRimObj(%p) pRimDev(%p)\n", a1, a2);
      goto LABEL_84;
    }
  }
  else if ( (*((_DWORD *)a2 + 46) & 0x200) != 0 )
  {
    if ( v48 )
    {
      if ( !v26 )
      {
        InputTraceLogging::RIM::DropInput((__int64)a2);
        if ( (*((_DWORD *)a2 + 46) & 0x2000) == 0
          && *((_BYTE *)a2 + 48) <= 1u
          && (unsigned int)dword_1C024B250 > 5
          && tlgKeywordOn((__int64)&dword_1C024B250, 0x400000000000LL) )
        {
          LOBYTE(v47) = v40;
          v49 = 0x1000000LL;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
            (__int64)&dword_1C024B250,
            byte_1C021D48F,
            v40,
            v41,
            (__int64)&v49,
            (__int64)&v47);
        }
      }
    }
    if ( *((struct RIMDEV **)a2 + 13) == (struct RIMDEV *)((char *)a2 + 104) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30);
  }
  else
  {
    InputTraceLogging::RIM::PauseDevice(a2);
    *((_DWORD *)a2 + 46) |= 0x200u;
    v37 = (char *)a2 + 104;
    if ( *(char **)v37 != v37 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
    v38 = (char *)a1 + 592;
    v39 = (char **)*((_QWORD *)v38 + 1);
    if ( *v39 != v38 )
      __fastfail(3u);
    *(_QWORD *)v37 = v38;
    *((_QWORD *)v37 + 1) = v39;
    *v39 = v37;
    *((_QWORD *)v38 + 1) = v37;
  }
  return v6;
}
