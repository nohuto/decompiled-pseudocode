/*
 * XREFs of IoDumpStackResumeCapable @ 0x14038B1E8
 * Callers:
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C50A98 )
      return ((__int64 (*)(void))qword_140C50A98)();
  }
  return result;
}
