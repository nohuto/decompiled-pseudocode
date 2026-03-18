/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0183410
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C0074F10 (PostWinlogonMessage.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0181210 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01ABC80 (xxxProcessKeyEvent.c)
 *     ApiSetEditionPostRitSound @ 0x1C01C774C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1, __int64 a2)
{
  char v2; // al
  _OWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF

  v2 = dword_1C0249B8C;
  memset(v3, 0, sizeof(v3));
  if ( (dword_1C0249B8C & 1) != 0 )
  {
    dword_1C0249B8C &= ~1u;
    if ( (v2 & 0x10) != 0 )
      ApiSetEditionPostRitSound(1LL, a2, 0LL);
  }
  else
  {
    if ( (dword_1C0249B8C & 0x10) != 0 )
      ApiSetEditionPostRitSound(0LL, a2, 0LL);
    PostWinlogonMessage(1026LL, 4u);
  }
  LOBYTE(v3[0]) = gTKScanCode;
  WORD1(v3[0]) = gNumLockVk | 0x8000;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v3, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent(v3, gTKExtraInformation, 0LL, 0LL, 0LL, 0LL);
  WORD1(v3[0]) = gNumLockVk;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v3, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent(v3, gTKExtraInformation, 0LL, 0LL, 0LL, 0LL);
}
