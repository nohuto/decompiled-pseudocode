/*
 * XREFs of PnpWatchdogGetElapsedTime @ 0x140509578
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x1408A7474 (PnpWatchdogEtwWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpWatchdogGetElapsedTime(_QWORD *a1)
{
  return (unsigned int)((MEMORY[0xFFFFF78000000008] - *a1) / 0x2710uLL);
}
