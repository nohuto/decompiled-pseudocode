/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1403BFEE4
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BFE04 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1407B7754 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A3EB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
