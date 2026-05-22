/*
 * XREFs of ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x1800C3750
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18007A2E8 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180122C50 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C20AC (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 */

void __fastcall ManipulationInjector::SetInjectionMechanism(ManipulationInjector *a1)
{
  if ( *(_DWORD *)a1 != 4 )
  {
    ManipulationInjector::EndManipulation(a1, 0);
    *((_DWORD *)a1 + 184) = 0;
    *((_DWORD *)a1 + 183) = 0;
    *(_DWORD *)a1 = 4;
  }
}
