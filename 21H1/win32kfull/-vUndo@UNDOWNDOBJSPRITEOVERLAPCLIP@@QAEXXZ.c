/*
 * XREFs of ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QAEXXZ @ 0x1E33D5
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z @ 0x1E22F2 (-vSpRedrawUncoveredArea@@YGXPAVSPRITE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z @ 0x1DA5B3 (--0UNDODESKTOPCOORD@@QAE@PAVEWNDOBJ@@PAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QAE@XZ @ 0x1DA6E7 (--1UNDODESKTOPCOORD@@QAE@XZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z @ 0x1E6921 (-vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z.c)
 */

void __thiscall UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  int v2; // eax
  struct TRACKOBJ *i; // edi
  struct EWNDOBJ *v4; // esi
  struct _SPRITESTATE *v5; // edi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  struct EWNDOBJ *v9; // [esp+0h] [ebp-38h]
  struct RGNOBJ *v10; // [esp+4h] [ebp-34h]
  _BYTE v11[12]; // [esp+10h] [ebp-28h] BYREF
  int v12; // [esp+1Ch] [ebp-1Ch] BYREF
  int v13; // [esp+20h] [ebp-18h] BYREF
  struct _SPRITESTATE *v14; // [esp+24h] [ebp-14h]
  struct TRACKOBJ *v15; // [esp+28h] [ebp-10h]
  int v16; // [esp+2Ch] [ebp-Ch]
  unsigned int v17; // [esp+30h] [ebp-8h]
  int v18; // [esp+34h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this;
  v12 = _ghsemWndobj;
  v14 = *(struct _SPRITESTATE **)(v2 + 12);
  GreAcquireSemaphore(_ghsemWndobj);
  for ( i = gpto; ; i = (struct TRACKOBJ *)*((_DWORD *)i + 1) )
  {
    v15 = i;
    if ( !i )
      break;
    v4 = (struct EWNDOBJ *)*((_DWORD *)i + 3);
    if ( v4 )
    {
      v5 = v14;
      do
      {
        UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v11, v4, v5);
        if ( (*((_DWORD *)v4 + 35) & 0x200) != 0 )
        {
          v6 = *((_DWORD *)v4 + 37);
          v7 = *((_DWORD *)v5 + 96);
          v18 = v7;
          v13 = v6;
          if ( v6 )
          {
            if ( v7 )
            {
              v17 = 0;
              if ( *((_DWORD *)this + 1) )
              {
                v8 = 0;
                v16 = 0;
                while ( RGNOBJ::bInside((RGNOBJ *)&v13, (struct _RECTL *)(v8 + *((_DWORD *)this + 2))) != 2 )
                {
                  v8 = v16 + 16;
                  ++v17;
                  v16 += 16;
                  if ( v17 >= *((_DWORD *)this + 1) )
                    goto LABEL_13;
                }
                RGNOBJ::vSet((RGNOBJ *)&v18);
                vUpdateClientRgnOnSpriteOverlap(v9, v10);
                *((_DWORD *)v5 + 96) = v18;
                *((_DWORD *)v4 + 35) |= 0x800000u;
              }
            }
          }
        }
LABEL_13:
        UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v11);
        v4 = (struct EWNDOBJ *)*((_DWORD *)v4 + 32);
      }
      while ( v4 );
      i = v15;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
}
