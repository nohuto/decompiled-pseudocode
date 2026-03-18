/*
 * XREFs of ?vComputeUncoveredSpriteRegion@RGNOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0xA07DE
 * Callers:
 *     ?vSpComputeUncoveredRegion@@YGXPAU_SPRITESTATE@@H@Z @ 0xA0730 (-vSpComputeUncoveredRegion@@YGXPAU_SPRITESTATE@@H@Z.c)
 * Callees:
 *     ?vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z @ 0xA0662 (-vSpComputeSpriteRanges@@YGXPAU_SPRITESTATE@@@Z.c)
 *     ?bEnum@ENUMUNCOVERED@@QAEHPAU_RECTL@@@Z @ 0xA0906 (-bEnum@ENUMUNCOVERED@@QAEHPAU_RECTL@@@Z.c)
 */

void __thiscall RGNOBJ::vComputeUncoveredSpriteRegion(RGNOBJ *this, struct PDEVOBJ *a2)
{
  _DWORD *v2; // ebx
  int v3; // eax
  int *v4; // esi
  int v5; // ecx
  unsigned int v6; // edx
  LONG top; // ecx
  int v8; // edi
  LONG bottom; // ebx
  struct PDEVOBJ *v10; // eax
  char *v11; // eax
  int v12; // eax
  RGNOBJ *v13; // edx
  int *v14; // ecx
  _DWORD v15[4]; // [esp+10h] [ebp-2Ch] BYREF
  struct _RECTL v16; // [esp+20h] [ebp-1Ch] BYREF
  RGNOBJ *v17; // [esp+30h] [ebp-Ch]
  unsigned int v18; // [esp+34h] [ebp-8h]
  struct PDEVOBJ *v19; // [esp+44h] [ebp+8h]

  v2 = *(_DWORD **)a2;
  v3 = *(_DWORD *)this;
  v17 = this;
  v4 = *(int **)(v3 + 60);
  memset(&v16, 0, sizeof(v16));
  RGNOBJ::vSet(this);
  if ( !v2[37] )
    vSpComputeSpriteRanges(v2 + 16);
  v5 = v2[40];
  v15[0] = v2[24];
  v15[1] = v5;
  v15[3] = v5 + 4;
  v15[2] = v5 + *(_DWORD *)(v5 + 8);
  if ( ENUMUNCOVERED::bEnum((ENUMUNCOVERED *)v15, &v16) )
  {
    v6 = 0x80000000;
    top = v16.top;
    v8 = 0;
    v18 = 0x80000000;
    bottom = v16.top;
    v10 = *(struct PDEVOBJ **)(*(_DWORD *)v17 + 56);
    v19 = v10;
    while ( 1 )
    {
      if ( top != v6 )
      {
        v11 = (char *)v10 + 1;
        v4[1] = v6;
        v4[2] = bottom;
        *v4 = v8;
        v19 = (struct PDEVOBJ *)v11;
        v4[v8 + 3] = v8;
        if ( top != bottom )
        {
          v19 = (struct PDEVOBJ *)(v11 + 1);
          v4 += *v4 + 4;
          *v4 = 0;
          v4[1] = bottom;
          v4[2] = top;
          v4[3] = 0;
        }
        v12 = *v4;
        bottom = v16.bottom;
        v18 = top;
        v4 += v12 + 4;
        v8 = 0;
      }
      v4[v8 + 3] = v16.left;
      v4[v8 + 4] = v16.right;
      v8 += 2;
      if ( !ENUMUNCOVERED::bEnum((ENUMUNCOVERED *)v15, &v16) )
        break;
      top = v16.top;
      v10 = v19;
      v6 = v18;
    }
    v13 = v17;
    v4[1] = v18;
    *v4 = v8;
    v4[2] = bottom;
    v4[v8 + 3] = v8;
    v14 = &v4[*v4 + 4];
    *v14 = 0;
    v14[1] = bottom;
    v14[2] = 0x7FFFFFFF;
    v14[3] = 0;
    *(_DWORD *)(*(_DWORD *)v13 + 32) = &v14[*v14 + 4];
    *(_DWORD *)(*(_DWORD *)v13 + 56) = (char *)v19 + 1;
    *(_DWORD *)(*(_DWORD *)v13 + 52) = 0;
    *(_DWORD *)(*(_DWORD *)v13 + 52) += *(_DWORD *)(*(_DWORD *)v13 + 32) - *(_DWORD *)(*(_DWORD *)v13 + 60);
  }
}
