/*
 * XREFs of _TransformRegionBetweenCoordinateSpaces@12 @ 0x151BB7
 * Callers:
 *     ?MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x171DE6 (-MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall TransformRegionBetweenCoordinateSpaces(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  unsigned int v4; // edx
  unsigned int v5; // edi
  int v6; // ecx
  bool v7; // zf
  int v8; // edx
  int RegionData; // eax
  int v10; // edi
  int v11; // eax
  int v12; // ebx
  int RectRgn; // edi
  int RectRgnIndirect; // eax
  int v16; // [esp+10h] [ebp-2Ch]
  int v19; // [esp+1Ch] [ebp-20h]
  unsigned int v20; // [esp+1Ch] [ebp-20h]
  char *v21; // [esp+20h] [ebp-1Ch]
  _BYTE v22[16]; // [esp+24h] [ebp-18h] BYREF

  v3 = 0;
  v19 = *a3;
  if ( *a3 > 2u )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 184);
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 184);
    if ( (((v4 >> 8) ^ (v5 >> 8)) & 0x1FF) != 0 )
      goto LABEL_10;
    v6 = 1;
    if ( (v4 & 0xF) != 2 || (v7 = (v4 & 0x20000000) == 0, v8 = 1, v7) )
      v8 = 0;
    if ( (v5 & 0xF) != 2 || (v5 & 0x20000000) == 0 )
      v6 = 0;
    if ( v8 != v6 )
    {
LABEL_10:
      RegionData = GreGetRegionData(*a3, 0, 0);
      v10 = RegionData;
      if ( RegionData > 0 )
      {
        v11 = Win32AllocPool(RegionData, 1919775573);
        v12 = v11;
        if ( v11 )
        {
          if ( GreGetRegionData(v19, v10, v11) )
          {
            v21 = (char *)(v12 + 32);
            memset(v22, 0, sizeof(v22));
            RectRgn = GreCreateRectRgn(0, 0, 0, 0);
            v20 = 0;
            if ( !*(_DWORD *)(v12 + 8) )
              goto LABEL_19;
            do
            {
              TransformRectBetweenCoordinateSpaces(v22, v21, a1, a2);
              v3 |= !EqualRectInl(v22, v21);
              RectRgnIndirect = GreCreateRectRgnIndirect(v22);
              v16 = RectRgnIndirect;
              if ( RectRgnIndirect )
              {
                GreCombineRgn(RectRgn, RectRgn, RectRgnIndirect, 2);
                GreDeleteObject(v16);
              }
              v21 += 16;
              ++v20;
            }
            while ( v20 < *(_DWORD *)(v12 + 8) );
            if ( v3 )
              *a3 = RectRgn;
            else
LABEL_19:
              GreDeleteObject(RectRgn);
          }
          Win32FreePool(v12);
        }
      }
    }
  }
  return v3;
}
