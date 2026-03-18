/*
 * XREFs of AcpiPccGetInterfaceInformation @ 0x1C0059D4C
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00109F0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C000C680 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiPccGetInterfaceInformation(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rbx
  KIRQL v9; // al

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x58u || !*(_WORD *)(v2 + 18) )
    return (unsigned int)-1073741811;
  v5 = *(_QWORD *)(v2 + 24);
  v6 = (*(_QWORD *)(DeviceExtension + 8) & 0x1000000000LL) == 0;
  v7 = *(unsigned int *)(v5 + 32);
  if ( v6 || (_DWORD)v7 != -1 )
  {
    if ( (unsigned int)v7 >= AcpiPccSubspaceCount )
      return (unsigned int)-1073741637;
    v8 = AcpiPccSubspaces + 648 * v7;
  }
  else
  {
    v8 = AcpiPccLegacySubspace;
  }
  if ( !v8 )
    return (unsigned int)-1073741637;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 640));
  if ( (*(_BYTE *)(v8 + 4) & 0x1E) == 6 )
  {
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v8 + 4) & 0xFFFFFFE1 | 0x18;
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 640), v9);
    *(_DWORD *)v5 = 65624;
    *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
    *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 40) = *(_QWORD *)(v8 + 104);
    *(_DWORD *)(v5 + 48) = *(_DWORD *)(v8 + 112);
    *(_QWORD *)(v5 + 72) = *(_QWORD *)(v8 + 88);
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(v8 + 96);
    *(_QWORD *)(v5 + 64) = *(_QWORD *)(v8 + 72);
    *(_QWORD *)(v5 + 56) = *(_QWORD *)(v8 + 64);
    PciConfigPinToLine();
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 640), v9);
  }
  return v3;
}
