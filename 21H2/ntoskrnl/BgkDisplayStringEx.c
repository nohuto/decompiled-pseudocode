/*
 * XREFs of BgkDisplayStringEx @ 0x140551414
 * Callers:
 *     BgkDisplayString @ 0x140551360 (BgkDisplayString.c)
 *     NtDisplayString @ 0x1409F8B30 (NtDisplayString.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1405515F8 (BgkpAcquireConsole.c)
 *     BgDisplayFade @ 0x140AAB76C (BgDisplayFade.c)
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
  if ( byte_140C54905 || byte_140C54904 )
  {
    byte_140C54905 = 0;
    byte_140C54904 = 0;
    BgDisplayFade();
  }
  v4 = (*(int (__fastcall **)(_WORD *))(qword_140C54D30 + 24))(a1) >= 0;
  ExReleaseRundownProtection(&stru_140C0B8C8);
  return v4;
}
