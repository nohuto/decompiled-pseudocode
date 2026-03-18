/*
 * XREFs of ??_GDXGVIRTUALGPUMANAGER@@UEAAPEAXI@Z @ 0x1C003E250
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ @ 0x1C022B720 (-DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER@@QEAAXXZ.c)
 */

DXGVIRTUALGPUMANAGER *__fastcall DXGVIRTUALGPUMANAGER::`scalar deleting destructor'(DXGVIRTUALGPUMANAGER *P, char a2)
{
  *(_QWORD *)P = &DXGVIRTUALGPUMANAGER::`vftable';
  DXGVIRTUALGPUMANAGER::DestroyVirtualGpuManager(P);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(P, 0);
  return P;
}
