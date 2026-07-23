/*
 * XREFs of BgkDisplayCharacter @ 0x1409F7340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FF908 (BgkpAcquireConsole.c)
 *     BgkpReleaseConsole @ 0x1404FF954 (BgkpReleaseConsole.c)
 *     BgDisplayFade @ 0x1409F261C (BgDisplayFade.c)
 */

__int64 __fastcall BgkDisplayCharacter(unsigned __int16 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v10; // ebx

  if ( !BgkpAcquireConsole() )
    return 3221225473LL;
  if ( byte_140C50785 || byte_140C50784 )
  {
    byte_140C50785 = 0;
    byte_140C50784 = 0;
    BgDisplayFade();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int))(qword_140C50BC0 + 32))(a1, a2, a3, a4, a5);
  BgkpReleaseConsole();
  return v10;
}
