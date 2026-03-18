/*
 * XREFs of ?bSpGetSpriteClipRgns@@YGHPAUHDEV__@@AAVRGNOBJAPI@@@Z @ 0x1DE1C0
 * Callers:
 *     ?GdiGetSpriteClipRgns@@YGHPAUHDEV__@@PAUHRGN__@@@Z @ 0x1DA9EC (-GdiGetSpriteClipRgns@@YGHPAUHDEV__@@PAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall bSpGetSpriteClipRgns(int a1, RGNOBJAPI *a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax
  int i; // esi
  struct RGNOBJ *v6; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v9[2]; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+20h] [ebp-Ch]
  RGNOBJAPI *v12; // [esp+24h] [ebp-8h]
  int v13; // [esp+28h] [ebp-4h] BYREF

  v12 = a2;
  v2 = 0;
  v11 = a1;
  if ( *(_DWORD *)(a1 + 68) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v9);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v9);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v8);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v8);
    v3 = v11;
    v4 = *(_DWORD *)(v11 + 448);
    v13 = v4;
    if ( *(_DWORD *)v12 && v4 && v9[0] && v8[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)&v13);
      RGNOBJ::vSet((RGNOBJ *)v9);
      RGNOBJ::vSet((RGNOBJ *)v8);
      for ( i = *(_DWORD *)(v3 + 68); ; i = *(_DWORD *)(i + 16) )
      {
        if ( !i )
        {
          RGNOBJAPI::bSwap(v12, (struct RGNOBJ *)&v13);
          v2 = 1;
          *(_DWORD *)(v11 + 448) = v13;
          break;
        }
        if ( (*(_BYTE *)i & 1) == 0 )
        {
          if ( *(_DWORD *)(i + 40) )
          {
            v10 = *(_DWORD *)(i + 132);
            if ( !v10 )
              continue;
            v6 = (struct RGNOBJ *)&v10;
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)v8, (struct _RECTL *)(i + 44));
            v6 = (struct RGNOBJ *)v8;
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)v9, (struct RGNOBJ *)&v13, v6, 0xEu) )
            RGNOBJ::vSwap((RGNOBJ *)&v13, (struct RGNOBJ *)v9);
          else
            RGNOBJ::vSet((RGNOBJ *)v9);
        }
      }
    }
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v8);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v8);
    if ( v8[1] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v8);
    RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)v9);
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v9);
    if ( v9[1] == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v9);
  }
  return v2;
}
