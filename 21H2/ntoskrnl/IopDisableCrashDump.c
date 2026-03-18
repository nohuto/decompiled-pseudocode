/*
 * XREFs of IopDisableCrashDump @ 0x140554344
 * Callers:
 *     IoConfigureCrashDump @ 0x140551D58 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_140C54DF8 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_140C54DF8)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
