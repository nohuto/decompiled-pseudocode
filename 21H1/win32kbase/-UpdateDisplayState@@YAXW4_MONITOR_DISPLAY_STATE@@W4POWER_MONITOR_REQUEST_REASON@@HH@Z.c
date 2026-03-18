/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0054924
 * Callers:
 *     PowerOnMonitor @ 0x1C0053850 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1C00C98F0 (PowerOffMonitor.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C000B814 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     CitDisplayPowerChange @ 0x1C0050E50 (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C0051A20 (EtwTraceDisplayChange.c)
 *     PowerInputEvent @ 0x1C005B900 (PowerInputEvent.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C9E10 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0125714 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0125CB0 (-SetProximityBlocking@@YAXXZ.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3)
{
  char v6; // bp
  __int64 v7; // rcx
  char v8; // si
  LeaveEnterCrit *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  _DWORD InputBuffer[3]; // [rsp+40h] [rbp-58h] BYREF
  char v16; // [rsp+4Ch] [rbp-4Ch]
  char v17; // [rsp+4Dh] [rbp-4Bh]
  char v18; // [rsp+4Eh] [rbp-4Ah]
  char v19; // [rsp+4Fh] [rbp-49h]

  gPowerDisplayState = gSessionId;
  dword_1C025314C = dword_1C0253150;
  dword_1C0253150 = a1;
  qword_1C0253118 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C0253120;
  qword_1C0253120 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( gProtocolType )
  {
    v6 = 0;
    word_1C0253154 = 0;
  }
  else
  {
    v6 = 1;
    word_1C0253154 = 1;
  }
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C02531AC = 0LL;
  }
  else
  {
    gPowerTransitionsState = 0;
    if ( a2 == MonitorRequestReasonGracePeriod )
    {
      LODWORD(qword_1C02531AC) = 1;
    }
    else
    {
      LODWORD(qword_1C02531AC) = 0;
      if ( a2 == MonitorRequestReasonNearProximity )
        SetProximityBlocking();
    }
  }
  v7 = (unsigned int)gdwInAtomicOperation;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0LL);
  }
  UserSessionSwitchLeaveCrit(v7);
  if ( !gbTtmEnabled
    && (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    if ( a1 != 2 )
    {
      v14 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), &v14);
    }
  }
  InputBuffer[0] = gSessionId;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v16 = v6;
  v17 = v8;
  v18 = a3;
  if ( gPowerTransitionsState || (_DWORD)qword_1C02531AC || (v19 = 0, HIDWORD(qword_1C02531AC)) )
    v19 = 1;
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( gSystemIsAoAc )
  {
    if ( (gPowerTransitionsState || qword_1C02531AC) && !HIDWORD(qword_1C02531AC) )
      v10 = 0LL;
    else
      v10 = 2LL;
    SetInputMode(v10);
  }
  LeaveEnterCrit::~LeaveEnterCrit(v9);
  EtwTraceDisplayChange(v12, v11, v13);
  CitDisplayPowerChange((__int64)&gPowerDisplayState);
}
