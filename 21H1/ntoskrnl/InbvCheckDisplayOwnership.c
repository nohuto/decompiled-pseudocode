/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1404F94B0
 * Callers:
 *     HalpCheckPowerButton @ 0x1403EBA70 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404B8C80 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9790 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50A98 && (v0 = *(__int64 (**)(void))(qword_140C50A98 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
