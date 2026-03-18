/*
 * XREFs of ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1802237F0
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180223030 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180224640 (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1802247C4 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180225734 (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x1802260F8 (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x180235500 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CManipulationFrame::IsMousewheelFrame(CManipulationFrame *this)
{
  bool result; // al

  result = 1;
  if ( *((_DWORD *)this + 4) != 1 || (*((_DWORD *)this + 43) & 0x180000) == 0 )
    return 0;
  return result;
}
