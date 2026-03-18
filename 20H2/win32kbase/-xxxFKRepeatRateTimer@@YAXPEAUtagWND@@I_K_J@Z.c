/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0181DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0181210 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01ABC80 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C774C (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01C8084 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  if ( (xmmword_1C0249BCC & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, a2, 0LL);
  gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(a3, HIDWORD(xmmword_1C0249BCC), xxxFKRepeatRateTimer);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent(&gFKKeyEvent, gFKExtraInformation, 0LL, 0LL, 0LL, 0LL);
}
