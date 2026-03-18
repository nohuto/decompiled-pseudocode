/*
 * XREFs of EngDeletePath @ 0x1C0287470
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00EE7B8 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     EngLineTo @ 0x1C013C090 (EngLineTo.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C0294380 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngDeletePath @ 0x1C02B2E90 (NtGdiEngDeletePath.c)
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
