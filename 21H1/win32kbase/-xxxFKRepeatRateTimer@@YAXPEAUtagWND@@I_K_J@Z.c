/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C018A010
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0189450 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01B3D60 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C01CFA4C (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01D0384 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  if ( (xmmword_1C0251BCC & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, a2, 0LL);
  gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(a3, HIDWORD(xmmword_1C0251BCC), xxxFKRepeatRateTimer);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent(&gFKKeyEvent, gFKExtraInformation, 0LL, 0LL, 0LL, 0LL);
}
