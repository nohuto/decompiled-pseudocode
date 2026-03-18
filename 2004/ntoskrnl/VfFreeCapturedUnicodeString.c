/*
 * XREFs of VfFreeCapturedUnicodeString @ 0x1409C2FAC
 * Callers:
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall VfFreeCapturedUnicodeString(__int64 a1)
{
  if ( *(_WORD *)a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
}
