/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1403BF690
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BF5B0 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x1407B2AE4 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A40FE0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
