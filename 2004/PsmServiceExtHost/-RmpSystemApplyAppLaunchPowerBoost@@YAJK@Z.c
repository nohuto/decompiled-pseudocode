/*
 * XREFs of ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180007438
 * Callers:
 *     ?RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800080F0 (-RmpPowerBoostTimedBoostCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180008238 (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpSystemApplyAppLaunchPowerBoost(char a1)
{
  int v2; // [rsp+58h] [rbp+10h] BYREF
  int v3; // [rsp+5Ch] [rbp+14h]

  v3 = -1;
  v2 = (2 * a1) & 2 | 1;
  return NtUpdateWnfStateData(&WNF_SEB_UWP_APP_LAUNCH, &v2, 8LL, 0LL, 0LL, 0, 0);
}
