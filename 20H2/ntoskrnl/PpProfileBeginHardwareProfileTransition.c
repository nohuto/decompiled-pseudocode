/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x1408ADDA8
 * Callers:
 *     PipProcessStartPhase1 @ 0x14073B388 (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073F768 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
