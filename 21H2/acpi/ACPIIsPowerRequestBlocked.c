/*
 * XREFs of ACPIIsPowerRequestBlocked @ 0x1C000DEE0
 * Callers:
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C000C598 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessBlockedItems @ 0x1C002B950 (ACPIDevicePowerProcessBlockedItems.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C00515FC (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     WPP_RECORDER_SF_qsLLdqss @ 0x1C000FE70 (WPP_RECORDER_SF_qsLLdqss.c)
 */

char __fastcall ACPIIsPowerRequestBlocked(__int64 a1)
{
  int v1; // r8d
  char v2; // bl
  const char *v3; // rdx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x10000000) != 0
    || (v2 = 0, (v1 & 0x1000000) != 0)
    && ((v1 & 0x4000000) != 0
     || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 1000LL) & 0x40) != 0
     && (*(_QWORD *)(a1 + 64) != a1 + 64 || (v1 & 0x2000000) == 0 && AcpiPowerCurrentPagingPathTransitions)) )
  {
    v2 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = "IS";
    if ( !v2 )
      v3 = "NOT";
    WPP_RECORDER_SF_qsLLdqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v3, v1, a1);
  }
  return v2;
}
