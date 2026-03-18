/*
 * XREFs of SmmIommuUnmapReferenced @ 0x1C006DFAC
 * Callers:
 *     ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002FE30 (-SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006E694 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006E7C8 (SmmUnmapPagedObjectFromIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0070E18 (SmmUnmapLockedPagesFromIommu.c)
 * Callees:
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006DBA8 (SmmIoMmuUnmapStagingMdl.c)
 */

__int64 __fastcall SmmIommuUnmapReferenced(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]
  int v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+3Ch] [rbp-Ch]

  v8 = 0;
  v7 = 0;
  v4[0] = a3 + 48;
  v5 = *(_DWORD *)(a3 + 40) >> 12;
  v4[1] = *(_QWORD *)(a1 + 160) + 48LL;
  v6 = *(_DWORD *)(a1 + 224);
  return SmmIoMmuUnmapStagingMdl(a1, a2, (unsigned int *)v4);
}
