/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C0184120
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01854B0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C002F1E0 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01C96B0 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C9ACC (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // rdx

  dword_1C024BBA4 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C024BBA4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v0, 0LL);
  ApiSetEditionPostAccessibility(3LL);
}
