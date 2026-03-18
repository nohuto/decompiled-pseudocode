/*
 * XREFs of ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00E8634
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00E84B8 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020F310 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetFirstProfilerInterface@DXGGLOBAL@@SA?AW4_DXGKETW_PROFILER_TYPE@@XZ @ 0x1C00E86B8 (-GetFirstProfilerInterface@DXGGLOBAL@@SA-AW4_DXGKETW_PROFILER_TYPE@@XZ.c)
 *     ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0162390 (--0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ @ 0x1C01624F0 (-Cancel@DXGDEADLOCK_TRACKER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGADAPTER::AcquireCoreResourceExclusiveWithTracking(__int64 a1, int a2)
{
  __int64 result; // rax
  _BYTE DeferredContext[328]; // [rsp+20h] [rbp-148h] BYREF

  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 0) )
  {
    DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER(DeferredContext, (struct DXGADAPTER *)a1);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 168), 1u);
    DXGDEADLOCK_TRACKER::Cancel((DXGDEADLOCK_TRACKER *)DeferredContext);
  }
  *(_DWORD *)(a1 + 4476) = a2;
  result = DXGGLOBAL::GetFirstProfilerInterface();
  *(_DWORD *)(a1 + 4480) = result;
  return result;
}
