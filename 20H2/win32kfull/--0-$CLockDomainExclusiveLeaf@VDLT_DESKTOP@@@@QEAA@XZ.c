/*
 * XREFs of ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C003ED40
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000B814 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C003E054 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
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
