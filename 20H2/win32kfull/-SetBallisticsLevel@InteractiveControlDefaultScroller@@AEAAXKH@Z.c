/*
 * XREFs of ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AEAAXKH@Z @ 0x1C02590E8
 * Callers:
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C0258D68 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C025915C (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C000ACA4 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

void __fastcall InteractiveControlDefaultScroller::SetBallisticsLevel(
        InteractiveControlDefaultScroller *this,
        unsigned int a2,
        int a3)
{
  __int64 v3; // rdi
  int v5; // ebx
  int v6; // ecx

  v3 = 3LL;
  if ( *((_DWORD *)this + 14) != 2 )
    v3 = a2;
  if ( *((_DWORD *)this + 6) != (_DWORD)v3 || a3 )
  {
    *((_DWORD *)this + 6) = v3;
    v5 = *((_DWORD *)InteractiveControlManager::Instance() + 43);
    if ( v5 == *((_DWORD *)InteractiveControlManager::Instance() + 44) )
      v6 = dword_1C03409A4[2 * v3];
    else
      v6 = *((_DWORD *)InteractiveControlManager::Instance() + 43);
    *((_DWORD *)this + 7) = v6;
  }
}
