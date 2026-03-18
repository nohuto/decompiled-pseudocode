/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1403BD210
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BD130 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1407A37B4 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A3AF4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
