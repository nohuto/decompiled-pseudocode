/*
 * XREFs of IoDumpStackResumeCapable @ 0x14038D3A0
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C54E18 )
      return ((__int64 (*)(void))qword_140C54E18)();
  }
  return result;
}
