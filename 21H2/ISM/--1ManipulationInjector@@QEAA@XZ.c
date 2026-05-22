/*
 * XREFs of ??1ManipulationInjector@@QEAA@XZ @ 0x1800C1EB0
 * Callers:
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$1 @ 0x18007A99F (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$1.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18007AB94 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _ControllerProcessor::ControllerProcessor_::_1_::dtor$4 @ 0x18011F96F (_ControllerProcessor--ControllerProcessor_--_1_--dtor$4.c)
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18011FA68 (--1ControllerProcessor@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ManipulationInjector::~ManipulationInjector(ManipulationInjector *this)
{
  void *v2; // rcx

  if ( *((_QWORD *)this + 12) )
    RemoveInjectionDevice();
  v2 = (void *)*((_QWORD *)this + 98);
  if ( v2 )
    CloseHandle(v2);
}
