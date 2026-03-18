/*
 * XREFs of ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00EFDB0
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     CalcWindowRgn @ 0x1C00B18DC (CalcWindowRgn.c)
 *     DecPaintCount @ 0x1C00F0544 (DecPaintCount.c)
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
    CalcWindowRgn((__int64)a1, ghrgnInv2, 1);
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
        SetOrClrWF(0, (__int64)a1, 0x120u, 1);
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
