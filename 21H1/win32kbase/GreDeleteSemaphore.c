/*
 * XREFs of GreDeleteSemaphore @ 0x1C00735F0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C000D1FC (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     EngDeleteSemaphore @ 0x1C00488F0 (EngDeleteSemaphore.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0147A04 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C014E568 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C0154AF0 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     MultiUserGreTrackRemoveEngResource @ 0x1C0073640 (MultiUserGreTrackRemoveEngResource.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

__int64 __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  __int64 result; // rax

  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    return Win32FreePool(&Resource[-1].NumberOfSharedWaiters);
  }
  return result;
}
