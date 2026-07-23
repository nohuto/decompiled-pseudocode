/*
 * XREFs of PopBroadcastSessionInfo @ 0x1407969A4
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403AE610 (PopPowerSourceChangeCallback.c)
 *     PopWin32kPowerSettingCallback @ 0x1403AE820 (PopWin32kPowerSettingCallback.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     PopLidSwitchChangeCallback @ 0x1408E4140 (PopLidSwitchChangeCallback.c)
 *     PopSetAwayModeStatus @ 0x1408E78B4 (PopSetAwayModeStatus.c)
 *     PopEvaluateInputSuppressionAction @ 0x1408EECD4 (PopEvaluateInputSuppressionAction.c)
 *     PopSetWin32kInputTimeout @ 0x1408F5468 (PopSetWin32kInputTimeout.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x14066EF08 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopBroadcastSessionInfo(int a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  char v5; // [rsp+24h] [rbp-34h]
  __int16 v6; // [rsp+25h] [rbp-33h]
  char v7; // [rsp+27h] [rbp-31h]
  int v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+2Ch] [rbp-2Ch]
  __int64 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+3Ch] [rbp-1Ch]
  __int64 v13; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v6 = 0;
  v7 = 0;
  v9 = 0;
  v12 = 0;
  if ( PsWin32CalloutsEstablished )
  {
    v4 = a1;
    v8 = a2;
    v10 = a3;
    v5 = 0;
    v11 = 0;
    v13 = 0LL;
    return PopInvokeWin32Callout(5u, (__int64)&v4, 2u, 0LL);
  }
  return result;
}
