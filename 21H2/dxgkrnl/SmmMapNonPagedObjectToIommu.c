/*
 * XREFs of SmmMapNonPagedObjectToIommu @ 0x1C006E278
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C001B7D8 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmMapAdapterObjectsToDomain @ 0x1C006E000 (SmmMapAdapterObjectsToDomain.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C001BB40 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002FBC8 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E0E4 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 */

__int64 __fastcall SmmMapNonPagedObjectToIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  unsigned __int8 v3; // bl
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 LogicalAddress; // rax
  __int64 v11; // rbp
  int v12; // edx
  int v13; // eax
  PHYSICAL_ADDRESS v14; // r8
  int v15; // ebx
  int v16; // edx
  int v17; // ecx
  int v18; // r8d

  v3 = 1;
  if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 1058LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0LL,
          2,
          -1,
          L"pPhysicalObject->Flags.NonPaged == 1",
          1058LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
  v11 = LogicalAddress;
  if ( (*(_DWORD *)(a1 + 44) & 0x200) == 0 && (dword_1C0130B08 & 4) == 0 )
    v3 = 0;
  v12 = *(_DWORD *)(a1 + 44) & 0x1E;
  switch ( v12 )
  {
    case 4:
      v13 = SmmMapMdlToIommu(a3, LogicalAddress, *(struct _MDL **)(a1 + 8), v3);
      goto LABEL_15;
    case 10:
      v14.QuadPart = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a1 + 8)).QuadPart >> 12;
LABEL_14:
      v13 = SmmMapContiguousRangeToIommu(a3, v11, (struct _MDL *)v14.QuadPart, *(_QWORD *)a1, v3);
LABEL_15:
      v15 = v13;
      if ( v13 >= 0 )
        return (unsigned int)v15;
      goto LABEL_18;
    case 6:
      v14.QuadPart = *(_QWORD *)(a1 + 8) >> 12;
      goto LABEL_14;
  }
  v15 = -1073741811;
LABEL_18:
  WdLogSingleEntry2(2LL, a2, v15);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(
      v17,
      v16,
      v18,
      0LL,
      0,
      -1,
      L"Failed to map SysMm adapter object 0x%.16I64x to IOMMU. Status=0x%.8x",
      a2,
      v15,
      0LL,
      0LL,
      0LL);
  return (unsigned int)v15;
}
