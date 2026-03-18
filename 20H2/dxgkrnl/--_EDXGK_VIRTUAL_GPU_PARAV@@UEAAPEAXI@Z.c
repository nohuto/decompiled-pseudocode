/*
 * XREFs of ??_EDXGK_VIRTUAL_GPU_PARAV@@UEAAPEAXI@Z @ 0x1C003F450
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ @ 0x1C003F3BC (--1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ.c)
 */

DXGK_VIRTUAL_GPU_PARAV *__fastcall DXGK_VIRTUAL_GPU_PARAV::`vector deleting destructor'(
        DXGK_VIRTUAL_GPU_PARAV *P,
        unsigned int a2)
{
  char v2; // bl

  v2 = a2;
  DXGK_VIRTUAL_GPU_PARAV::~DXGK_VIRTUAL_GPU_PARAV(P, a2);
  if ( (v2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
