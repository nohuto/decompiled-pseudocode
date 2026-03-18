/*
 * XREFs of _IntersectWithParents@8 @ 0x35AFC
 * Callers:
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     ?ValidateParents@@YGHPAUtagWND@@H@Z @ 0x7D624 (-ValidateParents@@YGHPAUtagWND@@H@Z.c)
 *     _xxxGetUpdateRect@12 @ 0xA5AFE (_xxxGetUpdateRect@12.c)
 *     _xxxGetUpdateRgn@12 @ 0xC3C20 (_xxxGetUpdateRgn@12.c)
 *     ?SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z @ 0x17E2A7 (-SpbTransfer@@YGHPAUtagSPB@@PAUtagWND@@H@Z.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _PhysicalToLogicalInPlaceRect@8 @ 0x37E2C (_PhysicalToLogicalInPlaceRect@8.c)
 */

int __fastcall IntersectWithParents(int a1, int a2)
{
  bool v2; // zf
  int i; // ebx
  int v4; // esi
  char v5; // al
  _DWORD *v6; // esi
  _DWORD v8[5]; // [esp+Ch] [ebp-14h] BYREF

  v2 = (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 19) & 0x20) == 0;
  v8[4] = a2;
  if ( v2 )
  {
    for ( i = *(_DWORD *)(a1 + 56); i; i = *(_DWORD *)(i + 56) )
    {
      v4 = *(_DWORD *)(i + 20);
      v5 = *(_BYTE *)(v4 + 23);
      if ( (v5 & 0x10) == 0 )
        return 0;
      if ( (v5 & 0x20) != 0 )
        return 0;
      v6 = (_DWORD *)(v4 + 68);
      v8[0] = *v6++;
      v8[1] = *v6++;
      v8[2] = *v6;
      v8[3] = v6[1];
      PhysicalToLogicalInPlaceRect();
      if ( !IntersectRect(v8) )
        return 0;
      if ( (*(_BYTE *)(*(_DWORD *)(i + 20) + 19) & 0x20) != 0 )
        return 1;
    }
  }
  return 1;
}
