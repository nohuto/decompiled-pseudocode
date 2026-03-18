/*
 * XREFs of IopRemoveDumpCapsuleSupport @ 0x1403CF960
 * Callers:
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14084BDD8 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
