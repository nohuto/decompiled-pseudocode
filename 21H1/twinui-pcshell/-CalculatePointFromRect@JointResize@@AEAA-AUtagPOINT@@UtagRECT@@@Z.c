/*
 * XREFs of ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x1803F97F0
 * Callers:
 *     _lambda_f8a4012ea914e544f53ba03328832034_::operator() @ 0x1803F9540 (_lambda_f8a4012ea914e544f53ba03328832034_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1803FAA70 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagPOINT __fastcall JointResize::CalculatePointFromRect(JointResize *this, struct tagRECT *a2, LONG *a3)
{
  LONG v3; // eax

  if ( *((_DWORD *)this + 72) == 10 )
    v3 = *a3;
  else
    v3 = a3[2];
  a2->left = v3;
  a2->top = a3[1];
  return (struct tagPOINT)a2;
}
