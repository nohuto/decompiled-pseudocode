/*
 * XREFs of ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C01BBE78
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseCursorEvent@@@Z @ 0x1C01BD540 (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAU_mouseC.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C006BA8C (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C006CDA4 (ApiSetEditionPostInputMessage.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C006E4BC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C006FC64 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01BCD28 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DeliverMouseWheelToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  __int64 v4; // r15
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // ebp
  int v13; // r14d
  int WheelMessage; // eax
  _QWORD v15[11]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v16; // [rsp+D0h] [rbp+18h] BYREF
  const struct CMouseProcessor::InputDeliveryContext *v17; // [rsp+D8h] [rbp+20h]

  v17 = a4;
  LODWORD(v4) = 0;
  if ( *(_DWORD *)a3 )
  {
    if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 132LL);
      v15[0] = *((_QWORD *)a2 + 1);
      v16 = v7;
      v15[2] = 0LL;
      v15[1] = (unsigned __int64)&v16 & -(__int64)(CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2) != 0);
      if ( CInputDest::IsCompositionInput(a3) && *((_DWORD *)a3 + 23) == 2 )
        v4 = *((_QWORD *)a3 + 10);
      v8 = *((_QWORD *)a2 + 1);
      v9 = (__int64 *)(v8 + 104);
      v10 = *(unsigned int *)(v8 + 40);
      v11 = *(_QWORD *)(v8 + 88);
      v12 = *(_DWORD *)(v8 + 80);
      v13 = *(unsigned __int16 *)(v8 + 30) << 16;
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
      ApiSetEditionPostInputMessage(
        (int)a3,
        v4,
        WheelMessage,
        v13,
        *(_QWORD *)v17,
        v12,
        v11,
        v10,
        *((_DWORD *)v17 + 2),
        v9,
        (__int64)v15);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  }
}
