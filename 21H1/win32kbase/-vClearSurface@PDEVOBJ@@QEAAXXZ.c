/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014896C
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C014DBD4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008C364 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00B4C68 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C5914 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  __int64 v2; // rdx
  int v3; // r8d
  int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // rcx
  _BYTE v7[32]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+4Ch] [rbp-24h]
  __int16 v11; // [rsp+50h] [rbp-20h]

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v7, this);
  *(_QWORD *)(*(_QWORD *)this + 2552LL) = 0LL;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v7, v2, v3);
  v5 = v8;
  if ( v8 )
  {
    if ( (_BYTE)v11 )
    {
      *(_DWORD *)(v8 + 40) &= ~2u;
      v5 = v8;
      LOBYTE(v11) = 0;
    }
    if ( v5 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v8);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v4);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v6);
  }
}
