/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C0181BE0
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C0182F70 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C008DCC0 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01C7330 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C774C (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // rdx

  dword_1C0249BA4 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C0249BA4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v0, 0LL);
  ApiSetEditionPostAccessibility(3LL);
}
