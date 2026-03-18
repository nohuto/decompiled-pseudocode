/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1404F9B00
 * Callers:
 *     HalpCheckPowerButton @ 0x1403ECA10 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404B9360 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x1404F9DE0 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C50960 && (v0 = *(__int64 (**)(void))(qword_140C50960 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
