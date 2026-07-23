/*
 * XREFs of PoFxPrepareDevice @ 0x14036F4B0
 * Callers:
 *     PnpStartDevice @ 0x14036F404 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x1407C6ECC (PiProcessAddBootDevices.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     PopPluginPrepareDevice @ 0x14056DCA4 (PopPluginPrepareDevice.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140736984 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x14073E218 (PopFxFindDeviceAndAllocateUniqueId.c)
 */

LONG __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  LONG result; // eax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v8; // rdi
  ULONG_PTR *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  _m_prefetchw((const void *)(a1 + 296));
  result = _InterlockedOr((volatile signed __int32 *)(a1 + 296), 0);
  if ( (result & 1) != 0 )
    return result;
  _m_prefetchw((const void *)(a1 + 296));
  v5 = *(_DWORD *)(a1 + 296);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 2) != 0 )
    goto LABEL_7;
  result = PopFxFindDeviceAndAllocateUniqueId(a1, &v15);
  if ( result != -1073741738 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 2u);
LABEL_7:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopFxPluginLock, 0LL);
    v8 = (ULONG_PTR *)PopFxPluginList;
    v9 = 0LL;
    while ( v8 != &PopFxPluginList )
    {
      if ( (unsigned __int8)PopPluginPrepareDevice((ULONG_PTR)v8) )
      {
        LOBYTE(v10) = 1;
        PopDiagTraceFxDevicePreparation(a1, v8, a1 + 128, v10);
        v9 = v8;
        if ( v8 )
          goto LABEL_14;
        break;
      }
      v8 = (ULONG_PTR *)*v8;
    }
    if ( !a2 )
      goto LABEL_15;
LABEL_14:
    *(_QWORD *)(a1 + 144) = v9;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 1u);
    *(_WORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = a1 + 104;
    *(_QWORD *)(a1 + 104) = a1 + 104;
    *(_BYTE *)(a1 + 98) = 6;
    *(_DWORD *)(a1 + 100) = 0;
LABEL_15:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxPluginLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopFxPluginLock);
    KeAbPostRelease((ULONG_PTR)&PopFxPluginLock);
    result = (unsigned int)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  v14 = v15;
  if ( v15 )
  {
    result = _InterlockedDecrement((volatile signed __int32 *)(v15 + 276));
    if ( !result )
      return KeSetEvent((PRKEVENT)(v14 + 280), 0, 0);
  }
  return result;
}
