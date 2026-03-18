/*
 * XREFs of PopBatteryCheckTrigger @ 0x14076D77C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14076D40C (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x1408EA910 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x1408E9A74 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140C23160 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
