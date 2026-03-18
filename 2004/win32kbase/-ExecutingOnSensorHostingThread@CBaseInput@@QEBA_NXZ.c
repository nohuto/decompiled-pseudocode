/*
 * XREFs of ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C00B02B0
 * Callers:
 *     CleanupSensorExplicitly @ 0x1C004C440 (CleanupSensorExplicitly.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C0051650 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00AF5FC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C00AF798 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00AFD40 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C00B0270 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseInput::ExecutingOnSensorHostingThread(CBaseInput *this)
{
  return *((_DWORD *)this + 319) == (unsigned int)PsGetCurrentThreadId();
}
