/*
 * XREFs of BgkDisplayStringEx @ 0x1404FF724
 * Callers:
 *     BgkDisplayString @ 0x1404FF670 (BgkDisplayString.c)
 *     NtDisplayString @ 0x14094C650 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     HeadlessDispatch @ 0x1403AF8D0 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FF908 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x1409F261C (BgDisplayFade.c)
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
  if ( byte_140C50785 || byte_140C50784 )
  {
    byte_140C50785 = 0;
    byte_140C50784 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140C50BC0 + 24))(a1) >= 0;
  ExReleaseRundownProtection(&stru_140C113A8);
  return v4;
}
