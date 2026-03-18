/*
 * XREFs of ?PurgeSegments@ADAPTER_RENDER@@AEAAXU_VIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1C01E9A2C
 * Callers:
 *     ?NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0163CB4 (-NotifyProcessFreeze@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z @ 0x1C01EF9A0 (-ApplyCoreSyncAction@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_ACTION@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C452C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C02C49B8 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ADAPTER_RENDER::PurgeSegments(struct _EX_RUNDOWN_REF *a1, unsigned int a2, __int64 a3)
{
  DXGADAPTER *Count; // rcx
  int v7; // edi
  char result; // al
  __int64 v9; // rsi
  ULONG_PTR v10; // rcx
  ULONG_PTR v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r15
  const wchar_t *v14; // r9

  Count = (DXGADAPTER *)a1[2].Count;
  v7 = a2 & 8;
  if ( (a2 & 8) != 0 )
  {
    result = DXGADAPTER::IsCoreResourceSharedOwner(Count);
    v9 = 0LL;
    if ( result )
      goto LABEL_3;
    v13 = 2887LL;
    WdLogSingleEntry1(1LL, 2887LL);
    v14 = L"IsCoreResourceSharedOwner()";
  }
  else
  {
    result = DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)Count);
    v9 = 0LL;
    if ( result )
      goto LABEL_3;
    v13 = 2891LL;
    WdLogSingleEntry1(1LL, 2891LL);
    v14 = L"IsCoreResourceExclusiveOwner()";
  }
  result = DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
LABEL_3:
  v10 = a1[82].Count;
  if ( v10 )
  {
    if ( !v7 )
    {
      ExWaitForRundownProtectionRelease(a1 + 155);
      ExReInitializeRundownProtection(a1 + 155);
      v10 = a1[82].Count;
    }
    v11 = a1[81].Count;
    if ( a3 )
    {
      v12 = *(_QWORD *)(a3 + 64);
      if ( v12 )
        v9 = *(_QWORD *)(v12 + 8LL * (unsigned int)(*(_DWORD *)v11 - 1));
    }
    return (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(v11 + 8) + 88LL))(v10, a2, v9);
  }
  return result;
}
