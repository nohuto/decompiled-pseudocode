/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01812E0
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C01C68E0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01C7330 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C774C (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01C8084 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall FKActivationTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  char v4; // al

  if ( gFilterKeysState == 1 )
    goto LABEL_20;
  if ( gFilterKeysState != 2 )
  {
    if ( gFilterKeysState != 3 )
    {
      if ( gFilterKeysState == 4 )
      {
        HIDWORD(xmmword_1C0249BCC) = 0;
        Value = 0;
        DWORD1(xmmword_1C0249BCC) = 2000;
        if ( (xmmword_1C0249BCC & 0x10) != 0 )
          ApiSetEditionPostRitSound(5LL, a2, 3LL);
      }
      return;
    }
    if ( (xmmword_1C0249BCC & 0x10) != 0 )
      ApiSetEditionPostRitSound(5LL, a2, 2LL);
    HIDWORD(xmmword_1C0249BCC) = 0;
    DWORD1(xmmword_1C0249BCC) = 0;
    Value = 1000;
LABEL_20:
    ++gFilterKeysState;
    gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(a3, 4000LL, FKActivationTimer);
    return;
  }
  v4 = xmmword_1C0249BCC;
  if ( (xmmword_1C0249BCC & 1) == 0 )
  {
    if ( (xmmword_1C0249BCC & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, a2, 0LL);
    PostWinlogonMessage(1026LL, 2u);
    goto LABEL_20;
  }
  LODWORD(xmmword_1C0249BCC) = xmmword_1C0249BCC & 0xFFFFFFFE;
  if ( (v4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(1LL, a2, 0LL);
  ApiSetEditionPostAccessibility(2LL);
  if ( gtmridFKResponse )
  {
    ApiSetEditionKillAccessibilityTimer();
    gtmridFKResponse = 0LL;
  }
  if ( gtmridFKAcceptanceDelay )
  {
    ApiSetEditionKillAccessibilityTimer();
    gtmridFKAcceptanceDelay = 0LL;
  }
}
