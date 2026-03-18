/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0189E70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C0014950 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1C0052F60 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C018B770 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01CF630 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01CFA4C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rdx

  if ( (xmmword_1C0251BCC & 1) != 0
    || (dword_1C0251BC4 & 1) != 0
    || (dword_1C0251BA4 & 1) != 0
    || (dword_1C0251B8C & 1) != 0
    || (dword_1C0254DB4 & 1) != 0
    || (dword_1C0251B7C & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    LODWORD(xmmword_1C0251BCC) = xmmword_1C0251BCC & 0xFFFFFFFE;
    xxxTurnOffStickyKeys();
    dword_1C0251BA4 &= ~1u;
    dword_1C0251B8C &= ~1u;
    dword_1C0254DB4 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C0251B7C &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (qword_1C0251B94 & 2) != 0 )
      ApiSetEditionPostRitSound(1LL, v1, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
