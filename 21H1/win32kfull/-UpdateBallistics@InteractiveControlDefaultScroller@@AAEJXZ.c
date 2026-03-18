/*
 * XREFs of ?UpdateBallistics@InteractiveControlDefaultScroller@@AAEJXZ @ 0x1B3DBA
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AAEXKH@Z @ 0x1B3D5C (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AAEXKH@Z.c)
 */

int __thiscall InteractiveControlDefaultScroller::UpdateBallistics(InteractiveControlDefaultScroller *this)
{
  int v2; // esi
  unsigned int v3; // eax
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // edx

  if ( *((_QWORD *)this + 1) - *((_QWORD *)this + 5) < (unsigned __int64)*((int *)InteractiveControlManager::Instance()
                                                                         + 40) )
  {
    v4 = *((_DWORD *)this + 8);
  }
  else
  {
    v2 = *((_DWORD *)InteractiveControlManager::Instance() + 41);
    v3 = (unsigned int)(v2 * *((_DWORD *)this + 8)) / *((_DWORD *)InteractiveControlManager::Instance() + 40);
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      v6 = (unsigned int)*(&InteractiveControlDefaultScroller::s_ballistics + 2 * v5);
      if ( v3 <= v6 || !v6 )
        break;
      if ( ++v5 == 4 )
        goto LABEL_8;
    }
    InteractiveControlDefaultScroller::SetBallisticsLevel(this, v5, 0);
LABEL_8:
    *((_DWORD *)this + 10) = *((_DWORD *)this + 2);
    *((_DWORD *)this + 11) = *((_DWORD *)this + 3);
  }
  *((_DWORD *)this + 8) = v4 + abs32(*((_DWORD *)this + 15));
  return 0;
}
