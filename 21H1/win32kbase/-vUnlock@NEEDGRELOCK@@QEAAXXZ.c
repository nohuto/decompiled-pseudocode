/*
 * XREFs of ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C001C360
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C00A9B18 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetMagicColors @ 0x1C01534DC (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall NEEDGRELOCK::vUnlock(PERESOURCE *this, __int64 a2, int a3)
{
  __int64 v4; // rcx

  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)*this, a3);
    if ( *this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*this);
      PsLeavePriorityRegion(v4);
    }
    *this = 0LL;
  }
}
