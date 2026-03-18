/*
 * XREFs of IoDumpStackResumeCapable @ 0x14038D4E8
 * Callers:
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C50B28 )
      return ((__int64 (*)(void))qword_140C50B28)();
  }
  return result;
}
