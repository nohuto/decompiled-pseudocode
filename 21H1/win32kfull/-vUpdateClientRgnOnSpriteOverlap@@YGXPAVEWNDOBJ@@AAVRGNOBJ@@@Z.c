/*
 * XREFs of ?vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z @ 0x1E6921
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z @ 0x1E2DE5 (-vSpUpdateWndobjOverlap@@YGXPAU_SPRITESTATE@@PAVEWNDOBJ@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ @ 0x1E33D5 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bValid@EWNDOBJ@@QBEHXZ @ 0x1E6503 (-bValid@EWNDOBJ@@QBEHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z @ 0x1E68E5 (-vSetClip@EWNDOBJ@@QAEXPAVREGION@@VERECTL@@@Z.c)
 */

void __fastcall vUpdateClientRgnOnSpriteOverlap(int a1, struct RGNOBJ *a2)
{
  int v4; // edx
  _DWORD v5[2]; // [esp+Ch] [ebp-18h] BYREF
  int v6; // [esp+14h] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-Ch] BYREF
  int v8; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  if ( EWNDOBJ::bValid((EWNDOBJ *)a1) )
  {
    if ( (*(_DWORD *)(a1 + 140) & 0x200) != 0 )
    {
      v8 = *(_DWORD *)(a1 + 48);
      v9 = *(_DWORD *)(a1 + 148);
      if ( v9 )
      {
        if ( *(_DWORD *)a2 )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v5);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v5);
          if ( !v5[0] )
            goto LABEL_15;
          if ( RGNOBJ::iComplexity(a2) == 1 )
          {
            RGNOBJ::bCopy((RGNOBJ *)v5, (struct RGNOBJ *)&v9);
          }
          else if ( !RGNOBJ::bMerge((RGNOBJ *)v5, a2, (struct RGNOBJ *)&v9, 8u)
                 || RGNOBJ::iComplexity((RGNOBJ *)v5) == 1
                 || (RGNOBJ::vSwap((RGNOBJ *)v5, a2), !RGNOBJ::bMerge((RGNOBJ *)v5, (struct RGNOBJ *)&v9, a2, 4u))
                 || RGNOBJ::iComplexity((RGNOBJ *)v5) == 1 )
          {
            RGNOBJ::vSet((RGNOBJ *)v5);
LABEL_15:
            RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v5);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v5);
            if ( v5[1] == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v5);
            return;
          }
          if ( !RGNOBJ::bEqual((RGNOBJ *)&v8, (struct RGNOBJ *)v5) )
          {
            v6 = _ghsemWndobj;
            GreAcquireSemaphore(_ghsemWndobj);
            v7 = *(_DWORD *)(a1 + 152);
            GreAcquireSemaphore(v7);
            RGNOBJ::vSwap((RGNOBJ *)v5, (struct RGNOBJ *)&v8);
            v4 = v8;
            *(_DWORD *)(a1 + 48) = v8;
            *(_DWORD *)(v4 + 20) = _InterlockedIncrement((volatile signed __int32 *)REGION::ulUniqueREGION);
            EWNDOBJ::vSetClip(
              a1,
              *(struct REGION **)(a1 + 48),
              *(_DWORD *)(a1 + 28),
              *(_DWORD *)(a1 + 32),
              *(_DWORD *)(a1 + 36),
              *(_DWORD *)(a1 + 40));
            (*(void (__stdcall **)(int, int))(*(_DWORD *)(a1 + 132) + 20))(a1, 512);
            SEMOBJ::vUnlock((SEMOBJ *)&v7);
            SEMOBJ::vUnlock((SEMOBJ *)&v6);
          }
          goto LABEL_15;
        }
      }
    }
  }
}
