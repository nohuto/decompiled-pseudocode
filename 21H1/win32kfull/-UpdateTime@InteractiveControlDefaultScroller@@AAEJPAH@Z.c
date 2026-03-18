/*
 * XREFs of ?UpdateTime@InteractiveControlDefaultScroller@@AAEJPAH@Z @ 0x1B3E87
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

int __thiscall InteractiveControlDefaultScroller::UpdateTime(LARGE_INTEGER *this, int *a2)
{
  LARGE_INTEGER PerformanceCounter; // kr00_8
  unsigned __int64 v3; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0);
  v3 = (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - this[1].QuadPart)) / this->QuadPart;
  this[1] = PerformanceCounter;
  *a2 = v3 > *((int *)InteractiveControlManager::Instance() + 40);
  return 0;
}
