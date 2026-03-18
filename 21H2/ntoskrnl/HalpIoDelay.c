/*
 * XREFs of HalpIoDelay @ 0x14041B0A0
 * Callers:
 *     HalMakeBeep @ 0x14050A490 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x14050A55C (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x140518340 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x140518380 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x14052AB00 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x14052AC00 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x14052AC24 (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreDmaControllerState @ 0x140A5054C (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
