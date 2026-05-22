/*
 * XREFs of ?ApplyPanDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FD70
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x1801219B4 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C3134 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180122EB8 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyPanDelta(ControllerProcessor *this)
{
  if ( *((float *)this + 101) == 0.0 && *((float *)this + 102) == 0.0 )
  {
    if ( *((_DWORD *)this + 309) == 1 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    ControllerProcessor::TryUpdateInteractionType(this, 1LL);
    if ( *((_DWORD *)this + 309) == 1 )
      ManipulationInjector::InjectPan(
        (ControllerProcessor *)((char *)this + 424),
        *((float *)this + 101),
        *((float *)this + 102),
        0);
    *((_DWORD *)this + 101) = 0;
    *((_DWORD *)this + 102) = 0;
  }
  return 0LL;
}
