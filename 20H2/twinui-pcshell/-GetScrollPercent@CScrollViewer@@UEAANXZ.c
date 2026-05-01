/*
 * XREFs of ?GetScrollPercent@CScrollViewer@@UEAANXZ @ 0x1803BADC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetMinScrollOffset@CScrollViewer@@AEAAHXZ @ 0x1803BBA74 (-_GetMinScrollOffset@CScrollViewer@@AEAAHXZ.c)
 */

double __fastcall CScrollViewer::GetScrollPercent(CScrollViewer *this)
{
  CScrollViewer *v1; // rdi
  double v3; // xmm6_8

  v1 = (CScrollViewer *)((char *)this - 208);
  if ( !(unsigned int)CScrollViewer::_GetMinScrollOffset((CScrollViewer *)((char *)this - 208)) )
    return 0.0;
  v3 = (double)*((int *)this + 12);
  return v3 * 100.0 / (double)(int)CScrollViewer::_GetMinScrollOffset(v1);
}
