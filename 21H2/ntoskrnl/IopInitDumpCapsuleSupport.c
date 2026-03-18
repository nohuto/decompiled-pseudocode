/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x1403DD52C
 * Callers:
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14084BDD8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1403DD580 (IopIsBitlockerOn.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized || (unsigned __int8)IopIsBitlockerOn() )
    return 0LL;
  CapsuleTriageDumpBlock = (PVOID)ExAllocatePool2(64LL, 268288LL, 1886209091LL);
  if ( CapsuleTriageDumpBlock )
  {
    CapsuleTriageDumpBlockInitialized = 1;
    return 0LL;
  }
  return 3221225626LL;
}
