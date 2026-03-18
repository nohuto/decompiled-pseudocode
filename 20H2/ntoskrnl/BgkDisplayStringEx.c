/*
 * XREFs of BgkDisplayStringEx @ 0x1404FDC04
 * Callers:
 *     BgkDisplayString @ 0x1404FDB50 (BgkDisplayString.c)
 *     NtDisplayString @ 0x14094ECB0 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     HeadlessDispatch @ 0x1403BBE60 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FDDE8 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x1409F4524 (BgDisplayFade.c)
 */

char __fastcall BgkDisplayStringEx(_WORD *a1)
{
  __int64 v3; // r8
  bool v4; // bl

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 1;
  if ( !(unsigned __int8)BgkpAcquireConsole() )
    return 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  HeadlessDispatch(23LL, (__int64)a1, 2 * v3 + 2, 0LL, 0LL);
  if ( byte_140C505C5 || byte_140C505C4 )
  {
    byte_140C505C5 = 0;
    byte_140C505C4 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140C50A08 + 24))(a1) >= 0;
  ExReleaseRundownProtection_0(&stru_140C11258);
  return v4;
}
