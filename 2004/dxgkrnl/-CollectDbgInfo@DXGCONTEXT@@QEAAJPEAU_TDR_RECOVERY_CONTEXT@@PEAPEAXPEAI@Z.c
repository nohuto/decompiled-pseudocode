/*
 * XREFs of ?CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C022EB20
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C02212A8 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGCONTEXT::CollectDbgInfo(
        DXGCONTEXT *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v11; // rcx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 1696LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *a4 < 0x40 )
    return 2147483653LL;
  v11 = (char *)*a3;
  *(_DWORD *)v11 = 1953394499;
  *((_DWORD *)v11 + 1) = *((_DWORD *)this + 36);
  *(_OWORD *)(v11 + 8) = *(_OWORD *)((char *)this + 200);
  *(_OWORD *)(v11 + 24) = *(_OWORD *)((char *)this + 216);
  *((_DWORD *)v11 + 10) = *((_DWORD *)this + 102);
  *((_DWORD *)v11 + 11) = *((_DWORD *)this + 103);
  *((_DWORD *)v11 + 12) = *((_DWORD *)this + 105);
  *((_DWORD *)v11 + 13) = *((_DWORD *)this + 110);
  *((_DWORD *)v11 + 14) = *((_DWORD *)this + 111);
  *((_DWORD *)v11 + 15) = *((_DWORD *)this + 112);
  *a3 = (char *)*a3 + 64;
  *a4 -= 64;
  return 0LL;
}
