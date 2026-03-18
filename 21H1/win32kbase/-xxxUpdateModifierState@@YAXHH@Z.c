/*
 * XREFs of ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C018B8C0
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C018B2B0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C018B770 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C018B7D0 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUnlatchStickyKeys@@YAXXZ @ 0x1C018B850 (-xxxUnlatchStickyKeys@@YAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0189450 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01B3D60 (xxxProcessKeyEvent.c)
 */

void __fastcall xxxUpdateModifierState(int a1, unsigned int a2)
{
  _DWORD *v2; // rbx
  int v3; // esi
  unsigned int v5; // edi
  int v7; // ecx
  __int16 v8; // ax
  _OWORD v9[2]; // [rsp+30h] [rbp-48h] BYREF

  v2 = &unk_1C0227DF4;
  v3 = (unsigned __int8)gLockBits | (unsigned __int8)gLatchBits;
  v5 = 0;
  memset(v9, 0, sizeof(v9));
  do
  {
    v7 = v3 & *(v2 - 1);
    if ( v7 != (a1 & *(v2 - 1)) )
    {
      LOBYTE(v9[0]) = *(_BYTE *)v2;
      v8 = *((_WORD *)v2 + 1);
      WORD1(v9[0]) = v8;
      if ( v7 )
        WORD1(v9[0]) = v8 | 0x8000;
      if ( (unsigned int)AccessProceduresStream((struct tagKE *)v9, 0, a2) )
        xxxProcessKeyEvent(v9, 0LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++v5;
    v2 += 2;
  }
  while ( v5 < 8 );
}
