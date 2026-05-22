/*
 * XREFs of ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x1801234A0
 * Callers:
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180122C50 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180122E28 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x1801234F4 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1800C3788 (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 */

void __fastcall ControllerProcessor::UpdateManipulationInjectionRect(ControllerProcessor *this)
{
  bool v1; // al

  v1 = *((_DWORD *)this + 80) - *((_DWORD *)this + 78) >= 80 && *((_DWORD *)this + 81) - *((_DWORD *)this + 79) >= 80;
  *((_BYTE *)this + 1241) = v1;
  if ( v1 )
    ManipulationInjector::SetInjectionRect(
      (struct tagRECT *)((char *)this + 424),
      (const struct tagRECT *)((char *)this + 312));
}
