/*
 * XREFs of BgkDisplayCharacter @ 0x1409F9340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FDDE8 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1404FDE34 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x1409F4524 (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140C505C5 || byte_140C505C4 )
  {
    byte_140C505C5 = 0;
    byte_140C505C4 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140C50A08 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
