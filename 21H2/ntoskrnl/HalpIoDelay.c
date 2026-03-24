/*
 * XREFs of HalpIoDelay @ 0x1403F9CD0
 * Callers:
 *     HalMakeBeep @ 0x1404BDA20 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1404BDAEC (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x1404CC1F0 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x1404CC230 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x1404DCE10 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x1404DCF10 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x1404DCF34 (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreDmaControllerState @ 0x140995CF0 (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
