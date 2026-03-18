/*
 * XREFs of ?GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z @ 0x73A88
 * Callers:
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _CalcWindowRgn@12 @ 0x9B782 (_CalcWindowRgn@12.c)
 *     _DecPaintCount@4 @ 0xAA80E (_DecPaintCount@4.c)
 */

unsigned int __fastcall GetNCUpdateRgn(int a1, int a2)
{
  unsigned int EmptyRgnPublic; // edi
  int v5; // eax

  EmptyRgnPublic = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 92);
  if ( EmptyRgnPublic <= 1 )
    return EmptyRgnPublic;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  if ( EmptyRgnPublic )
  {
    if ( GreCombineRgn(EmptyRgnPublic, *(_DWORD *)(*(_DWORD *)(a1 + 20) + 92), 0, 5) )
      goto LABEL_5;
    GreDeleteObject(EmptyRgnPublic);
  }
  EmptyRgnPublic = 1;
LABEL_5:
  if ( a2 )
  {
    CalcWindowRgn(1);
    v5 = GreCombineRgn(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 92), *(_DWORD *)(*(_DWORD *)(a1 + 20) + 92), _ghrgnInv2, 1);
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        GreDeleteObject(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 92));
        *(_DWORD *)(*(_DWORD *)(a1 + 20) + 92) = 0;
        SetOrClrWF(0, a1, 0x120u, 1);
        if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 9) & 0x10) == 0 )
          DecPaintCount(a1);
      }
    }
    else
    {
      GreDeleteObject(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 92));
      *(_DWORD *)(*(_DWORD *)(a1 + 20) + 92) = 1;
    }
  }
  return EmptyRgnPublic;
}
