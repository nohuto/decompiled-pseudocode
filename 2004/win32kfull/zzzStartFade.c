/*
 * XREFs of zzzStartFade @ 0x1C01E8C4C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00BB110 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01E8D28 (zzzStartSonar.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0236A7C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C006024C (_SetSystemTimer.c)
 *     zzzShowFade @ 0x1C01E8BE4 (zzzShowFade.c)
 */

__int64 zzzStartFade()
{
  GreSetDCOwnerEx(gfade[1], 0LL, 0LL, 1LL);
  GreSetBitmapOwner(gfade[2], 0LL);
  zzzShowFade();
  HIDWORD(gfade[5]) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                    - (40 * LODWORD(gfade[5]) + 255) / 0xFFu;
  return SetSystemTimer(gTermIO[1], 65526, (LODWORD(gfade[6]) & 0x80u) != 0 ? 50 : 10, (int)xxxSystemTimerProc, 1);
}
