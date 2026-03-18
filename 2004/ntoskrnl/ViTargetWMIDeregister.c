/*
 * XREFs of ViTargetWMIDeregister @ 0x1409D47DC
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x1409E4F40 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036F694 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14059D104 (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x1409DD648 (VfAvlEnumerateNodes.c)
 */

char __fastcall ViTargetWMIDeregister(__int64 a1)
{
  int v2; // edx
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  VfAvlInitializeLockContext((__int64)&v8, 0);
  v4 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v8, v3, (unsigned int)(v2 + 1));
  if ( v4 && (v6 = v4[7]) != 0 && *(_QWORD *)(v6 + 8) == a1 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  else
  {
    ++ViTargetWMIRegistrationMismatches;
    ((void (__fastcall *)(__int64, __int128 *, __int64 (__fastcall *)(), __int64))VfAvlEnumerateNodes)(
      v5,
      &v8,
      ViTargetWMIDeregisterCallback,
      a1);
  }
  return VfAvlCleanupLockContext((__int64)&v8);
}
