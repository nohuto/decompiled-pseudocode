/*
 * XREFs of PopFreeWakeInfo @ 0x1408E21B0
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x1408E2418 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
