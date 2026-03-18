/*
 * XREFs of _MirrorRegion@12 @ 0x9CC70
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _NtUserGetWindowRgnEx@12 @ 0x4329C (_NtUserGetWindowRgnEx@12.c)
 *     _xxxSetWindowRgn@12 @ 0x9CBE8 (_xxxSetWindowRgn@12.c)
 *     _xxxGetUpdateRgn@12 @ 0xC3C20 (_xxxGetUpdateRgn@12.c)
 *     _NtUserSetWindowRgnEx@12 @ 0x16A206 (_NtUserSetWindowRgnEx@12.c)
 * Callees:
 *     ?OrderRects@@YGXPAUtagRECT@@H@Z @ 0x154134 (-OrderRects@@YGXPAUtagRECT@@H@Z.c)
 */

int __fastcall MirrorRegion(int a1, unsigned int a2, int a3)
{
  int v3; // ebx
  unsigned int v4; // esi
  int RegionData; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // eax
  int v10; // edx
  int v11; // ecx
  int *v12; // ecx
  int v13; // esi
  int Region; // eax
  struct tagRECT *v15; // [esp+0h] [ebp-20h]
  int v16; // [esp+4h] [ebp-1Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+28h] [ebp+8h]

  v3 = 0;
  v4 = a2;
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 0x40) != 0 && a2 > 2 )
  {
    RegionData = GreGetRegionData(a2, 0, 0);
    v19 = RegionData;
    if ( RegionData > 0 )
    {
      v7 = (_DWORD *)Win32AllocPool(RegionData, 1768780629);
      v8 = v7;
      if ( v7 )
      {
        if ( GreGetRegionData(v4, v19, v7) )
        {
          v20 = v8[2];
          v9 = *(_DWORD **)(a1 + 20);
          if ( a3 )
            v10 = v9[19] - v9[17];
          else
            v10 = v9[15] - v9[13];
          v11 = v8[4];
          v8[4] = v10 - v8[6];
          v8[6] = v10 - v11;
          if ( v20 > 0 )
          {
            v12 = v8 + 8;
            v3 = v20;
            do
            {
              v13 = *v12;
              *v12 = v10 - v12[2];
              v12 += 4;
              *(v12 - 2) = v10 - v13;
              --v3;
            }
            while ( v3 );
            v4 = a2;
          }
          OrderRects(v15, v16);
          Region = GreExtCreateRegion(0, v19, v8);
          v21 = Region;
          if ( Region )
          {
            GreCombineRgn(v4, Region, 0, 5);
            GreDeleteObject(v21);
            v3 = 1;
          }
        }
        Win32FreePool(v8);
      }
    }
  }
  return v3;
}
