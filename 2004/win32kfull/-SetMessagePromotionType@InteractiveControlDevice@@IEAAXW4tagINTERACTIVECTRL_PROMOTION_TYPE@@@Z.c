/*
 * XREFs of ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C02594B8
 * Callers:
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C0259268 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0258DC8 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 */

void __fastcall InteractiveControlDevice::SetMessagePromotionType(__int64 a1, int a2)
{
  unsigned int v4; // eax
  int v5; // edx
  int v6; // r8d
  struct InteractiveControlManager *v7; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 64) != a2 )
  {
    v4 = a2 - 1;
    v5 = 1;
    if ( v4 > 1 )
    {
      v7 = InteractiveControlManager::Instance();
      v5 = 0;
      v6 = *((_DWORD *)v7 + 27);
    }
    else
    {
      v6 = 0;
    }
    v8 = v5;
    *(_DWORD *)(a1 + 64) = a2;
    InteractiveControlDevice::SetComponentResolution(a1, 3, v6, &v8);
  }
}
