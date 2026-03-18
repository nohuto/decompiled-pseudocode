/*
 * XREFs of ACPIExtListEnumNext @ 0x1C000C1AC
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C000A564 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectDockDevices @ 0x1C000A628 (ACPIDetectDockDevices.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C000A724 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C000BF30 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C002963C (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002D08C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0048FA8 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectEjectDevices @ 0x1C004E440 (ACPIDetectEjectDevices.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C00569B4 (ACPIInitDeleteDeviceExtension.c)
 */

char *__fastcall ACPIExtListEnumNext(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  char *v7; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  KIRQL v9; // r14
  KIRQL v10; // al
  char *v11; // rdx
  bool v12; // zf
  char *result; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 24) = v2;
    v5 = *(_QWORD **)(v4 + v3);
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == v5 )
    {
      v5 = *(_QWORD **)(a1 + 8);
      v6 = (_QWORD *)*v5;
    }
    v7 = (char *)v5 - v4;
    *(_QWORD *)(a1 + 8) = v6;
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), v2);
    BugCheckParameter4 = *(_QWORD *)(a1 + 32);
    v9 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter4 + 732), 0xFFFFFFFF) == 1 )
    {
      if ( _bittest64((const signed __int64 *)(BugCheckParameter4 + 8), 0x39u) && *(_DWORD *)(BugCheckParameter4 + 196) )
        KeBugCheckEx(0xA3u, 2uLL, 0x90354uLL, 0LL, BugCheckParameter4);
      ACPIInitDeleteDeviceExtension((PVOID)BugCheckParameter4);
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLock(&AcpiPowerLock, v9);
    v10 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v11 = &v7[*(_QWORD *)(a1 + 40)];
    *(_QWORD *)(a1 + 32) = v7;
    v12 = v11 == *(char **)a1;
    *(_BYTE *)(a1 + 24) = v10;
    if ( v12 )
      return 0LL;
    return v7;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 40);
    v15 = *(_QWORD **)(v14 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v15 == v15 )
      v15 = *(_QWORD **)(a1 + 8);
    result = (char *)v15 - v14;
    *(_QWORD *)(a1 + 32) = (char *)v15 - v14;
    *(_QWORD *)(a1 + 8) = *v15;
    if ( v15 == *(_QWORD **)a1 )
      return 0LL;
  }
  return result;
}
