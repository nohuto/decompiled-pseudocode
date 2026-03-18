/*
 * XREFs of ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C0026A10
 * Callers:
 *     MapDesktop @ 0x1C0026340 (MapDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0026A48 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C004CE38 (xxxSwitchDesktop.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00C02E4 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(_QWORD *a1)
{
  unsigned int DLT; // eax

  DLT = DLT_DESKTOP::getDLT();
  *a1 = GetDomainLockRef(DLT);
  return a1;
}
