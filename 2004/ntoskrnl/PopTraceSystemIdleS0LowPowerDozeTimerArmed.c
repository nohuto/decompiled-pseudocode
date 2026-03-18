/*
 * XREFs of PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1408E93D4
 * Callers:
 *     PopIdleArmAoAcDozeS4Timer @ 0x140576DD8 (PopIdleArmAoAcDozeS4Timer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToSystemTime @ 0x1409953B4 (PopDiagInterruptTimeToSystemTime.c)
 */

void __fastcall PopTraceSystemIdleS0LowPowerDozeTimerArmed(int a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+50h] [rbp-10h]
  int v7; // [rsp+54h] [rbp-Ch]
  int v8; // [rsp+70h] [rbp+10h] BYREF

  v8 = a1;
  v3 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_ARMED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      UserData.Size = 4;
      PopDiagInterruptTimeToSystemTime(a2, &v3);
      v7 = 0;
      v5 = &v3;
      v6 = 8;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_ARMED, 0LL, 2u, &UserData);
    }
  }
}
