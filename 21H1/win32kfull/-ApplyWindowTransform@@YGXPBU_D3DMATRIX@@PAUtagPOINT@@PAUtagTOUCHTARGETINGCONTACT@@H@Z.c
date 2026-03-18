/*
 * XREFs of ?ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1796EB
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 *     _xxxTouchTargetWindow@28 @ 0x17C92C (_xxxTouchTargetWindow@28.c)
 * Callees:
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     ?TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z @ 0x17A360 (-TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z.c)
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 */

void __userpurge ApplyWindowTransform(
        int a1@<edx>,
        struct tagRECT *a2@<edi>,
        const struct _D3DMATRIX *a3,
        struct _D3DMATRIX *a4,
        struct tagTOUCHTARGETINGCONTACT *a5,
        int a6)
{
  D3DVALUE *p__41; // esi
  struct tagRECT *v10; // [esp-4h] [ebp-Ch]
  int v11; // [esp+0h] [ebp-8h]
  int v12; // [esp+0h] [ebp-8h]
  struct _D3DMATRIX *v13; // [esp+14h] [ebp+Ch]

  if ( EnterFloatingPointRegion() )
  {
    if ( a1 )
      TransformVector(a1 + 4, 0, a4);
    TransformVector(&a3->_32, 0, a4);
    TransformRect(a4, a2, v11);
    TransformRect(a4, v10, v12);
    TransformVector(&a3[2]._44, 0, a4 == 0);
    v13 = 0;
    if ( SLODWORD(a3->_34) > 0 )
    {
      p__41 = &a3->_41;
      do
      {
        TransformVector(p__41 + 1, 0, a4);
        p__41 += 2;
        v13 = (struct _D3DMATRIX *)((char *)v13 + 1);
      }
      while ( (int)v13 < SLODWORD(a3->_34) );
    }
    KeRestoreFloatingPointState(_gfsSave);
  }
}
