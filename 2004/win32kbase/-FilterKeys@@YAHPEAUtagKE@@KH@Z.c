/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C0183970
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C01C8C60 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C9ACC (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C01CA404 (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall FilterKeys(struct tagKE *a1, __int64 a2, int a3)
{
  char v4; // di
  int v5; // esi
  unsigned int v6; // r15d
  __int64 v8; // rcx
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdx

  v4 = *((_BYTE *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  v6 = a2;
  if ( v4 == -95 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      a2 = gtmridFKActivation;
      if ( gtmridFKActivation )
      {
        ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
        gtmridFKActivation = 0LL;
      }
      gFilterKeysState = 0;
    }
    else if ( gPhysModifierState == 2 && (xmmword_1C024BBCC & 4) != 0 && !gtmridFKActivation && gFilterKeysState != 8 )
    {
      gFilterKeysState = 1;
      gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(0LL, 4000LL, FKActivationTimer);
    }
  }
  else
  {
    a2 = gtmridFKActivation;
    if ( gtmridFKActivation )
    {
      gFilterKeysState = 0;
      ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
      gtmridFKActivation = 0LL;
    }
  }
  if ( (xmmword_1C024BBCC & 1) == 0 )
    return 1LL;
  if ( !v5 )
  {
    if ( v4 != gLastVkDown )
    {
      gLastVkDown = v4;
      if ( gBounceVk )
      {
        if ( v4 == gBounceVk )
        {
          gdwPUDFlags |= 0x400u;
          return 0LL;
        }
        if ( gtmridFKResponse )
        {
          ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
          gtmridFKResponse = 0LL;
        }
        gBounceVk = 0;
      }
      gdwPUDFlags &= ~0x400u;
      if ( (xmmword_1C024BBCC & 0x40) != 0 )
        ApiSetEditionPostRitSound(4LL, a2, 0LL);
      if ( gtmridFKAcceptanceDelay )
      {
        ApiSetEditionKillAccessibilityTimer(a1, gtmridFKAcceptanceDelay);
        gtmridFKAcceptanceDelay = 0LL;
      }
      if ( gtmridFKResponse )
      {
        ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
        gtmridFKResponse = 0LL;
      }
      v10 = *(_OWORD *)a1;
      gFKExtraInformation = v6;
      gFKNextProcIndex = a3;
      gFKKeyEvent = v10;
      xmmword_1C0253EB0 = *((_OWORD *)a1 + 1);
      if ( !DWORD1(xmmword_1C024BBCC) )
      {
        v12 = HIDWORD(xmmword_1C024BBCC);
        if ( HIDWORD(xmmword_1C024BBCC) )
        {
          if ( DWORD2(xmmword_1C024BBCC) )
            v12 = DWORD2(xmmword_1C024BBCC);
          gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, v12, xxxFKRepeatRateTimer);
        }
        return 1LL;
      }
      v11 = ApiSetEditionSetAccessibilityTimer(0LL, DWORD1(xmmword_1C024BBCC), xxxFKAcceptanceDelayTimer);
      gdwPUDFlags &= ~0x800u;
      gtmridFKAcceptanceDelay = v11;
    }
    return 0LL;
  }
  if ( v4 != gLastVkDown )
    return 1LL;
  ApiSetEditionKillAccessibilityTimer(a1, gtmridFKResponse);
  gtmridFKResponse = 0LL;
  gLastVkDown = 0;
  if ( gtmridFKAcceptanceDelay )
  {
    ApiSetEditionKillAccessibilityTimer(v8, gtmridFKAcceptanceDelay);
    gtmridFKAcceptanceDelay = 0LL;
    if ( (gdwPUDFlags & 0x800) != 0 )
    {
      gdwPUDFlags &= ~0x800u;
      goto LABEL_19;
    }
    return 0LL;
  }
LABEL_19:
  if ( Value )
  {
    gBounceVk = v4;
    gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, Value, FKBounceKeyTimer);
    if ( (gdwPUDFlags & 0x400) != 0 )
      return 0LL;
  }
  return 1LL;
}
