/*
 * XREFs of IoDumpStackResumeCapable @ 0x14038DD58
 * Callers:
 *     PopSaveHiberContext @ 0x1409947A0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C50CE8 )
      return ((__int64 (*)(void))qword_140C50CE8)();
  }
  return result;
}
