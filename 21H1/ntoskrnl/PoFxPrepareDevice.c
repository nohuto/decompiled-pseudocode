/*
 * XREFs of PoFxPrepareDevice @ 0x14036AC30
 * Callers:
 *     PnpStartDevice @ 0x14036AB84 (PnpStartDevice.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x1407B0F48 (PiProcessAddBootDevices.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x140237750 (IoAcquireRemoveLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     PopPluginPrepareDevice @ 0x140567FD4 (PopPluginPrepareDevice.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140723798 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x140736C68 (PopDiagTraceFxDevicePreparation.c)
 */

NTSTATUS __fastcall PoFxPrepareDevice(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v8; // rdi
  ULONG_PTR *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

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
  if ( (v5 & 2) == 0 )
  {
    result = PopFxFindDeviceAndAllocateUniqueId(a1, &v15);
    if ( result == -1073741738 )
      goto LABEL_22;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 2u);
  }
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  result = Feature_Servicing_27169067__private_IsEnabled();
  if ( !result && v9 )
  {
    v14 = v15;
    if ( !v15 )
      return result;
    result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v15 + 272), (PVOID)0x70466F50, &Src, 1u, 0x20u);
    if ( result == -1073741738 )
      goto LABEL_23;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 0x4000u);
  }
LABEL_22:
  v14 = v15;
LABEL_23:
  if ( v14 )
  {
    result = _InterlockedDecrement((volatile signed __int32 *)(v14 + 276));
    if ( !result )
      return KeSetEvent((PRKEVENT)(v14 + 280), 0, 0);
  }
  return result;
}
