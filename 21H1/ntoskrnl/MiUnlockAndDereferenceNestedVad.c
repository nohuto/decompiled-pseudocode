/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x1405562E0
 * Callers:
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 * Callees:
 *     MiDereferenceVad @ 0x14027A09C (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x1408D5144 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
