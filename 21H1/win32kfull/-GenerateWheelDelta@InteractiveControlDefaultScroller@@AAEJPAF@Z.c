/*
 * XREFs of ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AAEJPAF@Z @ 0x1B37FF
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

int __thiscall InteractiveControlDefaultScroller::GenerateWheelDelta(
        InteractiveControlDefaultScroller *this,
        __int16 *a2)
{
  int v3; // ebx
  unsigned __int64 v4; // kr00_8
  unsigned int v5; // eax
  __int16 v6; // cx
  __int16 v7; // ax
  unsigned int v9; // [esp+10h] [ebp-4h]

  v3 = 0;
  v9 = *((_DWORD *)this + 12) * *((_DWORD *)this + 7);
  v4 = (unsigned __int64)(1000LL * (*((_QWORD *)this + 2) - *((_QWORD *)this + 1))) / *(_QWORD *)this;
  *((_DWORD *)this + 16) += 120 * abs32(*((_DWORD *)this + 15));
  if ( v4 < *((int *)InteractiveControlManager::Instance() + 38) )
    goto LABEL_9;
  v5 = *((_DWORD *)this + 16);
  if ( v5 < v9 )
    goto LABEL_9;
  do
  {
    v5 -= v9;
    v3 += *((_DWORD *)this + 12);
  }
  while ( v5 >= v9 );
  *((_DWORD *)this + 16) = v5;
  if ( v3 )
  {
    HIBYTE(v6) = 0;
    *((_DWORD *)this + 4) = *((_DWORD *)this + 2);
    *((_DWORD *)this + 5) = *((_DWORD *)this + 3);
    if ( *((_DWORD *)this + 14) == 2 )
      LOBYTE(v6) = *((_DWORD *)this + 15) > 0;
    else
      LOBYTE(v6) = *((_DWORD *)this + 15) <= 0;
    v7 = v3 * (2 * v6 - 1);
  }
  else
  {
LABEL_9:
    v7 = 0;
  }
  *a2 = v7;
  return 0;
}
