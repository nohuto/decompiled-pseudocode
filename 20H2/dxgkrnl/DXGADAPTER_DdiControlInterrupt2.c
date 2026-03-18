/*
 * XREFs of DXGADAPTER_DdiControlInterrupt2 @ 0x1C0041750
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z @ 0x1C0007488 (-DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@EI@Z.c)
 */

__int64 __fastcall DXGADAPTER_DdiControlInterrupt2(DXGADAPTER *a1, struct _DXGKARG_CONTROLINTERRUPT2 a2)
{
  return DXGADAPTER::DdiControlInterrupt2(a1, a2, 0LL, 0xFFFFFFFD);
}
