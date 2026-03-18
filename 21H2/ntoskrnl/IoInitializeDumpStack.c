/*
 * XREFs of IoInitializeDumpStack @ 0x14038D354
 * Callers:
 *     PopSaveHiberContext @ 0x140A4B9E0 (PopSaveHiberContext.c)
 *     PopRestoreHiberContext @ 0x140A4C960 (PopRestoreHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C54DE8 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_140C54DE8)(a1, 0LL);
  }
  return result;
}
