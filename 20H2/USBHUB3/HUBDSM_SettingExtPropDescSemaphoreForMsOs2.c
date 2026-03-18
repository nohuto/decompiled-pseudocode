/*
 * XREFs of HUBDSM_SettingExtPropDescSemaphoreForMsOs2 @ 0x1C0022190
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C007C7B0 (HUBMISC_SetExtPropDescSemaphoreInRegistry.c)
 */

__int64 __fastcall HUBDSM_SettingExtPropDescSemaphoreForMsOs2(__int64 a1)
{
  return HUBMISC_SetExtPropDescSemaphoreInRegistry(*(_QWORD *)(a1 + 960));
}
