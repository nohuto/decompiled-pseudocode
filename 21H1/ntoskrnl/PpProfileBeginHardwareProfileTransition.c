/*
 * XREFs of PpProfileBeginHardwareProfileTransition @ 0x1408A6F58
 * Callers:
 *     PipProcessStartPhase1 @ 0x14072358C (PipProcessStartPhase1.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall PpProfileBeginHardwareProfileTransition(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 )
    return KeWaitForSingleObject(&PiProfileChangeSemaphore, Executive, 0, 0, 0LL);
  return result;
}
