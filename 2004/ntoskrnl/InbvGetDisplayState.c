/*
 * XREFs of InbvGetDisplayState @ 0x1404F9B5C
 * Callers:
 *     FinalizeBootLogo @ 0x1404F9D8C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9DE0 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1404F9F3C (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50960 && (v0 = *(__int64 (**)(void))(qword_140C50960 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
