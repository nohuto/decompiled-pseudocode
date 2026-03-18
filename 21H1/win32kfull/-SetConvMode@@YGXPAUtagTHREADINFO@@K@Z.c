/*
 * XREFs of ?SetConvMode@@YGXPAUtagTHREADINFO@@K@Z @ 0xA5962
 * Callers:
 *     _xxxNotifyIMEStatus@12 @ 0xA58A2 (_xxxNotifyIMEStatus@12.c)
 * Callees:
 *     <none>
 */

void __fastcall SetConvMode(int a1, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi
  char v5; // al
  char v6; // al
  char *v7; // esi
  char v8; // al
  char v9; // al
  int v10; // ecx
  char v11; // al
  char v12; // al
  int v13; // esi
  char v14; // al
  int v15; // eax
  int v16; // eax
  char v17; // bl
  int v18; // esi
  char v19; // al

  v2 = *(_DWORD *)(a1 + 240);
  if ( v2 )
  {
    v3 = (*(_WORD *)(v2 + 20) & 0x3FF) - 17;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = *(_DWORD *)(a1 + 236);
        v5 = *(_BYTE *)(v4 + 157);
        if ( (a2 & 1) != 0 )
          v6 = v5 | 8;
        else
          v6 = v5 & 0xF7;
        *(_BYTE *)(v4 + 157) = v6;
        v7 = (char *)(*(_DWORD *)(a1 + 236) + 157);
        v8 = *v7;
        if ( (a2 & 8) != 0 )
          v9 = v8 | 0x80;
        else
          v9 = v8 & 0x7F;
        *v7 = v9;
        v10 = *(_DWORD *)(a1 + 236);
        v11 = *(_BYTE *)(v10 + 158);
        if ( (a2 & 0x40) != 0 )
          v12 = v11 | 8;
        else
          v12 = v11 & 0xF7;
        *(_BYTE *)(v10 + 158) = v12;
      }
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) &= ~1u;
      *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) &= ~2u;
      *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) &= ~4u;
      *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) &= ~8u;
      *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) &= ~0x10u;
      *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) &= ~0x20u;
      v13 = *(_DWORD *)(a1 + 236);
      if ( (a2 & 1) != 0 )
      {
        v14 = *(_BYTE *)(v13 + 212);
        if ( (a2 & 2) != 0 )
        {
          *(_BYTE *)(v13 + 212) = v14 | 4;
          *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) |= 8u;
        }
        else
        {
          *(_BYTE *)(v13 + 212) = v14 | 0x10;
          *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) |= 0x20u;
        }
      }
      else
      {
        *(_BYTE *)(v13 + 212) |= 1u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) |= 2u;
      }
      v15 = *(_DWORD *)(a1 + 236);
      if ( (a2 & 8) != 0 )
      {
        *(_BYTE *)(v15 + 213) |= 1u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) |= 2u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) &= ~0x40u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) &= ~0x80u;
      }
      else
      {
        *(_BYTE *)(v15 + 212) |= 0x40u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 212) |= 0x80u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) &= ~1u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) &= ~2u;
      }
      v16 = *(_DWORD *)(a1 + 236);
      v17 = *(_BYTE *)(v16 + 213);
      if ( (a2 & 0x10) != 0 )
      {
        *(_BYTE *)(v16 + 213) = v17 | 4;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) |= 8u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) &= ~0x10u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) &= ~0x20u;
      }
      else
      {
        *(_BYTE *)(v16 + 213) = v17 | 0x10;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) |= 0x20u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) &= ~4u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 213) &= ~8u;
      }
      v18 = *(_DWORD *)(a1 + 236);
      v19 = *(_BYTE *)(v18 + 214);
      if ( (a2 & 0x20) != 0 )
      {
        *(_BYTE *)(v18 + 214) = v19 | 0x10;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 214) |= 0x20u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 214) &= ~0x40u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 214) &= ~0x80u;
      }
      else
      {
        *(_BYTE *)(v18 + 214) = v19 | 0x40;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 214) |= 0x80u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 214) &= ~0x10u;
        *(_BYTE *)(*(_DWORD *)(a1 + 236) + 214) &= ~0x20u;
      }
    }
  }
}
