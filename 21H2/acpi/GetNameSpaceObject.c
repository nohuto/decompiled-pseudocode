/*
 * XREFs of GetNameSpaceObject @ 0x1C0019AC8
 * Callers:
 *     Scope @ 0x1C0019A40 (Scope.c)
 *     Field @ 0x1C0019CE0 (Field.c)
 *     Load @ 0x1C0022220 (Load.c)
 *     CreateNativeNameSpaceObject @ 0x1C0027F50 (CreateNativeNameSpaceObject.c)
 *     AMLIApplyNamespaceOverride @ 0x1C0028690 (AMLIApplyNamespaceOverride.c)
 *     Alias @ 0x1C002C5D0 (Alias.c)
 *     IndexField @ 0x1C002E000 (IndexField.c)
 *     Simulator_EvaluateNode @ 0x1C0064D80 (Simulator_EvaluateNode.c)
 *     Simulator_NotifyNode @ 0x1C0065048 (Simulator_NotifyNode.c)
 *     Simulator_RemoveNode @ 0x1C00654A0 (Simulator_RemoveNode.c)
 *     AMLICreateNativeNamespaceObject @ 0x1C00655C8 (AMLICreateNativeNamespaceObject.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C0065D84 (AMLIApplyNextNamespaceOverride.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0066118 (AMLIGetNamespaceOverrideObject.c)
 *     ParseDLMObjectInternal @ 0x1C0066C60 (ParseDLMObjectInternal.c)
 *     DebugExpr @ 0x1C0067114 (DebugExpr.c)
 *     DebugNotify @ 0x1C00673F0 (DebugNotify.c)
 *     BankField @ 0x1C0068620 (BankField.c)
 *     LoadTable @ 0x1C006A0B0 (LoadTable.c)
 *     ProcessLoadTable @ 0x1C006A9B0 (ProcessLoadTable.c)
 * Callees:
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObject(_BYTE *Src, __int64 a2, __int64 *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rdi
  KIRQL v10; // bl
  unsigned int NameSpaceObjectNoLock; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return NameSpaceObjectNoLock;
}
