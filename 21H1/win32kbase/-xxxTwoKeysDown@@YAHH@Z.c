/*
 * XREFs of ?xxxTwoKeysDown@@YAHH@Z @ 0x1C018B7D0
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C018B2B0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C018B8C0 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01CF630 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01CFA4C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall xxxTwoKeysDown(int a1, __int64 a2)
{
  char v2; // al

  v2 = dword_1C0251BC4;
  if ( (dword_1C0251BC4 & 0x100) != 0 )
  {
    dword_1C0251BC4 &= ~1u;
    if ( (v2 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, a2, 0LL);
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, a1);
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibility(1LL);
  return dword_1C0251BC4 & 1;
}
