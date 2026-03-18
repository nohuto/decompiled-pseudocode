/*
 * XREFs of ?IsRoute@TargetingInfo@@QEBA_NXZ @ 0x180222360
 * Callers:
 *     ?TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x180224C9C (-TargetPointer@CManipulationManager@@IEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEA.c)
 * Callees:
 *     <none>
 */

bool __fastcall TargetingInfo::IsRoute(TargetingInfo *this)
{
  bool result; // al

  if ( *(_DWORD *)this == 2 )
    return 0;
  result = 1;
  if ( *(_DWORD *)this == 1 && !*((_QWORD *)this + 1) )
    return 0;
  return result;
}
