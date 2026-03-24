/*
 * XREFs of AcpiPccEjectInterface @ 0x1C0011A0C
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0010C50 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0098F50 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C000CA40 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiPccEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 DeviceExtension; // rax
  __int64 v5; // rsi
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  KIRQL v11; // dl
  unsigned int v12; // ebp
  __int64 v13; // rax
  char v14; // al
  int v15; // ecx
  int v16; // ecx

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x80u || !*(_WORD *)(v2 + 18) )
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
  v9 = 0;
  if ( !v8 || *(_QWORD *)(v5 + 40) && (*(_DWORD *)(v8 + 4) & 1) == 0 )
    return (unsigned int)-1073741637;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 640));
  v12 = *(_DWORD *)(v8 + 4) & 0x1E;
  if ( v12 == 4 )
  {
    if ( (unsigned __int8)(*(_BYTE *)v8 - 1) > 1u || (**(_WORD **)(v8 + 56) & 1) != 0 )
    {
      *(_DWORD *)(v8 + 4) = *(_DWORD *)(v8 + 4) & 0xFFFFFFE1 | 6;
      v13 = *(_QWORD *)(v5 + 40);
      if ( v13 )
      {
        *(_QWORD *)(v8 + 264) = v13;
        *(_QWORD *)(v8 + 272) = *(_QWORD *)(v5 + 48);
        v14 = *(_BYTE *)v8 + 1;
        *(_QWORD *)(v8 + 280) = a1;
        if ( (v14 & 0xFE) == 0 )
          _InterlockedAdd(&AcpiPccSciReferenceCount, 1u);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 640), v11);
      v15 = *(_DWORD *)(v5 + 84);
      *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
      *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
      *(_DWORD *)v5 = 65664;
      *(_QWORD *)(v5 + 8) = 0LL;
      *(_QWORD *)(v5 + 56) = v8;
      *(_DWORD *)(v5 + 64) = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v5 + 68) = *(_DWORD *)(v8 + 12);
      *(_QWORD *)(v5 + 72) = *(_QWORD *)(v8 + 24);
      *(_DWORD *)(v5 + 80) = *(_DWORD *)(v8 + 32);
      v16 = *(_DWORD *)(v8 + 4) ^ v15;
      *(_QWORD *)(v5 + 88) = AcpiPccAcquireSubspace;
      *(_DWORD *)(v5 + 84) ^= v16 & 1;
      *(_QWORD *)(v5 + 96) = AcpiPccAcquireSubspaceAsync;
      *(_QWORD *)(v5 + 104) = AcpiPccExecuteCommand;
      *(_QWORD *)(v5 + 112) = AcpiPccExecuteCommandAsync;
      *(_QWORD *)(v5 + 120) = AcpiPccReleaseSubspace;
      PciConfigPinToLine();
    }
    else
    {
      return (unsigned int)-1073740024;
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 640), v11);
    return v12 < 4 ? -1073741823 : -1073740024;
  }
  return v9;
}
