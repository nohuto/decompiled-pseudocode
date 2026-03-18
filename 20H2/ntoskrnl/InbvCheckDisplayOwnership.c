/*
 * XREFs of InbvCheckDisplayOwnership @ 0x1404FD390
 * Callers:
 *     HalpCheckPowerButton @ 0x1403EF540 (HalpCheckPowerButton.c)
 *     HaliHaltSystem @ 0x1404BC880 (HaliHaltSystem.c)
 *     InbvRotateGuiBootDisplay @ 0x1404FD670 (InbvRotateGuiBootDisplay.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char InbvCheckDisplayOwnership()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C509E8 && (v0 = *(__int64 (**)(void))(qword_140C509E8 + 64)) != 0LL )
    return v0();
  else
    return 0;
}
