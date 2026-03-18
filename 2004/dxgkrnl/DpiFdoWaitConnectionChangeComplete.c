/*
 * XREFs of DpiFdoWaitConnectionChangeComplete @ 0x1C02CC8E4
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C021777C (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpiFdoWaitConnectionChangeComplete(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  bool v4; // si
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rax
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  if ( a1 && (v3 = *(_QWORD *)(a1 + 64)) != 0 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
  {
    v4 = 1;
    v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), DxgkQueryConnectionChanges, File, 1u, 0x20u);
    v9 = v5;
    if ( v5 >= 0 )
    {
      if ( !DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v3 + 3896), 1LL) )
        v4 = ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 168)) != 0;
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 64), DxgkQueryConnectionChanges, 0x20u);
      if ( v4 )
      {
        v2 = -1073741811;
        v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
        v13[3] = 275LL;
        v13[4] = 21LL;
        v13[5] = -1073741811LL;
        WdLogEvent5_WdCriticalError(v13);
      }
      else
      {
        Object[0] = (PVOID)(v3 + 3528);
        Object[1] = (PVOID)(v3 + 3696);
        return (unsigned int)KeWaitForMultipleObjects(2u, Object, WaitAll, Executive, 0, 0, 0LL, 0LL);
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v10 + 24) = v9;
      WdLogEvent5_WdWarning(v10);
    }
  }
  else
  {
    v2 = -1073741811;
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
  }
  return v2;
}
