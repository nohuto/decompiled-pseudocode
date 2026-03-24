/*
 * XREFs of IoInitializeDumpStack @ 0x14038DC38
 * Callers:
 *     PopRestoreHiberContext @ 0x1409934E8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x1409937A0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C50C88 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_140C50C88)(a1, 0LL);
  }
  return result;
}
