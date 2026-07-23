/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1403C0310
 * Callers:
 *     IoConfigureCrashDump @ 0x1403C0230 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1407B7C74 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
