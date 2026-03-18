/*
 * XREFs of ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C0053818
 * Callers:
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1C0308FE4 (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C0309F70 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
  return P;
}
