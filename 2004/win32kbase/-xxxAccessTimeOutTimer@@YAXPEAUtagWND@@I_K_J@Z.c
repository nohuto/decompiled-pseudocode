/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0184170
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C002EFE0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C0060510 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0185A70 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01C96B0 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C9ACC (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (xmmword_1C024BBCC & 1) != 0
    || (dword_1C024BBC4 & 1) != 0
    || (dword_1C024BBA4 & 1) != 0
    || (dword_1C024BB8C & 1) != 0
    || (dword_1C024EE24 & 1) != 0
    || (dword_1C024BB7C & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    LODWORD(xmmword_1C024BBCC) = xmmword_1C024BBCC & 0xFFFFFFFE;
    xxxTurnOffStickyKeys();
    dword_1C024BBA4 &= ~1u;
    dword_1C024BB8C &= ~1u;
    dword_1C024EE24 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C024BB7C &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (qword_1C024BB94 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v1, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
