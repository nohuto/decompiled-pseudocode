/*
 * XREFs of ?CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C0253DE8
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C02212A8 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::CollectDbgInfo(
        DXGDEVICE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v11; // rcx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 1359LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *a4 < 0xA0 )
    return 2147483653LL;
  v11 = (char *)*a3;
  *(_DWORD *)v11 = 1769366852;
  *((_DWORD *)v11 + 1) = *((_DWORD *)this + 108);
  *(_OWORD *)(v11 + 8) = *((_OWORD *)this + 37);
  *((_QWORD *)v11 + 3) = *((_QWORD *)this + 76);
  *((_OWORD *)v11 + 2) = *(_OWORD *)((char *)this + 1208);
  *((_OWORD *)v11 + 3) = *(_OWORD *)((char *)this + 1224);
  *((_OWORD *)v11 + 4) = *(_OWORD *)((char *)this + 1240);
  *((_OWORD *)v11 + 5) = *(_OWORD *)((char *)this + 1256);
  *((_OWORD *)v11 + 6) = *(_OWORD *)((char *)this + 1784);
  *((_OWORD *)v11 + 7) = *(_OWORD *)((char *)this + 1800);
  *((_OWORD *)v11 + 8) = *(_OWORD *)((char *)this + 1816);
  *((_OWORD *)v11 + 9) = *(_OWORD *)((char *)this + 1832);
  *a3 = (char *)*a3 + 160;
  *a4 -= 160;
  return 0LL;
}
