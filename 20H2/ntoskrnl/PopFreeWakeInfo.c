/*
 * XREFs of PopFreeWakeInfo @ 0x1408E9270
 * Callers:
 *     <none>
 * Callees:
 *     PopUnlinkWakeSources @ 0x1408E94D8 (PopUnlinkWakeSources.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeWakeInfo(PVOID P)
{
  PopUnlinkWakeSources();
  ExFreePoolWithTag(P, 0x206D654Du);
}
