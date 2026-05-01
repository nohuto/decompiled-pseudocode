/*
 * XREFs of ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180001684
 * Callers:
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180001510 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800771C0 (-RmpPowerBoostWatchdogCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPowerBoostArmWatchdog(struct _RM_POWERBOOST_CONTEXT *a1)
{
  int v2; // r8d
  unsigned int v3; // edx
  unsigned __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  RtlQueryUnbiasedInterruptTime(&v4);
  v2 = *((_DWORD *)a1 + 16);
  v3 = v4 / 0x2710 - *((_DWORD *)a1 + 2);
  if ( v3 >= 0xBB8 )
  {
    *((_DWORD *)a1 + 16) = v2 & 0xFFFFFFFE;
  }
  else
  {
    *((_DWORD *)a1 + 16) = v2 | 1;
    v5 = -10000LL * (3000 - v3);
    TpSetTimer(*((_QWORD *)a1 + 3), &v5, 0LL, 0LL);
  }
}
