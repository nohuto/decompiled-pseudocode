/*
 * XREFs of ?TransformRect@@YGXPBU_D3DMATRIX@@PAUtagRECT@@H@Z @ 0x17A360
 * Callers:
 *     ?ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1796EB (-ApplyWindowTransform@@YGXPBU_D3DMATRIX@@PAUtagPOINT@@PAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?GetScreenRect@@YG?AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z @ 0x179C6A (-GetScreenRect@@YG-AUtagRECT@@HPBU_D3DMATRIX@@U1@@Z.c)
 *     ?_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@K@Z @ 0x17A464 (-_TTUpdateBestTarget@@YGXPAUtagPNTRWINDOWHITTTESTARGS@@PAUtagWND@@IPBUtagPOINT@@PAUtagRECT@@HU4@.c)
 *     ?xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x17B446 (-xxxWindowHitTestWithTargeting@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@.c)
 * Callees:
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 */

void __userpurge TransformRect(int a1@<edx>, const struct _D3DMATRIX *a2, struct tagRECT *a3, int a4)
{
  TransformVector(a1 + 4, 0, a2);
  TransformVector(a1 + 12, 0, a2);
}
