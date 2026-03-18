/*
 * XREFs of SmmIoMmuUnmapStagingMdl @ 0x1C006DBA8
 * Callers:
 *     SmmIommuMapStagingMdl @ 0x1C006DEC4 (SmmIommuMapStagingMdl.c)
 *     SmmIommuUnmapReferenced @ 0x1C006DFAC (SmmIommuUnmapReferenced.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E0E4 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E504 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 * Callees:
 *     SmmUnmapIommu @ 0x1C002FC9C (SmmUnmapIommu.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmIoMmuReferenceMdl @ 0x1C006DA40 (SmmIoMmuReferenceMdl.c)
 */

__int64 __fastcall SmmIoMmuUnmapStagingMdl(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 result; // rax

  do
  {
    if ( (int)SmmIoMmuReferenceMdl(a1 + 48, (__int64)a3, 0) < 0 )
    {
      WdLogSingleEntry1(1LL, 700LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v7,
            v6,
            v8,
            0LL,
            2,
            -1,
            L"(((NTSTATUS)(Status)) >= 0)",
            700LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    v9 = a3[7];
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 160);
      v11 = v9 << 12;
      *(_DWORD *)(v10 + 40) = v11;
      *(_QWORD *)v10 = 0LL;
      *(_WORD *)(v10 + 10) = 0;
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_DWORD *)(v10 + 44) = 0;
      *(_WORD *)(v10 + 8) = 8 * ((v11 >> 12) + 6);
      SmmUnmapIommu(a1, a2, *(_DWORD **)(a1 + 160));
      if ( a2 )
        a2 += a3[7];
    }
    result = a3[4];
  }
  while ( a3[6] != (_DWORD)result );
  return result;
}
