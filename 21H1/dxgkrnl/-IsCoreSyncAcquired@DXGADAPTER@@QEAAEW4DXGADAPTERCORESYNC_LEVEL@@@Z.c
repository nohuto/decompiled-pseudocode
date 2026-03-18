/*
 * XREFs of ?IsCoreSyncAcquired@DXGADAPTER@@QEAAEW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0209C74
 * Callers:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C021352C (DxgkIsAdapterCoreSyncAcquired.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

BOOLEAN __fastcall DXGADAPTER::IsCoreSyncAcquired(DXGADAPTER *a1, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // rax

  v2 = (int)a2;
  v3 = 0;
  if ( (_DWORD)a2 == 1 )
    return DXGADAPTER::IsCoreResourceSharedOwner(a1);
  if ( (_DWORD)a2 == 2 || (_DWORD)a2 == 5 )
    return DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1);
  v4 = WdLogNewEntry5_WdError(a1, a2);
  *(_QWORD *)(v4 + 24) = v2;
  WdLogEvent5_WdError(v4);
  return v3;
}
