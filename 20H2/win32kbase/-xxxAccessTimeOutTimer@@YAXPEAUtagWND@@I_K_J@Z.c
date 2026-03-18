/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0181C30
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C008DC50 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0183530 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01C7330 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C774C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (xmmword_1C0249BCC & 1) != 0
    || (dword_1C0249BC4 & 1) != 0
    || (dword_1C0249BA4 & 1) != 0
    || (dword_1C0249B8C & 1) != 0
    || (dword_1C024CE24 & 1) != 0
    || (dword_1C0249B7C & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    LODWORD(xmmword_1C0249BCC) = xmmword_1C0249BCC & 0xFFFFFFFE;
    xxxTurnOffStickyKeys();
    dword_1C0249BA4 &= ~1u;
    dword_1C0249B8C &= ~1u;
    dword_1C024CE24 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C0249B7C &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (qword_1C0249B94 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v1, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
