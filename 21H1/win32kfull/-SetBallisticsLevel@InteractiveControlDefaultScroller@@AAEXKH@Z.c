/*
 * XREFs of ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AAEXKH@Z @ 0x1B3D5C
 * Callers:
 *     ?Reset@InteractiveControlDefaultScroller@@AAEXPAUtagWND@@@Z @ 0x1B3AC8 (-Reset@InteractiveControlDefaultScroller@@AAEXPAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AAEJXZ @ 0x1B3DBA (-UpdateBallistics@InteractiveControlDefaultScroller@@AAEJXZ.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 */

void __thiscall InteractiveControlDefaultScroller::SetBallisticsLevel(
        InteractiveControlDefaultScroller *this,
        unsigned int a2,
        int a3)
{
  unsigned int v4; // edi
  int v5; // esi
  int v6; // eax

  if ( *((_DWORD *)this + 14) == 2 )
    v4 = 3;
  else
    v4 = a2;
  if ( *((_DWORD *)this + 6) != v4 || a3 )
  {
    *((_DWORD *)this + 6) = v4;
    v5 = *((_DWORD *)InteractiveControlManager::Instance() + 34);
    if ( v5 == *((_DWORD *)InteractiveControlManager::Instance() + 35) )
      v6 = dword_27850C[2 * v4];
    else
      v6 = *((_DWORD *)InteractiveControlManager::Instance() + 34);
    *((_DWORD *)this + 7) = v6;
  }
}
