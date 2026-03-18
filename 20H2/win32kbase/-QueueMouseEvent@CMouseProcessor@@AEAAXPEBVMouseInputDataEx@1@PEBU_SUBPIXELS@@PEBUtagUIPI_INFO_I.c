/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035B88
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00359EC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     IsEqualInputSource @ 0x1C0032D10 (IsEqualInputSource.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0035F38 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0036088 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C0036160 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C003620C (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0036280 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     EtwTraceMouseInputCoalesced @ 0x1C00BF0C0 (EtwTraceMouseInputCoalesced.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C00BF0E0 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C017E084 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01B9C98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct CMouseProcessor::RawMouseEvent *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  char v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  char v35; // [rsp+50h] [rbp-31h]
  char v36; // [rsp+51h] [rbp-30h]
  __int64 v37; // [rsp+58h] [rbp-29h] BYREF
  int v38; // [rsp+60h] [rbp-21h] BYREF
  int v39; // [rsp+64h] [rbp-1Dh] BYREF
  const struct _SUBPIXELS *v40; // [rsp+68h] [rbp-19h] BYREF
  __int128 v41; // [rsp+70h] [rbp-11h] BYREF
  __int64 v42; // [rsp+80h] [rbp-1h] BYREF
  int v43; // [rsp+88h] [rbp+7h]

  v40 = a3;
  v35 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL);
  v8 = 0;
  v36 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 256LL);
  v9 = 0;
  v42 = 0LL;
  v43 = 0;
  if ( v35 )
  {
    v26 = qword_1C0251808 ? qword_1C0251808() : -1073741637;
    if ( v26 >= 0 )
    {
      v27 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL);
      if ( a4 )
      {
        if ( v27 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30, v31);
        v32 = *((_DWORD *)a4 + 2);
        v42 = *(_QWORD *)a4;
        v43 = v32;
      }
      else
      {
        if ( v27 )
          goto LABEL_2;
        if ( qword_1C0251810 )
          qword_1C0251810(&v42);
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
  v37 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v37);
  v13 = v37;
  if ( v12
    && !v12[14]
    && IsEqualInputSource((_DWORD *)v12 + 26, &v37)
    && !*((_WORD *)a2 + 2)
    && (*((_BYTE *)a2 + 2) & 8) == 0 )
  {
    v8 = *(_QWORD *)(v12 + 74) == *((_QWORD *)a2 + 10);
  }
  v14 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor::CMouseQueue *)v11, v8);
  v19 = v14;
  if ( v8 )
  {
    if ( !v14 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v15,
        6,
        19,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    EtwTraceMouseInputCoalesced();
    InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
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
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    *((_WORD *)v19 + 12) = *(_WORD *)a2;
    *((_WORD *)v19 + 14) = *((_WORD *)a2 + 2);
    *((_WORD *)v19 + 15) = *((_WORD *)a2 + 3);
    *((_DWORD *)v19 + 8) = *((_DWORD *)a2 + 2);
    *((_WORD *)v19 + 18) = *((_WORD *)a2 + 1);
    *((_QWORD *)v19 + 13) = v13;
    *((_DWORD *)v19 + 39) = *((_DWORD *)a2 + 18);
    *(_QWORD *)((char *)v19 + 148) = *((_QWORD *)a2 + 10);
LABEL_10:
    *(_OWORD *)v19 = *(_OWORD *)((char *)a2 + 24);
    *((_QWORD *)v19 + 2) = *((_QWORD *)a2 + 5);
    *((_DWORD *)v19 + 10) = *((_DWORD *)a2 + 5);
    *(_QWORD *)((char *)v19 + 60) = 0LL;
    if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL) )
    {
      v37 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v19 + 52) = v37;
      *(_QWORD *)((char *)v19 + 44) = 0LL;
    }
    else
    {
      *(struct tagPOINT *)((char *)v19 + 52) = gptCursorAsync;
      v37 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v19 + 44) = v37;
      if ( v40 )
        *(_QWORD *)((char *)v19 + 60) = *(_QWORD *)v40;
    }
    *(_QWORD *)((char *)v19 + 68) = *(_QWORD *)((char *)v19 + 52);
    *((_OWORD *)v19 + 5) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v19 + 12) = *((_QWORD *)a2 + 8);
    *((_DWORD *)v19 + 28) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
    if ( v9 )
    {
      if ( !v35 || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
      *(_QWORD *)&v41 = v42;
      DWORD2(v41) = v43;
      BYTE12(v41) = 1;
      *(_OWORD *)((char *)v19 + 116) = v41;
    }
    if ( a5 )
    {
      *((_DWORD *)v19 + 28) |= 0x4000u;
      *(struct tagPOINT *)((char *)v19 + 68) = *a5;
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)dword_1C0244A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, v24, v25) )
    {
      v38 = *((unsigned __int16 *)v19 + 15);
      v39 = *((unsigned __int16 *)v19 + 14);
      LODWORD(v40) = *((_DWORD *)v19 + 14);
      LODWORD(v37) = *((_DWORD *)v19 + 13);
      *(_QWORD *)&v41 = *((_QWORD *)v19 + 11);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C0244A70,
        (unsigned int)&unk_1C0219AC8,
        v33,
        v34,
        (__int64)&v41,
        (__int64)&v37,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38);
    }
    if ( v36 )
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
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  }
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  ApiSetEditionInitiateMouseEventProcessing(1LL);
  InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 7), 5LL);
}
