/*
 * XREFs of PopBatteryCheckTrigger @ 0x1407EEC68
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x140995690 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x140994918 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140C22A00 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
