/*
 * XREFs of IoInitializeDumpStack @ 0x14038B218
 * Callers:
 *     PopRestoreHiberContext @ 0x140990478 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140990730 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C50A68 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_140C50A68)(a1, 0LL);
  }
  return result;
}
