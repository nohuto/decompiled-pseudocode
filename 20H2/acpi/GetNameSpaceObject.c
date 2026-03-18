/*
 * XREFs of GetNameSpaceObject @ 0x1C00215DC
 * Callers:
 *     ParseAndGetNameSpaceObject @ 0x1C002155C (ParseAndGetNameSpaceObject.c)
 *     Field @ 0x1C00218B0 (Field.c)
 *     Scope @ 0x1C0022690 (Scope.c)
 *     CreateNativeNameSpaceObject @ 0x1C0022D64 (CreateNativeNameSpaceObject.c)
 *     Alias @ 0x1C0022FC0 (Alias.c)
 *     AMLIApplyNamespaceOverride @ 0x1C00234A0 (AMLIApplyNamespaceOverride.c)
 *     IndexField @ 0x1C0023590 (IndexField.c)
 *     Load @ 0x1C0024B60 (Load.c)
 *     Simulator_EvaluateNode @ 0x1C0063970 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0063C38 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C0064090 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00641B8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0064970 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0064D04 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C0065718 (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x1C0065CCC (DebugExpr.c)
 *     DebugNotify @ 0x1C0065FB0 (DebugNotify.c)
 *     BankField @ 0x1C0066E40 (BankField.c)
 *     LoadTable @ 0x1C0069430 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C006A060 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0008DA0 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
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
