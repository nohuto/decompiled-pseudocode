/*
 * XREFs of ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00B15B0
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C0149CCC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C014A160 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014A330 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C004D370 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C005E718 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C008B010 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

void __fastcall DEVLOCKOBJ::vLockGammaRamp(DEVLOCKOBJ *this, struct XDCOBJ *a2, int a3)
{
  __int64 v5; // rbx
  HSEMAPHORE v6; // rcx
  int v7; // r8d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  *((_QWORD *)this + 1) = ghsemDynamicModeChange;
  v8 = v5;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  if ( *(_QWORD *)a2
    && ((*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x8200) == 0x200 || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v8)) )
  {
    *(_QWORD *)this = ghsemGreLock;
    v6 = ghsemGreLock;
  }
  else
  {
    v6 = *(HSEMAPHORE *)(v5 + 56);
    *(_QWORD *)this = v6;
  }
  *((_QWORD *)this + 2) = v5;
  *((_DWORD *)this + 6) = 9;
  EngAcquireSemaphore(v6);
  v7 = 12;
  if ( *(HSEMAPHORE *)this == ghsemGreLock )
    v7 = 2;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemTrg", *(_QWORD *)this, v7);
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
}
