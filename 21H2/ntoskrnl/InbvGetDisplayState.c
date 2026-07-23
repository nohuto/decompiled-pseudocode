/*
 * XREFs of InbvGetDisplayState @ 0x1404FEF0C
 * Callers:
 *     FinalizeBootLogo @ 0x1404FF13C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF190 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x1404FF2EC (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50BA8 && (v0 = *(__int64 (**)(void))(qword_140C50BA8 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
