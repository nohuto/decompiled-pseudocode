/*
 * XREFs of EngDeletePath @ 0x1C0285F00
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0071AF8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     EngLineTo @ 0x1C013E0A0 (EngLineTo.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0292F30 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngDeletePath @ 0x1C02B1910 (NtGdiEngDeletePath.c)
 * Callees:
 *     <none>
 */

void __stdcall EngDeletePath(PATHOBJ *ppo)
{
  if ( ppo )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)ppo);
    Win32FreePool(ppo);
  }
}
