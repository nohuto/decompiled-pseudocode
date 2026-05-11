/*
 * XREFs of USBMidiOutLookasideFree @ 0x1C00087F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall USBMidiOutLookasideFree(_QWORD *Buffer)
{
  IRP *v2; // rcx

  v2 = (IRP *)Buffer[2];
  if ( v2 )
    IoFreeIrp(v2);
  ExFreePool(Buffer);
}
