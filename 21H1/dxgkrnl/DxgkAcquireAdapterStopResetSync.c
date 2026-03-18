/*
 * XREFs of DxgkAcquireAdapterStopResetSync @ 0x1C0213330
 * Callers:
 *     DpiDisableMsBddFallbackDriver @ 0x1C02C3400 (DpiDisableMsBddFallbackDriver.c)
 *     DpiEnableMsBddFallbackDriver @ 0x1C02C35AC (DpiEnableMsBddFallbackDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkAcquireAdapterStopResetSync(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx

  if ( a1 )
  {
    v4 = a1 + 136;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v4, 0LL);
    *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
    return 0LL;
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v2 + 24) = 244LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
