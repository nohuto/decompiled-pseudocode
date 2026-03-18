/*
 * XREFs of PopFreeWakeInfo @ 0x1408E3430
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x1408E3698 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
