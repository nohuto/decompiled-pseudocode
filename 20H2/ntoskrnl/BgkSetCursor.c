/*
 * XREFs of BgkSetCursor @ 0x1409F94F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FDDE8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1404FDE34 (BgkpReleaseConsole.c)
 */

__int64 __fastcall BgkSetCursor(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v7; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(qword_140C50A08 + 56))(a1, a2, a3);
  BgkpReleaseConsole();
  return v7;
}
