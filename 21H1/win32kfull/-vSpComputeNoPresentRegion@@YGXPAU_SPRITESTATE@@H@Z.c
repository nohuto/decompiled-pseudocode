/*
 * XREFs of ?vSpComputeNoPresentRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA00EE
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 *     _GreDeleteSpriteOverlapPresent@8 @ 0x7193A (_GreDeleteSpriteOverlapPresent@8.c)
 *     ?vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z @ 0xA00C0 (-vSpRemoveAllSpriteOverlapPresents@@YGXPAUHDEV__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z @ 0x1DB290 (-GreAddSpriteOverlapPresent@@YGHPAUHDEV__@@PAUHWND__@@@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z @ 0xA0362 (-vSpComputeUnlockedRegion@@YGXPAU_SPRITESTATE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _UserGetClientRgn@12 @ 0x154297 (_UserGetClientRgn@12.c)
 *     ?sizl@PDEVOBJ@@QAE?AUtagSIZE@@XZ @ 0x1D37FE (-sizl@PDEVOBJ@@QAE-AUtagSIZE@@XZ.c)
 */

void __fastcall vSpComputeNoPresentRegion(int *a1, int a2)
{
  REGION *v3; // ecx
  int v4; // esi
  REGION *v5; // ecx
  int v6; // edi
  HRGN ClientRgn; // eax
  bool v8; // zf
  struct RGNOBJ *v9; // eax
  int v10; // edi
  int v11; // edx
  signed __int32 v12; // ecx
  void (__thiscall *v13)(RGNOBJ *__hidden); // esi
  RGNOBJ *v14; // ecx
  struct _SPRITESTATE *v15; // [esp+0h] [ebp-68h]
  _DWORD v16[3]; // [esp+Ch] [ebp-5Ch] BYREF
  int v17; // [esp+18h] [ebp-50h]
  _DWORD v18[2]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v19; // [esp+24h] [ebp-44h]
  struct _POINTL v20; // [esp+28h] [ebp-40h] BYREF
  _DWORD v21[2]; // [esp+30h] [ebp-38h] BYREF
  _DWORD v22[2]; // [esp+38h] [ebp-30h] BYREF
  int v23; // [esp+40h] [ebp-28h] BYREF
  struct _RECTL v24; // [esp+44h] [ebp-24h] BYREF
  struct _RECTL v25; // [esp+54h] [ebp-14h] BYREF

  v19 = a2;
  memset(&v25, 0, sizeof(v25));
  v3 = (REGION *)a1[163];
  v4 = *a1;
  v23 = *a1;
  if ( v3 )
  {
    REGION::vDeleteREGION(v3);
    a1[163] = 0;
  }
  if ( !v19 )
  {
    v5 = (REGION *)a1[162];
    if ( v5 )
    {
      REGION::vDeleteREGION(v5);
      a1[162] = 0;
    }
  }
  v17 = a1[13];
  if ( v17 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v22, 0, 1);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18, 0, 1);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
    if ( v22[0] && v18[0] )
    {
      v25.right = *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v23).cx;
      v25.bottom = *(_DWORD *)(PDEVOBJ::sizl((PDEVOBJ *)&v23).cx + 4);
      RGNOBJ::vSet((RGNOBJ *)v22, &v25);
      RGNOBJ::vSet((RGNOBJ *)v18, &v25);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21, 0, 1);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
      if ( v21[0] )
      {
        do
        {
          memset(&v24, 0, sizeof(v24));
          v6 = v17;
          ClientRgn = (HRGN)UserGetClientRgn(0);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, ClientRgn, 0);
          if ( v16[0] )
          {
            v20.x = -*(_DWORD *)(v4 + 1836);
            v20.y = -*(_DWORD *)(v4 + 1840);
            RGNOBJ::bOffset((RGNOBJ *)v16, &v20);
            v23 = a1[96];
            RGNOBJ::vSet((RGNOBJ *)&v23, &v24);
            v20.x = -*(_DWORD *)(v4 + 1836);
            v20.y = -*(_DWORD *)(v4 + 1840);
            RGNOBJ::bOffset((RGNOBJ *)v16, &v20);
            RGNOBJ::bOffset((RGNOBJ *)&v23, &v20);
            v8 = RGNOBJ::iComplexity((RGNOBJ *)v16) == 1;
            v9 = (struct RGNOBJ *)v16;
            if ( v8 )
              v9 = (struct RGNOBJ *)&v23;
            if ( RGNOBJ::bMerge((RGNOBJ *)v21, (struct RGNOBJ *)v22, v9, 4u) )
              RGNOBJ::vSwap((RGNOBJ *)v21, (struct RGNOBJ *)v22);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v16);
          }
          v10 = *(_DWORD *)(v6 + 4);
          v17 = v10;
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
        }
        while ( v10 );
      }
      v11 = v22[0];
      v12 = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
      v8 = v19 == 0;
      *(_DWORD *)(v11 + 20) = v12;
      if ( v8 )
        a1[162] = v22[0];
      else
        a1[163] = v22[0];
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v21);
      v13 = RGNOBJ::vDeleteRGNOBJ;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v21);
      if ( v21[1] != 1 )
        goto LABEL_24;
      v14 = (RGNOBJ *)v21;
    }
    else
    {
      v13 = RGNOBJ::vDeleteRGNOBJ;
      v14 = (RGNOBJ *)v22;
    }
    v13(v14);
LABEL_24:
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v18);
    v13((RGNOBJ *)v18);
    if ( v18[1] == 1 )
      v13((RGNOBJ *)v18);
    if ( v22[1] == 1 )
      v13((RGNOBJ *)v22);
  }
  if ( !v19 )
    vSpComputeUnlockedRegion(v15);
}
