/*
 * XREFs of IoInitializeDumpStack @ 0x14038A1A8
 * Callers:
 *     PopRestoreHiberContext @ 0x14098F728 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C50BA8 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_140C50BA8)(a1, 0LL);
  }
  return result;
}
