/*
 * XREFs of InbvGetDisplayState @ 0x1404F950C
 * Callers:
 *     FinalizeBootLogo @ 0x1404F973C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9790 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1404F98EC (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50A98 && (v0 = *(__int64 (**)(void))(qword_140C50A98 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
