/*
 * XREFs of HalpIoDelay @ 0x1403F1C60
 * Callers:
 *     HalMakeBeep @ 0x1404B8460 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1404B852C (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x1404C6E10 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x1404C6E50 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x1404D7960 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x1404D7A60 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x1404D7A84 (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreDmaControllerState @ 0x140991550 (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
