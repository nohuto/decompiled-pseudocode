/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x140556930
 * Callers:
 *     MiFinishVadDeletion @ 0x1402209B0 (MiFinishVadDeletion.c)
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 * Callees:
 *     MiDereferenceVad @ 0x14022104C (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x1408D6494 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
