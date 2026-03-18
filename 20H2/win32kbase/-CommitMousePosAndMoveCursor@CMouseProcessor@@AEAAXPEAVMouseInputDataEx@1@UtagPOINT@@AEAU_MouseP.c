/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00A7534
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00359EC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0036088 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00A76DC (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C00A771C (ApiSetEditionCommitMousePosAndMove.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C00B8A6C (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01B5834 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01B8C50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01B95F4 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  BOOL v9; // esi
  __int64 v10; // r8
  __int64 v11; // r9
  BOOL v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  BOOL v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // al
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // ebx
  __int64 v25; // rdx
  LONG y; // [rsp+60h] [rbp-29h] BYREF
  LONG x; // [rsp+64h] [rbp-25h] BYREF
  struct tagPOINT v28; // [rsp+68h] [rbp-21h] BYREF
  __int64 v29; // [rsp+70h] [rbp-19h] BYREF
  __int64 v30; // [rsp+78h] [rbp-11h] BYREF
  _WORD v31[4]; // [rsp+80h] [rbp-9h] BYREF
  int v32; // [rsp+88h] [rbp-1h]
  int v33; // [rsp+8Ch] [rbp+3h]
  int v34; // [rsp+90h] [rbp+7h]
  int v35; // [rsp+94h] [rbp+Bh]

  v28 = a3;
  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16LL, *(_QWORD *)&a3, (__int64)a4)
    && CBaseProcessor::IsUMSuppressed(this) )
  {
    v24 = 0;
    v25 = 4LL;
LABEL_16:
    InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v25);
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v19 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v28, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0, (__int64)a4);
  }
  else
  {
    v31[1] = *((_WORD *)a2 + 1);
    v31[2] = *((_WORD *)a2 + 2);
    v31[3] = *((_WORD *)a2 + 3);
    v33 = *((_DWORD *)a2 + 3);
    v34 = *((_DWORD *)a2 + 4);
    v35 = *((_DWORD *)a2 + 5);
    v32 = *((_DWORD *)a2 + 2);
    v31[0] = 0;
    v9 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16LL, v7, v8);
    v12 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 2LL, v10, v11);
    v15 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x2000LL, v13, v14);
    v18 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x10000LL, v16, v17);
    v19 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v28,
            *((_DWORD *)a2 + 5),
            (unsigned int)v31,
            (int)a2 + 24,
            *((_DWORD *)a2 + 12),
            *((_QWORD *)a2 + 7),
            v9,
            v12,
            v15,
            v18,
            (__int64)a4);
  }
  v24 = v19;
  if ( !v19 )
  {
    v25 = 2LL;
    goto LABEL_16;
  }
LABEL_5:
  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 64LL) )
  {
    v29 = InputTraceLogging::CommitMousePosAndMoveResultToString(v24);
    y = gptCursorAsync.y;
    x = gptCursorAsync.x;
    v30 = *((_QWORD *)a2 + 7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C0244A70,
      (__int64)&v30,
      (__int64)&x,
      (__int64)&y,
      (__int64)&v29);
  }
  if ( v24 && (v24 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22, v23);
  *((_DWORD *)a2 + 19) = v24;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
  {
    *(_OWORD *)((char *)this + 3528) = *((_OWORD *)a2 + 3);
    *((_QWORD *)this + 443) = *((_QWORD *)a2 + 8);
  }
}
