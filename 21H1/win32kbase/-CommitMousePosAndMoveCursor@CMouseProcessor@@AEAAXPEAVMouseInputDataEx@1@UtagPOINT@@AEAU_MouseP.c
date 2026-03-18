/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C0039134
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0065920 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00392DC (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C003931C (ApiSetEditionCommitMousePosAndMove.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C004B084 (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0065FBC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01BD904 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01C0D20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01C16C4 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT a3,
        struct _MousePacketPerf *a4)
{
  BOOL v7; // esi
  BOOL v8; // edi
  BOOL v9; // ebx
  char v10; // al
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rdx
  LONG y; // [rsp+60h] [rbp-29h] BYREF
  LONG x; // [rsp+64h] [rbp-25h] BYREF
  struct tagPOINT v19; // [rsp+68h] [rbp-21h] BYREF
  __int64 v20; // [rsp+70h] [rbp-19h] BYREF
  __int64 v21; // [rsp+78h] [rbp-11h] BYREF
  _WORD v22[4]; // [rsp+80h] [rbp-9h] BYREF
  int v23; // [rsp+88h] [rbp-1h]
  int v24; // [rsp+8Ch] [rbp+3h]
  int v25; // [rsp+90h] [rbp+7h]
  int v26; // [rsp+94h] [rbp+Bh]

  v19 = a3;
  if ( !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL)
    && CBaseProcessor::IsUMSuppressed(this) )
  {
    v15 = 0;
    v16 = 4LL;
LABEL_16:
    InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v16);
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v11 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v19, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0, (__int64)a4);
  }
  else
  {
    v22[1] = *((_WORD *)a2 + 1);
    v22[2] = *((_WORD *)a2 + 2);
    v22[3] = *((_WORD *)a2 + 3);
    v24 = *((_DWORD *)a2 + 3);
    v25 = *((_DWORD *)a2 + 4);
    v26 = *((_DWORD *)a2 + 5);
    v23 = *((_DWORD *)a2 + 2);
    v22[0] = 0;
    v7 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL) == 1;
    v8 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 2LL) == 0;
    v9 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x2000LL) == 0;
    v10 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x10000LL);
    v11 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v19,
            *((_DWORD *)a2 + 5),
            (unsigned int)v22,
            (int)a2 + 24,
            *((_DWORD *)a2 + 12),
            *((_QWORD *)a2 + 7),
            v7,
            v8,
            v9,
            v10 == 1,
            (__int64)a4);
  }
  v15 = v11;
  if ( !v11 )
  {
    v16 = 2LL;
    goto LABEL_16;
  }
LABEL_5:
  if ( (unsigned int)dword_1C024C960 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 64LL, v13, v14) )
  {
    v20 = InputTraceLogging::CommitMousePosAndMoveResultToString(v15);
    y = gptCursorAsync.y;
    x = gptCursorAsync.x;
    v21 = *((_QWORD *)a2 + 7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C024C960,
      (__int64)&v21,
      (__int64)&x,
      (__int64)&y,
      (__int64)&v20);
  }
  if ( v15 && (v15 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
  *((_DWORD *)a2 + 19) = v15;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
  {
    *((_OWORD *)this + 225) = *((_OWORD *)a2 + 3);
    *((_QWORD *)this + 452) = *((_QWORD *)a2 + 8);
  }
}
