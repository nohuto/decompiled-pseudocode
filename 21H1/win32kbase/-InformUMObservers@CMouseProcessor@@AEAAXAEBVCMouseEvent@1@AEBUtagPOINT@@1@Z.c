/*
 * XREFs of ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C005F524
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C005FFC0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0066094 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01C3B64 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C003A3D8 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C005F580 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C005FF5C (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C005FF98 (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0061864 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01C2A88 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z @ 0x1C01C2DF8 (-InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::InformUMObservers(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  __int64 v8; // r8
  unsigned __int64 ExtraInfoForHook; // rax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int WheelMessage; // eax
  __int64 v15; // rcx
  _QWORD v16[10]; // [rsp+20h] [rbp-50h] BYREF

  if ( CInputThread::IsInputThreadDesktopActive(this) && (*((_DWORD *)this + 3) & 6) != 0 )
  {
    memset(v16, 0, 0x48uLL);
    v8 = *((_QWORD *)a2 + 1);
    LODWORD(v16[0]) = 72;
    v16[1] = *(_QWORD *)(v8 + 88);
    v16[3] = *a3;
    *(struct tagPOINT *)((char *)&v16[7] + 4) = *a4;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
    v11 = *((_DWORD *)a2 + 4);
    v16[5] = ExtraInfoForHook;
    LODWORD(v16[6]) = 4;
    v12 = v11 - 1;
    if ( !v12 )
    {
      LODWORD(v16[7]) = 0;
      LODWORD(v16[4]) = 512;
      goto LABEL_12;
    }
    v13 = (unsigned int)(v12 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
LABEL_12:
        LODWORD(v16[2]) ^= (LOBYTE(v16[2]) ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) >> 7)) & 1;
        InputTraceLogging::Mouse::InformUMObservers((const struct _MIT_MOUSE_INPUT_OBSERVER_PACKET *)v16);
        InputExtensibilityCallout::CoreMsgSendMessage(v15, 12LL, v16, 72LL, v16[0], v16[1]);
        return;
      }
      LODWORD(v16[7]) = *(unsigned __int16 *)(v10 + 30);
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    }
    else
    {
      LODWORD(v16[7]) = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
      WheelMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    }
    LODWORD(v16[4]) = WheelMessage;
    goto LABEL_12;
  }
}
