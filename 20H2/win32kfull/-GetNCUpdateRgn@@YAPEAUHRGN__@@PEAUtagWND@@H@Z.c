/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C001AB6C
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 * Callees:
 *     DecPaintCount @ 0x1C001B304 (DecPaintCount.c)
 *     CalcWindowRgn @ 0x1C0040864 (CalcWindowRgn.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

unsigned __int64 __fastcall GetNCUpdateRgn(struct tagWND *a1, int a2)
{
  unsigned __int64 EmptyRgnPublic; // rdi
  int v6; // eax

  EmptyRgnPublic = *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL);
  if ( EmptyRgnPublic <= 1 )
    return EmptyRgnPublic;
  EmptyRgnPublic = CreateEmptyRgnPublic();
  if ( EmptyRgnPublic )
  {
    if ( (unsigned int)GreCombineRgn(EmptyRgnPublic, *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL), 0LL, 5LL) )
      goto LABEL_5;
    GreDeleteObject(EmptyRgnPublic);
  }
  EmptyRgnPublic = 1LL;
LABEL_5:
  if ( a2 )
  {
    CalcWindowRgn(a1, ghrgnInv2, 1LL);
    v6 = GreCombineRgn(
           *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
           *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL),
           ghrgnInv2,
           1LL);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 0LL;
        SetOrClrWF(0LL, a1, 288LL, 1LL);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 17LL) & 0x10) == 0 )
          DecPaintCount(a1);
      }
    }
    else
    {
      GreDeleteObject(*(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL));
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 136LL) = 1LL;
    }
  }
  return EmptyRgnPublic;
}
