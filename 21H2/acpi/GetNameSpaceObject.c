/*
 * XREFs of GetNameSpaceObject @ 0x1C002183C
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C00217BC (ParseAndGetNameSpaceObject.c)
 *     Field @ 0x1C0021B10 (Field.c)
 *     Scope @ 0x1C00228F0 (Scope.c)
 *     CreateNativeNameSpaceObject @ 0x1C0022FC4 (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0023220 (Alias.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0023700 (AMLIApplyNamespaceOverride.c)
 *     IndexField @ 0x1C00237F0 (IndexField.c)
 *     Load @ 0x1C0024DC0 (Load.c)
 *     Simulator_EvaluateNode @ 0x1C0063B00 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0063DC8 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0064220 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C0064348 (AMLICreateNativeNamespaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0064B00 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0064E94 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C00658A8 (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x1C0065E5C (DebugExpr.c)
 *     DebugNotify @ 0x1C0066140 (DebugNotify.c)
 *     BankField @ 0x1C0066FD0 (BankField.c)
 *     LoadTable @ 0x1C00695C0 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C006A1F0 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0009160 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v10; // bl
  unsigned int NameSpaceObjectNoLock; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v8);
  PoolWithTag[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return NameSpaceObjectNoLock;
}
