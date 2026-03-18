/*
 * XREFs of PopRecordPoBlackboxInformation @ 0x1408F6330
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x140572DC0 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     PopRecordPepWorkorderBlackboxInformation @ 0x14057996C (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x140579B78 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140579E70 (PopRecordPowerWatchdogBlackboxInformation.c)
 */

void PopRecordPoBlackboxInformation()
{
  PopRecordPoIrpBlackboxInformation();
  PopRecordPepWorkorderBlackboxInformation();
  PopRecordPowerWatchdogBlackboxInformation();
}
