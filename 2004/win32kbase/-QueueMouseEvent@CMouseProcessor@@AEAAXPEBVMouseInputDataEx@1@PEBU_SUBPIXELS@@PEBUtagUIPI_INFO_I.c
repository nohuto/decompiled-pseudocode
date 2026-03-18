/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C007169C
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0071500 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     EtwTraceMouseInputCoalesced @ 0x1C005ED90 (EtwTraceMouseInputCoalesced.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C005EDB0 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     IsEqualInputSource @ 0x1C006DE10 (IsEqualInputSource.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0071330 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C00713E0 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x1C0071454 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1C0071A4C (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0071B9C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1C01804B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C01BC008 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  struct CMouseProcessor::RawMouseEvent *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct CMouseProcessor::RawMouseEvent *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // eax
  int v37; // r8d
  int v38; // r9d
  char v39; // [rsp+50h] [rbp-31h]
  char v40; // [rsp+51h] [rbp-30h]
  __int64 v41; // [rsp+58h] [rbp-29h] BYREF
  int v42; // [rsp+60h] [rbp-21h] BYREF
  int v43; // [rsp+64h] [rbp-1Dh] BYREF
  const struct _SUBPIXELS *v44; // [rsp+68h] [rbp-19h] BYREF
  __int128 v45; // [rsp+70h] [rbp-11h] BYREF
  __int64 v46; // [rsp+80h] [rbp-1h] BYREF
  int v47; // [rsp+88h] [rbp+7h]

  v44 = a3;
  v39 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL);
  v8 = 0;
  v40 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 256LL);
  v9 = 0;
  v46 = 0LL;
  v47 = 0;
  if ( v39 )
  {
    v27 = qword_1C0253808 ? qword_1C0253808() : -1073741637;
    if ( v27 >= 0 )
    {
      v28 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL);
      if ( a4 )
      {
        if ( v28 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31, v32);
        v36 = *((_DWORD *)a4 + 2);
        v46 = *(_QWORD *)a4;
        v47 = v36;
      }
      else
      {
        if ( v28 )
          goto LABEL_2;
        if ( qword_1C0253810 )
          qword_1C0253810(&v46);
      }
      v9 = 1;
    }
  }
LABEL_2:
  v10 = (char *)this + 2776;
  RIMLockExclusive((__int64)this + 2776);
  v11 = (unsigned __int16 *)((char *)this + 80);
  if ( v11[1345] )
    v12 = &v11[84 * v11[1344]];
  else
    v12 = 0LL;
  v41 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v41);
  v16 = v41;
  if ( v12
    && !v12[14]
    && IsEqualInputSource((_DWORD *)v12 + 26, &v41)
    && !*((_WORD *)a2 + 2)
    && (*((_BYTE *)a2 + 2) & 8) == 0 )
  {
    v13 = *(_QWORD *)(v12 + 74);
    v8 = v13 == *((_QWORD *)a2 + 10);
  }
  LOBYTE(v13) = v8;
  v17 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor::CMouseQueue *)v11, v13, v14, v15);
  v22 = v17;
  if ( v8 )
  {
    if ( !v17 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20, v21);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v18,
        6,
        19,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
    EtwTraceMouseInputCoalesced(v19);
    InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7), v33, v34, v35);
    goto LABEL_10;
  }
  if ( v17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v18,
        6,
        21,
        (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
    }
    *((_WORD *)v22 + 12) = *(_WORD *)a2;
    *((_WORD *)v22 + 14) = *((_WORD *)a2 + 2);
    *((_WORD *)v22 + 15) = *((_WORD *)a2 + 3);
    *((_DWORD *)v22 + 8) = *((_DWORD *)a2 + 2);
    *((_WORD *)v22 + 18) = *((_WORD *)a2 + 1);
    *((_QWORD *)v22 + 13) = v16;
    *((_DWORD *)v22 + 39) = *((_DWORD *)a2 + 18);
    *(_QWORD *)((char *)v22 + 148) = *((_QWORD *)a2 + 10);
LABEL_10:
    *(_OWORD *)v22 = *(_OWORD *)((char *)a2 + 24);
    *((_QWORD *)v22 + 2) = *((_QWORD *)a2 + 5);
    *((_DWORD *)v22 + 10) = *((_DWORD *)a2 + 5);
    *(_QWORD *)((char *)v22 + 60) = 0LL;
    if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x8000LL) )
    {
      v41 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v22 + 52) = v41;
      *(_QWORD *)((char *)v22 + 44) = 0LL;
    }
    else
    {
      *(struct tagPOINT *)((char *)v22 + 52) = gptCursorAsync;
      v41 = *(_QWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)v22 + 44) = v41;
      if ( v44 )
        *(_QWORD *)((char *)v22 + 60) = *(_QWORD *)v44;
    }
    *(_QWORD *)((char *)v22 + 68) = *(_QWORD *)((char *)v22 + 52);
    *((_OWORD *)v22 + 5) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v22 + 12) = *((_QWORD *)a2 + 8);
    *((_DWORD *)v22 + 28) = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
    if ( v9 )
    {
      if ( !v39 || (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1LL) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25, v26);
      *(_QWORD *)&v45 = v46;
      DWORD2(v45) = v47;
      BYTE12(v45) = 1;
      *(_OWORD *)((char *)v22 + 116) = v45;
    }
    if ( a5 )
    {
      *((_DWORD *)v22 + 28) |= 0x4000u;
      *(struct tagPOINT *)((char *)v22 + 68) = *a5;
    }
    *((_QWORD *)v10 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    if ( (unsigned int)dword_1C0246A70 > 4 && tlgKeywordOn((__int64)&dword_1C0246A70, 64LL) )
    {
      v42 = *((unsigned __int16 *)v22 + 15);
      v43 = *((unsigned __int16 *)v22 + 14);
      LODWORD(v44) = *((_DWORD *)v22 + 14);
      LODWORD(v41) = *((_DWORD *)v22 + 13);
      *(_QWORD *)&v45 = *((_QWORD *)v22 + 11);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C0246A70,
        (unsigned int)&unk_1C021B937,
        v37,
        v38,
        (__int64)&v45,
        (__int64)&v41,
        (__int64)&v44,
        (__int64)&v43,
        (__int64)&v42);
    }
    if ( v40 )
      ApiSetEditionInitiateMouseEventProcessing(0);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v18,
      6,
      20,
      (__int64)&WPP_d02e541e0f7334a3be0888d6b8113659_Traceguids);
  }
  *((_QWORD *)v10 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  ApiSetEditionInitiateMouseEventProcessing(1u);
  InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 7), 5LL);
}
