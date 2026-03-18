/*
 * XREFs of BgkDisplayStringEx @ 0x1404FA374
 * Callers:
 *     BgkDisplayString @ 0x1404FA2C0 (BgkDisplayString.c)
 *     NtDisplayString @ 0x140948EF0 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     HeadlessDispatch @ 0x1403B99E0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FA558 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x1409EE524 (BgDisplayFade.c)
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
  if ( byte_140C50545 || byte_140C50544 )
  {
    byte_140C50545 = 0;
    byte_140C50544 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140C50978 + 24))(a1) >= 0;
  ExReleaseRundownProtection_0(&stru_140C11238);
  return v4;
}
