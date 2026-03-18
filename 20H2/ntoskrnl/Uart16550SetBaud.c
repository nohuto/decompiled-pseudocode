/*
 * XREFs of Uart16550SetBaud @ 0x1405C9830
 * Callers:
 *     Uart16550InitializePortCommon @ 0x1405C9564 (Uart16550InitializePortCommon.c)
 * Callees:
 *     Uart16550SetBaudCommon @ 0x1405C9850 (Uart16550SetBaudCommon.c)
 */

char __fastcall Uart16550SetBaud(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return 0;
  else
    return Uart16550SetBaudCommon();
}
