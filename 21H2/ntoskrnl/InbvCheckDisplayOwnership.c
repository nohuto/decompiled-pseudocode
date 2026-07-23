/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1404FEEB0
 * Callers:
 *     HalpCheckPowerButton @ 0x1403F0020 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404BE480 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FF190 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50BA8 && (v0 = *(__int64 (**)(void))(qword_140C50BA8 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
