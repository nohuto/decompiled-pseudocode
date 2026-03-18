/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x1405B204C
 * Callers:
 *     MiFinishVadDeletion @ 0x14030FEC0 (MiFinishVadDeletion.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 * Callees:
 *     MiDereferenceVad @ 0x1405B1FD0 (MiDereferenceVad.c)
 *     MiUnlockNestedVad @ 0x14097EE28 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  BOOL v2; // ebx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(P);
  if ( v2 )
    ExFreePoolWithTag(P, 0);
}
