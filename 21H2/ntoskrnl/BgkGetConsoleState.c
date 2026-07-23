/*
 * XREFs of BgkGetConsoleState @ 0x1409F7410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FF908 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1404FF954 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkGetConsoleState(__int64 a1)
{
  unsigned int v3; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(qword_140C50BC0 + 40))(a1);
  BgkpReleaseConsole();
  return v3;
}
