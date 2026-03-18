/*
 * XREFs of IopInitDumpCapsuleSupport @ 0x1403C9F80
 * Callers:
 *     IoConfigureCrashDump @ 0x1403BBE10 (IoConfigureCrashDump.c)
 *     IoInitializeCrashDump @ 0x14079F7D4 (IoInitializeCrashDump.c)
 *     IoInitSystemPreDrivers @ 0x140A3B0DC (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopIsBitlockerOn @ 0x1403C9FE4 (IopIsBitlockerOn.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 IopInitDumpCapsuleSupport()
{
  PVOID PoolWithTag; // rax

  if ( CapsuleTriageDumpBlockInitialized || (unsigned __int8)IopIsBitlockerOn() )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x41800uLL, 0x706D4443u);
  CapsuleTriageDumpBlock = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x41800uLL);
    CapsuleTriageDumpBlockInitialized = 1;
    return 0LL;
  }
  return 3221225626LL;
}
