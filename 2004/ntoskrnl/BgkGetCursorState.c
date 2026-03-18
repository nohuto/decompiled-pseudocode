/*
 * XREFs of BgkGetCursorState @ 0x1409F3460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FA558 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1404FA5A4 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetCursorState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_140C50978 + 48))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
