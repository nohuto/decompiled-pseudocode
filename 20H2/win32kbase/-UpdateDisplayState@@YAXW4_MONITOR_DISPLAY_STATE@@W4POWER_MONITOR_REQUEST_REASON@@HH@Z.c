/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0074424
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0070400 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0070E70 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C00C8920 (PowerOffMonitor.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     PowerInputEvent @ 0x1C0070D10 (PowerInputEvent.c)
 *     CitDisplayPowerChange @ 0x1C00BEC3C (CitDisplayPowerChange.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00BF11C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     EtwTraceDisplayChange @ 0x1C00BF8A0 (EtwTraceDisplayChange.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00C8E40 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C011D434 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C011D9D0 (-SetProximityBlocking@@YAXXZ.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3)
{
  __int64 v5; // r9
  __int64 v7; // r8
  unsigned __int128 v8; // rax
  char v9; // bp
  __int64 v10; // rcx
  char v11; // si
  LeaveEnterCrit *v12; // rcx
  __int64 v13; // rcx
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  _DWORD InputBuffer[3]; // [rsp+40h] [rbp-58h] BYREF
  char v16; // [rsp+4Ch] [rbp-4Ch]
  char v17; // [rsp+4Dh] [rbp-4Bh]
  char v18; // [rsp+4Eh] [rbp-4Ah]
  char v19; // [rsp+4Fh] [rbp-49h]

  gPowerDisplayState = gSessionId;
  v5 = 0xFFFFF78000000004uLL;
  dword_1C024B14C = dword_1C024B150;
  dword_1C024B150 = a1;
  v7 = 0xFFFFF78000000320uLL;
  qword_1C024B118 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C024B120;
  v8 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  qword_1C024B120 = *((_QWORD *)&v8 + 1);
  if ( gProtocolType )
  {
    v9 = 0;
    word_1C024B154 = 0;
  }
  else
  {
    v9 = 1;
    word_1C024B154 = 1;
  }
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C024B1AC = 0LL;
  }
  else
  {
    gPowerTransitionsState = 0;
    if ( a2 == MonitorRequestReasonGracePeriod )
    {
      LODWORD(qword_1C024B1AC) = 1;
    }
    else
    {
      LODWORD(qword_1C024B1AC) = 0;
      if ( a2 == MonitorRequestReasonNearProximity )
        SetProximityBlocking();
    }
  }
  v10 = (unsigned int)gdwInAtomicOperation;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit(v10, *((__int64 *)&v8 + 1), v7, v5);
  if ( !gbTtmEnabled
    && (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( a1 != 2 )
    {
      v14 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), &v14);
    }
  }
  InputBuffer[0] = gSessionId;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v16 = v9;
  v17 = v11;
  v18 = a3;
  if ( gPowerTransitionsState || (_DWORD)qword_1C024B1AC || (v19 = 0, HIDWORD(qword_1C024B1AC)) )
    v19 = 1;
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( gSystemIsAoAc )
  {
    if ( (gPowerTransitionsState || qword_1C024B1AC) && !HIDWORD(qword_1C024B1AC) )
      v13 = 0LL;
    else
      v13 = 2LL;
    SetInputMode(v13);
  }
  LeaveEnterCrit::~LeaveEnterCrit(v12);
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
