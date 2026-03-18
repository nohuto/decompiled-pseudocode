/*
 * XREFs of ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C52A4
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013F1F4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014014C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C014AD44 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C014D3A0 (GreIntersectVisRect.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C005E718 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DEVLOCKOBJ::vLock(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  HSEMAPHORE v4; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_DWORD *)this + 6) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) != 0 )
  {
    v4 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 48LL);
    *(_QWORD *)this = v4;
    *((_QWORD *)this + 2) = *(_QWORD *)a2;
    EngAcquireSemaphore(v4);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemTrg", *(_QWORD *)this, 11);
  }
}
