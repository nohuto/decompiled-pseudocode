/*
 * XREFs of IopDisableCrashDump @ 0x1403C0480
 * Callers:
 *     IoConfigureCrashDump @ 0x1403C0230 (IoConfigureCrashDump.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 IopDisableCrashDump()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry && qword_140C50CC8 && CrashdmpInitialized )
  {
    result = ((__int64 (*)(void))qword_140C50CC8)();
    if ( (int)result >= 0 )
    {
      CrashdmpDumpBlock = 0LL;
      CrashdmpInitialized = 0;
    }
  }
  return result;
}
