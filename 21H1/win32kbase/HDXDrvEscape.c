/*
 * XREFs of HDXDrvEscape @ 0x1C00CA600
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1C00CA410 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00B1200 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00CA73C (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00CA8B0 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, HSEMAPHORE a2, __int64 a3, HSEMAPHORE a4)
{
  unsigned int v4; // esi
  unsigned int v6; // r14d
  unsigned int v8; // edi
  int v9; // r8d
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-E8h]
  HSEMAPHORE v15; // [rsp+28h] [rbp-E0h]
  unsigned int v16; // [rsp+30h] [rbp-D8h]
  HSEMAPHORE v17; // [rsp+68h] [rbp-A0h]
  unsigned int v18; // [rsp+70h] [rbp-98h]
  HSEMAPHORE v19; // [rsp+78h] [rbp-90h]
  unsigned int v20; // [rsp+80h] [rbp-88h]
  _BYTE v21[96]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v22; // [rsp+110h] [rbp+8h] BYREF

  v22 = a1;
  v4 = (unsigned int)a4;
  v6 = (unsigned int)a2;
  if ( a1 && (v8 = 1, (*(_DWORD *)(a1 + 40) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v21,
      a2,
      a3,
      a4,
      v14,
      v15,
      v16,
      *(HSEMAPHORE *)(a1 + 64),
      4u,
      (HSEMAPHORE)ghsemSprite,
      5u,
      ghsemHT,
      6u,
      v17,
      v18,
      v19,
      v20);
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), 11);
    PDEVOBJ::vSync(
      (PDEVOBJ *)&v22,
      (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2552) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2552) >> 64)),
      0LL,
      0);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2880);
    if ( v10 )
      v8 = v10(*(_QWORD *)(a1 + 2552) + 24LL, v6, v4, a3, 0, 0LL);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), v9);
    v11 = *(struct _ERESOURCE **)(a1 + 48);
    if ( v11 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v11);
      PsLeavePriorityRegion(v12);
    }
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v21);
  }
  else
  {
    return 0;
  }
  return v8;
}
