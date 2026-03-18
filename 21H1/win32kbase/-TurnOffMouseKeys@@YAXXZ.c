/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C0189E20
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C018B1B0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C00149C0 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01CF630 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01CFA4C (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // rdx

  dword_1C0251BA4 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C0251BA4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, v0, 0LL);
  ApiSetEditionPostAccessibility(3LL);
}
