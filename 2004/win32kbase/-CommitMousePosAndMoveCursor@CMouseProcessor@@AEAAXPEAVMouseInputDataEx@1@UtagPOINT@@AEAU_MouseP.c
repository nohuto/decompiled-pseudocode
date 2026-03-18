/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C0046244
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0071500 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     ?TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePosAndMoveResult@@@Z @ 0x1C00463EC (-TestCommitMouseAndCursorPositionResult@MouseInputDataEx@CMouseProcessor@@QEBA_NW4_CommitMousePo.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x1C004642C (ApiSetEditionCommitMousePosAndMove.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C0058DAC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0071B9C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1C01B7BA4 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01BAFC0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C01BB964 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rdx
  LONG y; // [rsp+60h] [rbp-29h] BYREF
  LONG x; // [rsp+64h] [rbp-25h] BYREF
  struct tagPOINT v20; // [rsp+68h] [rbp-21h] BYREF
  __int64 v21; // [rsp+70h] [rbp-19h] BYREF
  __int64 v22; // [rsp+78h] [rbp-11h] BYREF
  _WORD v23[4]; // [rsp+80h] [rbp-9h] BYREF
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  int v26; // [rsp+90h] [rbp+7h]
  int v27; // [rsp+94h] [rbp+Bh]

  v20 = a3;
  if ( !(unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL)
    && CBaseProcessor::IsUMSuppressed(this) )
  {
    v16 = 0;
    v17 = 4LL;
LABEL_16:
    InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v17);
    goto LABEL_5;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v11 = ApiSetEditionCommitMousePosAndMove((unsigned int)&v20, 0, 0, (int)a2 + 24, 0, 0LL, 0, 1, 1, 0, (__int64)a4);
  }
  else
  {
    v23[1] = *((_WORD *)a2 + 1);
    v23[2] = *((_WORD *)a2 + 2);
    v23[3] = *((_WORD *)a2 + 3);
    v25 = *((_DWORD *)a2 + 3);
    v26 = *((_DWORD *)a2 + 4);
    v27 = *((_DWORD *)a2 + 5);
    v24 = *((_DWORD *)a2 + 2);
    v23[0] = 0;
    v7 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 16LL) == 1;
    v8 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 2LL) == 0;
    v9 = (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x2000LL) == 0;
    v10 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 0x10000LL);
    v11 = ApiSetEditionCommitMousePosAndMove(
            (unsigned int)&v20,
            *((_DWORD *)a2 + 5),
            (unsigned int)v23,
            (int)a2 + 24,
            *((_DWORD *)a2 + 12),
            *((_QWORD *)a2 + 7),
            v7,
            v8,
            v9,
            v10 == 1,
            (__int64)a4);
  }
  v16 = v11;
  if ( !v11 )
  {
    v17 = 2LL;
    goto LABEL_16;
  }
LABEL_5:
  if ( (unsigned int)dword_1C0246A70 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C0246A70, 64LL, v14, v15) )
  {
    v21 = InputTraceLogging::CommitMousePosAndMoveResultToString(v16);
    y = gptCursorAsync.y;
    x = gptCursorAsync.x;
    v22 = *((_QWORD *)a2 + 7);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
      (int)&dword_1C0246A70,
      (__int64)&v22,
      (__int64)&x,
      (__int64)&y,
      (__int64)&v21);
  }
  if ( v16 && (v16 & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14, v15);
  *((_DWORD *)a2 + 19) = v16;
  if ( (unsigned __int8)CMouseProcessor::MouseInputDataEx::TestCommitMouseAndCursorPositionResult(a2, 1LL) )
  {
    *(_OWORD *)((char *)this + 3528) = *((_OWORD *)a2 + 3);
    *((_QWORD *)this + 443) = *((_QWORD *)a2 + 8);
  }
}
