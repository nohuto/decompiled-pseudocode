/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0065ABC
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0065920 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     EtwTraceMouseInputCoalesced @ 0x1C0051370 (EtwTraceMouseInputCoalesced.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C0051390 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     IsEqualInputSource @ 0x1C0062AF0 (IsEqualInputSource.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0065E6C (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0065FBC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C0069264 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0069310 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0069384 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C01861B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01C1D68 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _SUBPIXELS *a3,
        const struct tagUIPI_INFO_INT *a4,
        const struct tagPOINT *a5)
{
  bool v8; // r14
  char v9; // r12
  char *v10; // r13
  unsigned __int16 *v11; // r15
  unsigned __int16 *v12; // rdi
  __int64 v13; // rbx
  struct CMouseProcessor::RawMouseEvent *v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  struct CMouseProcessor::RawMouseEvent *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  char v22; // al
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  int v28; // r8d
  int v29; // r9d
  char v30; // [rsp+50h] [rbp-31h]
  char v31; // [rsp+51h] [rbp-30h]
  __int64 v32; // [rsp+58h] [rbp-29h] BYREF
  int v33; // [rsp+60h] [rbp-21h] BYREF
  int v34; // [rsp+64h] [rbp-1Dh] BYREF
  const struct _SUBPIXELS *v35; // [rsp+68h] [rbp-19h] BYREF
  __int128 v36; // [rsp+70h] [rbp-11h] BYREF
  __int64 v37; // [rsp+80h] [rbp-1h] BYREF
  int v38; // [rsp+88h] [rbp+7h]

  v35 = a3;
  v30 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL);
  v8 = 0;
  v31 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 256LL);
  v9 = 0;
  v37 = 0LL;
  v38 = 0;
  if ( v30 )
  {
    v21 = qword_1C02597C8 ? qword_1C02597C8() : -1073741637;
    if ( v21 >= 0 )
    {
      v22 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL);
      if ( a4 )
      {
        if ( v22 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
        v27 = *((_DWORD *)a4 + 2);
        v37 = *(_QWORD *)a4;
        v38 = v27;
      }
      else
      {
        if ( v22 )
          goto LABEL_2;
        if ( qword_1C02597D0 )
          qword_1C02597D0(&v37);
      }
      v9 = 1;
    }
  }
LABEL_2:
  v10 = (char *)this + 2776;
  RIMLockExclusive((char *)this + 2776);
  v11 = (unsigned __int16 *)((char *)this + 80);
  if ( v11[1345] )
    v12 = &v11[84 * v11[1344]];
  else
    v12 = 0LL;
  v32 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v32);
  v13 = v32;
  if ( v12
    && !v12[14]
    && IsEqualInputSource((_DWORD *)v12 + 26, &v32)
    && !*((_WORD *)a2 + 2)
    && (*((_BYTE *)a2 + 2) & 8) == 0 )
  {
    v8 = *(_QWORD *)(v12 + 74) == *((_QWORD *)a2 + 10);
  }
  v14 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor::CMouseQueue *)v11, v8);
  v17 = v14;
  if ( v8 )
  {
    if ( !v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        6,
        19,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    EtwTraceMouseInputCoalesced(v16);
    InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7), v24, v25, v26);
    goto LABEL_10;
  }
  if ( v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        6,
        21,
        (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
    }
    *((_WORD *)v17 + 12) = *(_WORD *)a2;
    *((_WORD *)v17 + 14) = *((_WORD *)a2 + 2);
    *((_WORD *)v17 + 15) = *((_WORD *)a2 + 3);
    *((_DWORD *)v17 + 8) = *((_DWORD *)a2 + 2);
    *((_WORD *)v17 + 18) = *((_WORD *)a2 + 1);
    *((_QWORD *)v17 + 13) = v13;
    *((_DWORD *)v17 + 39) = *((_DWORD *)a2 + 18);
    *(_QWORD *)((char *)v17 + 148) = *((_QWORD *)a2 + 10);
LABEL_10:
    *(_OWORD *)v17 = *(_OWORD *)((char *)a2 + 24);
    *((_QWORD *)v17 + 2) = *((_QWORD *)a2 + 5);
    *((_DWORD *)v17 + 10) = *((_DWORD *)a2 + 5);
    *(_QWORD *)((char *)v17 + 60) = 0LL;
    if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL) )
    {
      v32 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v17 + 52) = v32;
      *(_QWORD *)((char *)v17 + 44) = 0LL;
    }
    else
    {
      *(struct tagPOINT *)((char *)v17 + 52) = gptCursorAsync;
      v32 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v17 + 44) = v32;
      if ( v35 )
        *(_QWORD *)((char *)v17 + 60) = *(_QWORD *)v35;
    }
    *(_QWORD *)((char *)v17 + 68) = *(_QWORD *)((char *)v17 + 52);
    *((_OWORD *)v17 + 5) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v17 + 12) = *((_QWORD *)a2 + 8);
    *((_DWORD *)v17 + 28) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
    if ( v9 )
    {
      if ( !v30 || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
      *(_QWORD *)&v36 = v37;
      DWORD2(v36) = v38;
      BYTE12(v36) = 1;
      *(_OWORD *)((char *)v17 + 116) = v36;
    }
    if ( a5 )
    {
      *((_DWORD *)v17 + 28) |= 0x4000u;
      *(struct tagPOINT *)((char *)v17 + 68) = *a5;
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 64LL, v19, v20) )
    {
      v33 = *((unsigned __int16 *)v17 + 15);
      v34 = *((unsigned __int16 *)v17 + 14);
      LODWORD(v35) = *((_DWORD *)v17 + 14);
      LODWORD(v32) = *((_DWORD *)v17 + 13);
      *(_QWORD *)&v36 = *((_QWORD *)v17 + 11);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C024C960,
        (unsigned int)&unk_1C02214A7,
        v28,
        v29,
        (__int64)&v36,
        (__int64)&v32,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v33);
    }
    if ( v31 )
      ApiSetEditionInitiateMouseEventProcessing(0LL);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v15,
      6,
      20,
      (__int64)&WPP_b12bc820a1813372973d31fc87fa3901_Traceguids);
  }
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  ApiSetEditionInitiateMouseEventProcessing(1LL);
  InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 7), 5LL);
}
