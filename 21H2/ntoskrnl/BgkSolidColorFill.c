/*
 * XREFs of BgkSolidColorFill @ 0x140551580
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1405515F8 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_140C54D30 + 16))(0LL, (char *)Palette + 4 * a5);
      (*(void (**)(void))(qword_140C54D30 + 8))();
      ExReleaseRundownProtection(&stru_140C0B8C8);
    }
  }
}
