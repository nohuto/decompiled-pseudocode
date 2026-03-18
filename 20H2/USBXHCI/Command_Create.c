/*
 * XREFs of Command_Create @ 0x1C0071CFC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0071640 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     Command_IsProxyCommandRing @ 0x1C00058B8 (Command_IsProxyCommandRing.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     DynamicLock_Create @ 0x1C0016A48 (DynamicLock_Create.c)
 *     XilCommand_Create @ 0x1C0017CD8 (XilCommand_Create.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C0071E54 (Command_CreateCommandWatchdogTimer.c)
 */

__int64 __fastcall Command_Create(__int64 a1, __int64 a2, __int64 *a3)
{
  int v5; // edx
  int CommandWatchdogTimer; // ebx
  int v7; // edx
  __int64 v8; // rdi
  char IsProxyCommandRing; // al
  int v10; // edx
  __int64 *v11; // r9
  int v13; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+34h] [rbp-3Ch]
  int v15; // [rsp+44h] [rbp-2Ch]
  int v16; // [rsp+48h] [rbp-28h]
  int v17; // [rsp+4Ch] [rbp-24h]
  __int64 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  void *v20; // [rsp+60h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+20h] BYREF

  v21 = a1;
  v20 = off_1C00611F8;
  v18 = *(_QWORD *)(a2 + 8);
  v21 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v19 = 0LL;
  v13 = 56;
  v16 = 1;
  v17 = 1;
  CommandWatchdogTimer = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, int *, __int64 *))(WdfFunctions_01023 + 1656))(
                           WdfDriverGlobals,
                           &v13,
                           &v21);
  if ( CommandWatchdogTimer < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 72),
        v5,
        7,
        10,
        (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids,
        CommandWatchdogTimer);
    }
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
           WdfDriverGlobals,
           v21,
           off_1C00611F8);
    *(_QWORD *)v8 = v21;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v7) = 5;
      WPP_RECORDER_SF_i(*(_QWORD *)(a2 + 72), v7, 7, 11, (__int64)&WPP_72168dd6ef593f221f3405957586a4e9_Traceguids, v21);
    }
    *(_QWORD *)(v8 + 8) = a2;
    CommandWatchdogTimer = XilCommand_Create(v8);
    if ( CommandWatchdogTimer >= 0 )
    {
      IsProxyCommandRing = Command_IsProxyCommandRing(v8);
      CommandWatchdogTimer = DynamicLock_Create(v21, v10, IsProxyCommandRing != 0, v11);
      if ( CommandWatchdogTimer >= 0 )
      {
        CommandWatchdogTimer = Command_CreateCommandWatchdogTimer(v8);
        if ( CommandWatchdogTimer >= 0 )
        {
          *(_DWORD *)(v8 + 36) = 1;
          *a3 = v8;
        }
      }
    }
  }
  return (unsigned int)CommandWatchdogTimer;
}
