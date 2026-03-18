/*
 * XREFs of IoDumpStackResumeCapable @ 0x14038A178
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C50BD8 )
      return ((__int64 (*)(void))qword_140C50BD8)();
  }
  return result;
}
