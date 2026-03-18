/*
 * XREFs of ?Reset@InteractiveControlDefaultScroller@@AAEXPAUtagWND@@@Z @ 0x1B3AC8
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?SetBallisticsLevel@InteractiveControlDefaultScroller@@AAEXKH@Z @ 0x1B3D5C (-SetBallisticsLevel@InteractiveControlDefaultScroller@@AAEXKH@Z.c)
 */

void __thiscall InteractiveControlDefaultScroller::Reset(InteractiveControlDefaultScroller *this, struct tagWND *a2)
{
  int v3; // eax
  _BYTE *v4; // ebx
  char v5; // al
  char v6; // cl
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax

  InteractiveControlDefaultScroller::s_ballistics = (struct InteractiveControlDefaultScroller::BallisticsConfig *)*((_DWORD *)InteractiveControlManager::Instance() + 46);
  v3 = *((_DWORD *)InteractiveControlManager::Instance() + 48);
  dword_278518 = 0;
  dword_278520 = 0;
  dword_278510 = v3;
  dword_27850C = *((_DWORD *)InteractiveControlManager::Instance() + 50);
  dword_278514 = *((_DWORD *)InteractiveControlManager::Instance() + 52);
  dword_27851C = *((_DWORD *)InteractiveControlManager::Instance() + 54);
  dword_278524 = *((_DWORD *)InteractiveControlManager::Instance() + 56);
  v4 = *(_BYTE **)(*((_DWORD *)a2 + 2) + 232);
  v5 = v4[625];
  *((_BYTE *)this + 52) = v5;
  v6 = v4[624];
  *((_BYTE *)this + 53) = v6;
  if ( !v5 )
  {
    if ( !v6 )
    {
      *((_WORD *)this + 26) = 258;
      v5 = 2;
    }
    if ( !v5 )
    {
      *((_BYTE *)this + 52) = 2;
      v5 = 2;
    }
  }
  if ( v5 == 2 )
    v7 = *((_DWORD *)InteractiveControlManager::Instance() + 42);
  else
    v7 = *((_DWORD *)InteractiveControlManager::Instance() + 44);
  if ( *((_DWORD *)this + 14) == 1 )
    v8 = *((_DWORD *)InteractiveControlManager::Instance() + 36);
  else
    v8 = v7;
  v9 = (unsigned __int8)v4[626];
  if ( v9 <= v8 )
  {
    if ( *((_DWORD *)this + 14) == 1 )
      v9 = *((_DWORD *)InteractiveControlManager::Instance() + 36);
    else
      v9 = v7;
  }
  v10 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 12) = v9;
  v11 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 11) = v10;
  *((_DWORD *)this + 5) = v10;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 10) = v11;
  *((_DWORD *)this + 4) = v11;
  *((_DWORD *)this + 8) = 0;
  InteractiveControlDefaultScroller::SetBallisticsLevel(this, 0, 1);
}
