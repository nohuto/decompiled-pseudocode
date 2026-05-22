/*
 * XREFs of ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180123378
 * Callers:
 *     ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x180120230 (-ApplyPanDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1801203D4 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x180123444 (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJXZ @ 0x180123EB8 (-UpdatePointerTimer@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C25FC (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1801239F0 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 */

void __fastcall ControllerProcessor::TryUpdateInteractionType(__int64 a1, int a2)
{
  int v2; // r8d

  v2 = *(_DWORD *)(a1 + 1236);
  if ( v2 == a2 )
    return;
  if ( !a2 )
  {
    ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 424), 0);
    if ( *(_BYTE *)(a1 + 1240) )
    {
      ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
      *(_BYTE *)(a1 + 1240) = 0;
    }
LABEL_16:
    *(_DWORD *)(a1 + 1236) = 0;
    return;
  }
  if ( a2 == 1 )
  {
    if ( ((v2 - 16) & 0xFFFFFFEF) == 0 )
    {
      ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 424), 0);
      if ( *(_BYTE *)(a1 + 1240) )
      {
        ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
        *(_BYTE *)(a1 + 1240) = 0;
      }
    }
    if ( *(_BYTE *)(a1 + 1241) )
    {
      a2 = 1;
LABEL_8:
      ControllerProcessor::StartInteractionHelper(a1, a2);
      return;
    }
    goto LABEL_16;
  }
  if ( (a2 == 16 || a2 == 32) && !v2 && *(_BYTE *)(a1 + 1241) )
    goto LABEL_8;
}
