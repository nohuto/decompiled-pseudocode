/*
 * XREFs of ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C020A76C
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C02200F8 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z @ 0x1C020FB90 (-CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::CollectDbgInfo(
        PERESOURCE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v11; // rdx
  _OWORD *v12; // rax
  __int64 v13; // r8
  _OWORD *v14; // rcx
  __int128 v15; // xmm1
  ADAPTER_DISPLAY *v16; // rcx
  PERESOURCE v17; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 9533LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *a4 < 0x430 )
    return 2147483653LL;
  v11 = (char *)*a3;
  v12 = this + 249;
  v13 = 4LL;
  *(_DWORD *)v11 = 1885430849;
  v14 = v11 + 8;
  do
  {
    *v14 = *v12;
    v14[1] = v12[1];
    v14[2] = v12[2];
    v14[3] = v12[3];
    v14[4] = v12[4];
    v14[5] = v12[5];
    v14[6] = v12[6];
    v14 += 8;
    v15 = v12[7];
    v12 += 8;
    *(v14 - 1) = v15;
    --v13;
  }
  while ( v13 );
  *v14 = *v12;
  v14[1] = v12[1];
  v14[2] = v12[2];
  v14[3] = v12[3];
  *((_QWORD *)v14 + 8) = *((_QWORD *)v12 + 8);
  v16 = (ADAPTER_DISPLAY *)this[337];
  if ( v16 )
    ADAPTER_DISPLAY::CollectDbgInfo(v16, (struct DXGADAPTERDBGINFO *)v11);
  v17 = this[338];
  if ( v17 )
  {
    *((_OWORD *)v11 + 49) = *(_OWORD *)&v17[6].NumberOfSharedWaiters;
    *((_OWORD *)v11 + 50) = *(_OWORD *)&v17[6].Address;
  }
  *a3 = (char *)*a3 + 1072;
  *a4 -= 1072;
  return 0LL;
}
