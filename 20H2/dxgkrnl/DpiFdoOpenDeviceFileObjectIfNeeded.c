/*
 * XREFs of DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C0182318
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     DpiFdoDispatchPnp @ 0x1C0197DA0 (DpiFdoDispatchPnp.c)
 * Callees:
 *     DpiIndirectOpenDevice @ 0x1C02D45AC (DpiIndirectOpenDevice.c)
 */

__int64 __fastcall DpiFdoOpenDeviceFileObjectIfNeeded(__int64 a1)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax

  if ( !*(_BYTE *)(a1 + 1158) )
    return 0LL;
  v3 = a1 + 1168;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 1168);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 1224) = KeGetCurrentThread();
  v5 = DpiIndirectOpenDevice(v4, a1 + 1232);
  v8 = v5;
  if ( v5 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
  *(_QWORD *)(a1 + 1224) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v3);
  return (unsigned int)v8;
}
