/*
 * XREFs of HalpIoDelay @ 0x1403F2EF0
 * Callers:
 *     HalMakeBeep @ 0x1404B8B40 (HalMakeBeep.c)
 *     WRITE_PORT_USHORT_PAIR @ 0x1404B8C0C (WRITE_PORT_USHORT_PAIR.c)
 *     HalpECmosReadByte @ 0x1404C72C0 (HalpECmosReadByte.c)
 *     HalpECmosWriteByte @ 0x1404C7300 (HalpECmosWriteByte.c)
 *     HalpPicSetLineState @ 0x1404D7E70 (HalpPicSetLineState.c)
 *     HalpPicWriteEndOfInterrupt @ 0x1404D7F70 (HalpPicWriteEndOfInterrupt.c)
 *     READ_PORT_USHORT_PAIR @ 0x1404D7F94 (READ_PORT_USHORT_PAIR.c)
 *     HalpRestoreDmaControllerState @ 0x140992490 (HalpRestoreDmaControllerState.c)
 * Callees:
 *     <none>
 */

void HalpIoDelay()
{
  ;
}
