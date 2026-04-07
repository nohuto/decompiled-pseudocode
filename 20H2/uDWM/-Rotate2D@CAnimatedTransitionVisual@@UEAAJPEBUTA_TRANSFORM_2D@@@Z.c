/*
 * XREFs of ?Rotate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x1800A7130
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800160D0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Rotate2D(
        CAnimatedTransitionVisual *this,
        const struct TA_TRANSFORM_2D *a2)
{
  float v2; // xmm1_4

  v2 = *((float *)a2 + 5);
  if ( *((float *)this + 195) != v2
    || *((float *)this + 198) != *((float *)a2 + 9)
    || *((float *)this + 199) != *((float *)a2 + 10) )
  {
    *((float *)this + 195) = v2;
    *((_QWORD *)this + 98) = 0LL;
    if ( !*((_BYTE *)this + 965) )
    {
      *((_DWORD *)this + 198) = *((_DWORD *)a2 + 9);
      *(_QWORD *)((char *)this + 796) = *((unsigned int *)a2 + 10);
    }
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this + 8), 4096);
  }
  return 0LL;
}
