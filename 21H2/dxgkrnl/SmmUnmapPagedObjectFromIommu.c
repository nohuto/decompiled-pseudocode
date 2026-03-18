/*
 * XREFs of SmmUnmapPagedObjectFromIommu @ 0x1C006E7C8
 * Callers:
 *     SmmClosePhysicalObject @ 0x1C001B364 (SmmClosePhysicalObject.c)
 *     SmmMapAdapterObjectsToDomain @ 0x1C006E000 (SmmMapAdapterObjectsToDomain.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C001BB40 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmUnmapIommu @ 0x1C002FC9C (SmmUnmapIommu.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmIommuUnmapReferenced @ 0x1C006DFAC (SmmIommuUnmapReferenced.c)
 */

char __fastcall SmmUnmapPagedObjectFromIommu(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char v4; // bl
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 LogicalAddress; // rax
  _DWORD *v12; // r8

  v3 = *(_DWORD *)(a1 + 44);
  v4 = 1;
  if ( (v3 & 1) != 0 )
  {
    LOBYTE(v3) = WdLogSingleEntry1(1LL, 1329LL);
    if ( bTracingEnabled )
    {
      LOBYTE(v3) = BYTE3(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        LOBYTE(v3) = McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                       v9,
                       v8,
                       v10,
                       0LL,
                       2,
                       -1,
                       L"pPhysicalObject->Flags.NonPaged == 0",
                       1329LL,
                       0LL,
                       0LL,
                       0LL,
                       0LL);
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
    if ( (*(_DWORD *)(a1 + 44) & 0x200) == 0 && (dword_1C0130B08 & 4) == 0 )
      v4 = 0;
    v12 = *(_DWORD **)(a1 + 56);
    if ( v4 )
      LOBYTE(v3) = SmmIommuUnmapReferenced(a3, LogicalAddress, (__int64)v12);
    else
      LOBYTE(v3) = SmmUnmapIommu(a3, LogicalAddress, v12);
  }
  return v3;
}
