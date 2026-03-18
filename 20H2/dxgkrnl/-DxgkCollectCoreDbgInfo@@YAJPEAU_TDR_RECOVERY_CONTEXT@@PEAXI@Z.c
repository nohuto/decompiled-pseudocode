/*
 * XREFs of ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C02200F8
 * Callers:
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02642C0 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C020A76C (-CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 *     ?CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C022D970 (-CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 *     ?CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C0252E08 (-CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DxgkCollectCoreDbgInfo(struct _TDR_RECOVERY_CONTEXT *a1, void *a2)
{
  PERESOURCE *v3; // rcx
  __int64 result; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  struct _TDR_RECOVERY_CONTEXT *v8; // rdx
  DXGCONTEXT *v9; // rdi
  DXGDEVICE *v10; // rcx
  __int64 v11; // rax
  unsigned int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  void *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v12[0] = 2048;
  v3 = (PERESOURCE *)*((_QWORD *)a1 + 4);
  if ( !v3 )
  {
    v5 = -1073741823;
    v11 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v11 + 24) = -1073741823LL;
    WdLogEvent5_WdError(v11);
    return v5;
  }
  result = DXGADAPTER::CollectDbgInfo(v3, (struct _TDR_RECOVERY_CONTEXT *)a2, &v13, v12);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 2704LL);
    if ( !v6 )
      return v5;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v6 + 616) + 8LL) + 456LL))(*((_QWORD *)a1 + 6));
    v9 = (DXGCONTEXT *)v7;
    if ( !v7 )
      return v5;
    v10 = *(DXGDEVICE **)(v7 + 16);
    if ( !v10 || (result = DXGDEVICE::CollectDbgInfo(v10, v8, &v13, v12), (int)result >= 0) )
    {
      result = DXGCONTEXT::CollectDbgInfo(v9, v8, &v13, v12);
      v5 = result;
      if ( (int)result >= 0 )
        return v5;
    }
  }
  return result;
}
