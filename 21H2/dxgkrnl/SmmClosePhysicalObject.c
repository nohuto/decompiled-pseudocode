/*
 * XREFs of SmmClosePhysicalObject @ 0x1C001B364
 * Callers:
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C001B538 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C001B7D8 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C002FED0 (-SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     DxgkClosePhysicalMemoryObjectCB @ 0x1C0054820 (DxgkClosePhysicalMemoryObjectCB.c)
 *     DxgkDestroyPhysicalMemoryObjectCB @ 0x1C0054A00 (DxgkDestroyPhysicalMemoryObjectCB.c)
 * Callees:
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C001B450 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C00541B0 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006E694 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006E7C8 (SmmUnmapPagedObjectFromIommu.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C006FC40 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 */

void __fastcall SmmClosePhysicalObject(__int64 *a1, __int64 a2, int a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  KIRQL v6; // r15
  KIRQL v7; // al
  __int64 *v8; // r8
  __int64 **v9; // rdx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // r8

  v3 = a1 - 8;
  v4 = a1[2];
  if ( (Microsoft_Windows_DxgKrnl_SysMmEnableBits & 1) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(
      (unsigned int)&SysMmControlGuid_Context,
      (unsigned int)&ClosePhysicalObject,
      a3,
      v4,
      (_BYTE)a1 - 64,
      (char)a1);
  if ( (dword_1C0130B08 & 0x20) != 0 && *(_QWORD *)v3[3] != v3[3] )
  {
    WdLogSingleEntry1(1LL, 154LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0,
          2,
          -1,
          (__int64)L"IsListEmpty(&pPhysicalObject->Debug->AdlListHead)",
          154LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v4 + 72));
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 32));
  v8 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v9 = (__int64 **)a1[1], *v9 != a1) )
    __fastfail(3u);
  *v9 = v8;
  v8[1] = (__int64)v9;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 32), v7);
  a1[2] = 0LL;
  if ( !*(_DWORD *)(v4 + 92) )
  {
    v13 = v4 + 64;
    if ( (*((_DWORD *)v3 + 11) & 1) != 0 )
      SmmUnmapNonPagedObjectFromIommu(v3, a1, v13);
    else
      SmmUnmapPagedObjectFromIommu(v3, a1, v13);
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v4 + 72), v6);
  if ( (*(_DWORD *)(v4 + 80) & 1) != 0 && (dword_1C0130B08 & 0x18) == 0 )
    SmmFreeLogicalAddress(*(struct SYSMM_LOGICAL_ALLOCATOR **)(v4 + 352), (struct SYSMM_LOGICAL_BLOCK *)a1[3]);
  SysMmUnreferencePhysicalObject((struct SYSMM_PHYSICAL_OBJECT *)v3);
}
