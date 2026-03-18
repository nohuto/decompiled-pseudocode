/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1403BBEF0
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BBE10 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14079F7D4 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 IopRemoveDumpCapsuleSupport()
{
  if ( CapsuleTriageDumpBlockInitialized == 1 )
  {
    if ( CapsuleTriageDumpBlock )
    {
      ExFreePoolWithTag(CapsuleTriageDumpBlock, 0);
      CapsuleTriageDumpBlock = 0LL;
    }
    CapsuleTriageDumpBlockInitialized = 0;
  }
  return 0LL;
}
