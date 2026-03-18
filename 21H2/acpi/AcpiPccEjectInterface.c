/*
 * XREFs of AcpiPccEjectInterface @ 0x1C005AA64
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0005A80 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0091E90 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C0001EC0 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiPccEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 DeviceExtension; // rax
  unsigned int v5; // edi
  __int64 v6; // rsi
  bool v7; // cf
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  KIRQL v13; // dl
  unsigned int v14; // ebp
  __int64 v15; // rax
  char v16; // al
  int v17; // ecx
  int v18; // ecx

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x80u || !*(_WORD *)(v2 + 18) )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(v2 + 24);
  v7 = (*(_QWORD *)(DeviceExtension + 8) & 0x1000000000LL) != 0;
  v8 = *(unsigned int *)(v6 + 32);
  if ( v7 && (_DWORD)v8 == -1 )
  {
    v9 = AcpiPccLegacySubspace;
  }
  else
  {
    if ( (unsigned int)v8 >= AcpiPccSubspaceCount )
      return (unsigned int)-1073741637;
    v9 = AcpiPccSubspaces + 656 * v8;
  }
  v5 = 0;
  if ( !v9 )
    return (unsigned int)-1073741637;
  if ( *(_BYTE *)v9 == 0xFF )
  {
    v10 = *(_QWORD *)(v9 + 40);
    v11 = *(_DWORD *)(v10 + 16);
    *(_DWORD *)(v9 + 8) = v11;
    if ( v11 < 0x1F4 )
      v11 = 500;
    *(_DWORD *)(v9 + 12) = v11;
    v12 = *(_DWORD *)(v10 + 20);
    if ( v12 )
      *(_DWORD *)(v9 + 16) = 0x1E8480 / v12;
    if ( (*(_BYTE *)(v10 + 8) & 1) != 0 )
      *(_DWORD *)(v9 + 4) |= 1u;
  }
  if ( *(_QWORD *)(v6 + 40) && (*(_DWORD *)(v9 + 4) & 1) == 0 )
    return (unsigned int)-1073741637;
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 648));
  v14 = *(_DWORD *)(v9 + 4) & 0x1E;
  if ( v14 == 4 )
  {
    if ( (unsigned __int8)(*(_BYTE *)v9 - 1) > 1u || (**(_WORD **)(v9 + 56) & 1) != 0 )
    {
      **(_WORD **)(v9 + 56) &= ~1u;
      *(_DWORD *)(v9 + 4) = *(_DWORD *)(v9 + 4) & 0xFFFFFFE1 | 6;
      v15 = *(_QWORD *)(v6 + 40);
      if ( v15 )
      {
        *(_QWORD *)(v9 + 264) = v15;
        *(_QWORD *)(v9 + 272) = *(_QWORD *)(v6 + 48);
        v16 = *(_BYTE *)v9 + 1;
        *(_QWORD *)(v9 + 280) = a1;
        if ( (v16 & 0xFE) == 0 )
          _InterlockedAdd(&AcpiPccSciReferenceCount, 1u);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 648), v13);
      v17 = *(_DWORD *)(v6 + 84);
      *(_QWORD *)(v6 + 16) = PciConfigPinToLine;
      *(_QWORD *)(v6 + 24) = PciConfigPinToLine;
      *(_DWORD *)v6 = 65664;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 56) = v9;
      *(_DWORD *)(v6 + 64) = *(_DWORD *)(v9 + 8);
      *(_DWORD *)(v6 + 68) = *(_DWORD *)(v9 + 16);
      *(_QWORD *)(v6 + 72) = *(_QWORD *)(v9 + 24);
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(v9 + 32);
      v18 = *(_DWORD *)(v9 + 4) ^ v17;
      *(_QWORD *)(v6 + 88) = AcpiPccAcquireSubspace;
      *(_DWORD *)(v6 + 84) ^= v18 & 1;
      *(_QWORD *)(v6 + 96) = AcpiPccAcquireSubspaceAsync;
      *(_QWORD *)(v6 + 104) = AcpiPccExecuteCommand;
      *(_QWORD *)(v6 + 112) = AcpiPccExecuteCommandAsync;
      *(_QWORD *)(v6 + 120) = AcpiPccReleaseSubspace;
      PciConfigPinToLine();
    }
    else
    {
      v5 = -1073740024;
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 648), v13);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 648), v13);
    return v14 < 4 ? -1073741823 : -1073740024;
  }
  return v5;
}
