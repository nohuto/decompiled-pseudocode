/*
 * XREFs of PnpWatchdogGetElapsedTime @ 0x140562834
 * Callers:
 *     PnpWatchdogEtwWrite @ 0x140950084 (PnpWatchdogEtwWrite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpWatchdogGetElapsedTime(_QWORD *a1)
{
  return (unsigned int)((MEMORY[0xFFFFF78000000008] - *a1) / 0x2710uLL);
}
