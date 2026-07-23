/*
 * XREFs of PopFreeWakeInfo @ 0x1408E6BD0
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x1408E6E38 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
