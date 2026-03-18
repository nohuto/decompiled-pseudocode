/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C006DB74
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C006B7A4 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E5A8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C006CC54 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006CDA4 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C006DA78 (_anonymous_namespace_--InMouseRawInputMode.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C006DCE0 (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0070F8C (QHelper--_anonymous_namespace_--GetQ.c)
 */

struct tagINPUT_MESSAGE_SOURCE *__fastcall CMouseProcessor::PostMouseMoveToInputDest(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5,
        __int64 a6)
{
  __int64 *v6; // rsi
  const struct CInputDest *v11; // rdx
  __int64 v12; // rbp
  __int64 *InputMessageSource; // rax
  int v14; // r9d
  __int64 v15; // rax
  const struct CInputDest *v16; // rdx
  struct tagINPUT_MESSAGE_SOURCE *result; // rax
  _QWORD v18[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a1 + 441;
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor::MouseMoveTimes *)(a1 + 441));
  if ( !anonymous_namespace_::InMouseRawInputMode(a2, 0LL, 1) )
  {
    if ( (a5 & 2) != 0 && *(_DWORD *)(a2 + 92) == 2 )
      v12 = *(_QWORD *)(a2 + 80);
    else
      LODWORD(v12) = 0;
    v18[1] = 0LL;
    v18[2] = a6;
    v18[0] = a3;
    InputMessageSource = (__int64 *)QHelper::GetInputMessageSource((QHelper *)a2, v11);
    v14 = a5 & 1 | 0x10;
    if ( (a5 & 4) == 0 )
      v14 = a5 & 1;
    ApiSetEditionPostInputMessage(
      a2,
      v12,
      512,
      0,
      *a4 | (a4[2] << 16),
      *(_DWORD *)v6,
      a1[442],
      a1[431],
      v14,
      InputMessageSource,
      (__int64)v18);
  }
  v15 = QHelper::_anonymous_namespace_::GetQ(a2);
  if ( v15 )
    *(_DWORD *)(v15 + 388) &= ~0x20u;
  result = QHelper::GetInputMessageSource((QHelper *)a2, v16);
  if ( result )
    *(_QWORD *)result = 0LL;
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  return result;
}
