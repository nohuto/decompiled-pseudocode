/*
 * XREFs of BgkGetConsoleState @ 0x140AB0740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1405515F8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x140551644 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_140C54D30 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
