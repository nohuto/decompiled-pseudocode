/*
 * XREFs of IoInitializeDumpStack @ 0x14038D518
 * Callers:
 *     PopRestoreHiberContext @ 0x1409964E8 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x1409967A0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C50AF8 )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_140C50AF8)(a1, 0LL);
  }
  return result;
}
