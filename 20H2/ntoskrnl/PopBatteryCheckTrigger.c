/*
 * XREFs of PopBatteryCheckTrigger @ 0x14077C1AC
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077BE3C (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x1408F0520 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x1408EF684 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140C23620 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
