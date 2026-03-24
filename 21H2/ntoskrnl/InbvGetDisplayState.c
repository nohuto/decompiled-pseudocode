/*
 * XREFs of InbvGetDisplayState @ 0x1404FEF8C
 * Callers:
 *     FinalizeBootLogo @ 0x1404FF1BC (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF210 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1404FF36C (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50B68 && (v0 = *(__int64 (**)(void))(qword_140C50B68 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
