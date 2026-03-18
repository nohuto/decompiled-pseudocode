/*
 * XREFs of ?SetMessagePromotionType@InteractiveControlDevice@@IAEXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B2CE5
 * Callers:
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1B26FC (-SetComponentResolution@InteractiveControlDevice@@QAEJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPAW4ta.c)
 */

void __thiscall InteractiveControlDevice::SetMessagePromotionType(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // ecx
  int v5; // eax
  struct InteractiveControlManager *v6; // eax

  v2 = a2;
  if ( this[9] != a2 )
  {
    v4 = 1;
    if ( (unsigned int)(a2 - 1) > 1 )
    {
      v6 = InteractiveControlManager::Instance();
      v4 = 0;
      v5 = *((_DWORD *)v6 + 18);
    }
    else
    {
      v5 = 0;
    }
    a2 = v4;
    this[9] = v2;
    InteractiveControlDevice::SetComponentResolution((int)this, 3, v5, &a2);
  }
}
