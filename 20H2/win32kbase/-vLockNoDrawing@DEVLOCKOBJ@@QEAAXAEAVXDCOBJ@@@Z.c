/*
 * XREFs of ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C005E5E0
 * Callers:
 *     GreGetNearestColor @ 0x1C001BF60 (GreGetNearestColor.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C005E718 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

void __fastcall DEVLOCKOBJ::vLockNoDrawing(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  HSEMAPHORE v4; // rcx
  __int64 v5; // r8

  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 1) != 0 )
  {
    *((_QWORD *)this + 1) = ghsemDynamicModeChange;
    if ( ghsemDynamicModeChange )
      ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    *((_DWORD *)this + 6) |= 8u;
    v4 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 64LL);
    *(_QWORD *)this = v4;
    *((_QWORD *)this + 2) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    EngAcquireSemaphore(v4);
    v5 = 11LL;
    if ( *(HSEMAPHORE *)this == ghsemGreLock )
      v5 = 2LL;
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v5);
  }
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
}
