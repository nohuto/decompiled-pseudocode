/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x14055A300
 * Callers:
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 * Callees:
 *     MiDereferenceVad @ 0x14022F4BC (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x1408DC2D4 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
