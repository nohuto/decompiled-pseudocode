/*
 * XREFs of HalpTimerInitializeSystemWatchdog @ 0x1404C2720
 * Callers:
 *     HalpTimerInitSystem @ 0x1403A9340 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetClockRates @ 0x1403CE6B4 (HalpTimerGetClockRates.c)
 *     HalpInterruptConnect @ 0x1404BB678 (HalpInterruptConnect.c)
 *     HalpTimerWatchdogStart @ 0x1404C28B0 (HalpTimerWatchdogStart.c)
 */

int HalpTimerInitializeSystemWatchdog()
{
  _DWORD *v0; // rbx
  unsigned __int64 v1; // r8
  bool v2; // zf
  __int64 v3; // rcx
  unsigned int v4; // edx
  unsigned int v5; // eax
  int result; // eax
  signed __int32 v7[8]; // [rsp+0h] [rbp-78h] BYREF
  KINTERRUPT_MODE v8; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall *v9)(); // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  char v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+50h] [rbp-28h]
  PKINTERRUPT *v14; // [rsp+58h] [rbp-20h]
  __int128 v15; // [rsp+60h] [rbp-18h] BYREF
  int v16; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+10h] BYREF
  __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  v0 = (_DWORD *)HalpWatchdogTimer;
  v18 = 0LL;
  v17 = 0LL;
  HalpTimerGetClockRates(HalpWatchdogTimer, &v17, &v16);
  v1 = v17;
  if ( v17 > 0xB2D05E00 )
    v1 = 3000000000LL;
  v17 = v1;
  HalpTimerWatchdogTimeout = v1;
  v2 = (v0[56] & 0x80000) == 0;
  HalpTimerWatchdogResetCount = v1 >> 2;
  if ( v2 )
    goto LABEL_7;
  v14 = (PKINTERRUPT *)&v18;
  v3 = 0LL;
  v13 = 5;
  if ( KeActiveProcessors[0] )
    v3 = qword_140CFC848[0];
  v12 = 15;
  v11 = 0LL;
  v10 = 0LL;
  v4 = v0[22];
  v9 = HalpTimerWatchdogPreResetInterrupt;
  v8 = v0[24];
  v5 = v0[23];
  v15 = (unsigned __int64)v3;
  result = HalpInterruptConnect(
             &v15,
             v4,
             0xF0u,
             0xFu,
             v5,
             v8,
             (unsigned __int64)HalpTimerWatchdogPreResetInterrupt,
             0LL,
             0LL,
             0xFu,
             v13,
             v14);
  if ( result >= 0 )
  {
LABEL_7:
    _InterlockedOr(v7, 0);
    off_140C008C8[0] = HalpTimerWatchdogStop;
    off_140C008B8[0] = HalpTimerWatchdogStart;
    off_140C008D0[0] = HalpTimerWatchdogGeneratedLastReset;
    off_140C008D8[0] = (__int64 (__fastcall *)())HalpTimerWatchdogTriggerSystemReset;
    off_140C00968[0] = HalpTimerWatchdogQueryDueTime;
    _InterlockedOr(v7, 0);
    HalpTimerWatchdogStart();
    _InterlockedOr(v7, 0);
    off_140C008C0[0] = HalpTimerWatchdogResetCountdown;
    return 0;
  }
  return result;
}
