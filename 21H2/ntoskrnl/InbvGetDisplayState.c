/*
 * XREFs of InbvGetDisplayState @ 0x140550BFC
 * Callers:
 *     FinalizeBootLogo @ 0x140550E2C (FinalizeBootLogo.c)
 *     InbvRotateGuiBootDisplay @ 0x140550E80 (InbvRotateGuiBootDisplay.c)
 *     RotBarUpdate @ 0x140550FDC (RotBarUpdate.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 InbvGetDisplayState()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C54D10 && (v0 = *(__int64 (**)(void))(qword_140C54D10 + 144)) != 0LL )
    return v0();
  else
    return 2LL;
}
