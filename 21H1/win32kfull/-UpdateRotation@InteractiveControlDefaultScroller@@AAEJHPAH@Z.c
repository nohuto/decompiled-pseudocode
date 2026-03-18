/*
 * XREFs of ?UpdateRotation@InteractiveControlDefaultScroller@@AAEJHPAH@Z @ 0x1B3E4B
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlDefaultScroller::UpdateRotation(
        InteractiveControlDefaultScroller *this,
        int a2,
        int *a3)
{
  int v4; // eax
  BOOL v5; // ecx

  v4 = *((_DWORD *)this + 15);
  v5 = v4 && a2 > 0 != v4 > 0;
  *((_DWORD *)this + 15) = a2;
  *a3 = v5;
  return 0;
}
