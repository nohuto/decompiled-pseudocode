/*
 * XREFs of BgkSolidColorFill @ 0x1404FF910
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     BgkpAcquireConsole @ 0x1404FF988 (BgkpAcquireConsole.c)
 */

void __fastcall BgkSolidColorFill(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( !a1 && !a2 && a3 == 639 && a4 == 479 && a5 < 0x10 )
  {
    if ( (unsigned __int8)BgkpAcquireConsole() )
    {
      (*(void (__fastcall **)(_QWORD, char *))(qword_140C50B80 + 16))(0LL, (char *)Palette + 4 * a5);
      (*(void (**)(void))(qword_140C50B80 + 8))();
      ExReleaseRundownProtection_0(&stru_140C113C8);
    }
  }
}
