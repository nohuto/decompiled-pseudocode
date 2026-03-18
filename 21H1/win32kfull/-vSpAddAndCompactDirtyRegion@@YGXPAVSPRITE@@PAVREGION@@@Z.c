/*
 * XREFs of ?vSpAddAndCompactDirtyRegion@@YGXPAVSPRITE@@PAVREGION@@@Z @ 0x1DFED7
 * Callers:
 *     ?vSpRedrawSprite@@YGXPAVSPRITE@@@Z @ 0x9FD10 (-vSpRedrawSprite@@YGXPAVSPRITE@@@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z @ 0x1DFD02 (-vSpAddAndCompactDirtyRect@@YGXPAVSPRITE@@VERECTL@@@Z.c)
 *     ?vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x1E0318 (-vSpComposite@@YGXPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall vSpAddAndCompactDirtyRegion(int a1, __int32 a2)
{
  volatile __int32 *v2; // ecx
  int v3; // esi
  int v4; // edi
  __int32 v5; // edx
  _DWORD v6[2]; // [esp+10h] [ebp-30h] BYREF
  volatile __int32 *v7; // [esp+18h] [ebp-28h]
  __int32 v8; // [esp+1Ch] [ebp-24h] BYREF
  _DWORD v9[2]; // [esp+20h] [ebp-20h] BYREF
  __int32 v10; // [esp+28h] [ebp-18h] BYREF
  struct _RECTL v11; // [esp+2Ch] [ebp-14h] BYREF

  v2 = (volatile __int32 *)(a1 + 136);
  v7 = v2;
  do
  {
    v3 = 0;
    v8 = a2;
    v10 = 0;
    if ( !a2 )
      break;
    v10 = _InterlockedExchange(v2, 0);
    if ( v10 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v9);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v9);
      if ( v9[0] )
      {
        v4 = RGNOBJ::iComplexity((RGNOBJ *)&v10);
        if ( RGNOBJ::bMerge((RGNOBJ *)v9, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v8, 0xEu) )
        {
          RGNOBJ::vSwap((RGNOBJ *)v9, (struct RGNOBJ *)&v10);
          v3 = 1;
          if ( v4 == 3 && RGNOBJ::iComplexity((RGNOBJ *)&v10) == 2 )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v6);
            if ( v6[0] )
            {
              v11 = *(struct _RECTL *)(v10 + 64);
              RGNOBJ::vSet((RGNOBJ *)v6, &v11);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
              v3 = 1;
              v10 = v6[0];
            }
            if ( v6[1] == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v6);
          }
        }
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v8);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v9);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v9);
      if ( v9[1] == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v9);
      v5 = v10;
      v2 = v7;
    }
    else
    {
      v5 = v8;
      v10 = v8;
      v3 = 1;
    }
    if ( !v3 )
      break;
    if ( !v5 )
      break;
    a2 = _InterlockedExchange(v2, v5);
    v10 = 0;
  }
  while ( a2 );
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v10);
}
