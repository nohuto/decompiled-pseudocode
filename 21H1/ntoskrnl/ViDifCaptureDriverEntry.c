/*
 * XREFs of ViDifCaptureDriverEntry @ 0x14059B0BC
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x14037B124 (VfDifCaptureDriverEntry.c)
 *     IovAttachDeviceToDeviceStack @ 0x1409C1A2C (IovAttachDeviceToDeviceStack.c)
 * Callees:
 *     <none>
 */

char __fastcall ViDifCaptureDriverEntry(__int64 a1)
{
  **(_QWORD **)(*(_QWORD *)(a1 + 48) + 64LL) = *(_QWORD *)(a1 + 88);
  if ( *(_QWORD *)(a1 + 88) )
    *(_QWORD *)(a1 + 88) = pXdvDriverEntry;
  return 1;
}
