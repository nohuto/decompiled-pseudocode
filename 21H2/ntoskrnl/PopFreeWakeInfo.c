/*
 * XREFs of PopFreeWakeInfo @ 0x1408E6A70
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x1408E6CD8 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
