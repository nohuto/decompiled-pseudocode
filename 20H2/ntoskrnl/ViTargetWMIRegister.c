/*
 * XREFs of ViTargetWMIRegister @ 0x1409DA8C4
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x1409EAF60 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1403715E4 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140372240 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A0BA4 (VfAvlInitializeLockContext.c)
 */

char __fastcall ViTargetWMIRegister(__int64 a1)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rax
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  VfAvlInitializeLockContext((__int64)&v7, 1);
  v4 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v7, v2, v3);
  if ( v4 )
  {
    v5 = v4[7];
    if ( v5 )
      *(_QWORD *)(v5 + 8) = a1;
  }
  return VfAvlCleanupLockContext((__int64)&v7);
}
