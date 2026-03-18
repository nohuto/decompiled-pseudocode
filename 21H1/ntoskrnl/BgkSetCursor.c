/*
 * XREFs of BgkSetCursor @ 0x1409F34F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404F9F08 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1404F9F54 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_140C50AB8 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
