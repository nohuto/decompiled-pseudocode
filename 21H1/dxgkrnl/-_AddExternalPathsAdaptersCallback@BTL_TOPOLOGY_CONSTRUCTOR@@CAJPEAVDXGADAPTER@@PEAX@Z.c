/*
 * XREFs of ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02E9200
 * Callers:
 *     _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_ @ 0x1C02E8C70 (_BtlPreAcquireSharedAccess_-BTL_TOPOLOGY_CONSTRUCTOR--_AddExternalPathsAdaptersCallback_0_1_.c)
 * Callees:
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02E9240 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback(
        struct DXGADAPTER *a1,
        BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)a1 + 334);
  if ( v3 && (!*((_BYTE *)this + 10) || *(_BYTE *)(v3 + 250)) )
    return BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsToTopology(this, a1);
  else
    return 0LL;
}
