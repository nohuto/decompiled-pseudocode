/*
 * XREFs of SmmIommuMapReferenced @ 0x1C006DE70
 * Callers:
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002FBC8 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 * Callees:
 *     SmmIommuMapStagingMdl @ 0x1C006DEC4 (SmmIommuMapStagingMdl.c)
 */

__int64 __fastcall SmmIommuMapReferenced(__int64 a1, __int64 a2, __int64 a3)
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
  return SmmIommuMapStagingMdl(a1, a2, v4);
}
