/*
 * XREFs of ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180006240
 * Callers:
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x1800ABAE8 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?UpdateAngle@CScreenRotation@@QEAAXHH@Z @ 0x1800ACD2C (-UpdateAngle@CScreenRotation@@QEAAXHH@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Translate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 186) != v2 || *((float *)this + 187) != *((float *)a2 + 6) )
  {
    *((float *)this + 186) = v2;
    *(_QWORD *)((char *)this + 748) = *((unsigned int *)a2 + 6);
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 0x1000u);
  }
  return 0LL;
}
