/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0184250
 * Callers:
 *     <none>
 * Callees:
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0183750 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01AE000 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C9ACC (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01CA404 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax

  if ( (xmmword_1C024BBCC & 0x40) != 0 )
    ApiSetEditionPostRitSound(4LL, a2, 0LL);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent(&gFKKeyEvent, gFKExtraInformation, 0LL, 0LL, 0LL, 0LL);
  v4 = HIDWORD(xmmword_1C024BBCC);
  if ( HIDWORD(xmmword_1C024BBCC) )
  {
    if ( DWORD2(xmmword_1C024BBCC) )
      v4 = DWORD2(xmmword_1C024BBCC);
    v5 = ApiSetEditionSetAccessibilityTimer(a3, v4, xxxFKRepeatRateTimer);
    gtmridFKAcceptanceDelay = 0LL;
    gtmridFKResponse = v5;
  }
  else
  {
    gdwPUDFlags |= 0x800u;
  }
}
