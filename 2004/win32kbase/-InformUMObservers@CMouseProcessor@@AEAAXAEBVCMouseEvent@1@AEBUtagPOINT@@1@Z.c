/*
 * XREFs of ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@1@Z @ 0x1C0069034
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0071D64 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C01BDDE8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ @ 0x1C0047088 (-IsInputThreadDesktopActive@CInputThread@@QEBA_NXZ.c)
 *     ?GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C00690C4 (-GetExtraInfoForHook@CMouseEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C006A794 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ @ 0x1C006BFC0 (-GetButtonMessage@CButtonEvent@CMouseProcessor@@QEBAIXZ.c)
 *     ?GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ @ 0x1C006BFFC (-GetMessageWParamInfo@CButtonEvent@CMouseProcessor@@QEBA_KXZ.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C01BCD28 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z @ 0x1C01BD098 (-InformUMObservers@Mouse@InputTraceLogging@@SAXAEBU_MIT_MOUSE_INPUT_OBSERVER_PACKET@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::InformUMObservers(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  __int64 v8; // r8
  unsigned __int64 ExtraInfoForHook; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  unsigned int WheelMessage; // eax
  __int64 v17; // rcx
  _QWORD v18[10]; // [rsp+20h] [rbp-50h] BYREF

  if ( CInputThread::IsInputThreadDesktopActive(this) && (*((_DWORD *)this + 3) & 6) != 0 )
  {
    memset(v18, 0, 0x48uLL);
    v8 = *((_QWORD *)a2 + 1);
    LODWORD(v18[0]) = 72;
    v18[1] = *(_QWORD *)(v8 + 88);
    v18[3] = *a3;
    *(struct tagPOINT *)((char *)&v18[7] + 4) = *a4;
    ExtraInfoForHook = CMouseProcessor::CMouseEvent::GetExtraInfoForHook(a2);
    v13 = *((_DWORD *)a2 + 4);
    v18[5] = ExtraInfoForHook;
    LODWORD(v18[6]) = 4;
    v14 = v13 - 1;
    if ( !v14 )
    {
      LODWORD(v18[7]) = 0;
      LODWORD(v18[4]) = 512;
      goto LABEL_12;
    }
    v15 = (unsigned int)(v14 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 != 1 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v10, v11, v12);
LABEL_12:
        LODWORD(v18[2]) ^= (LOBYTE(v18[2]) ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) >> 7)) & 1;
        InputTraceLogging::Mouse::InformUMObservers((const struct _MIT_MOUSE_INPUT_OBSERVER_PACKET *)v18);
        ((void (__fastcall *)(__int64, __int64, _QWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
          v17,
          12LL,
          v18,
          72LL);
        return;
      }
      LODWORD(v18[7]) = *(unsigned __int16 *)(v11 + 30);
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
    }
    else
    {
      LODWORD(v18[7]) = CMouseProcessor::CButtonEvent::GetMessageWParamInfo(a2);
      WheelMessage = CMouseProcessor::CButtonEvent::GetButtonMessage(a2);
    }
    LODWORD(v18[4]) = WheelMessage;
    goto LABEL_12;
  }
}
