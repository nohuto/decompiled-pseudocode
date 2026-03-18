/*
 * XREFs of VfTargetEtwRegister @ 0x1409D3F54
 * Callers:
 *     VerifierEtwRegister @ 0x1409E4E80 (VerifierEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x1409E4EC0 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14036F694 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1403702F0 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14059D104 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall VfTargetEtwRegister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  _QWORD *PoolWithTag; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  if ( !VfSafeMode )
  {
    v4 = 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x54456656u);
    VfAvlInitializeLockContext((__int64)&v10, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v10, a2, 1LL);
    if ( v6 )
    {
      v7 = v6[7];
      if ( v7 )
      {
        if ( PoolWithTag )
        {
          v8 = v7 + 16;
          PoolWithTag[2] = a1;
          PoolWithTag[3] = a2;
          v9 = *(_QWORD **)(v8 + 8);
          if ( *v9 != v8 )
            __fastfail(3u);
          *PoolWithTag = v8;
          v4 = 1;
          PoolWithTag[1] = v9;
          *v9 = PoolWithTag;
          *(_QWORD *)(v8 + 8) = PoolWithTag;
        }
        else
        {
          *(_DWORD *)(v7 + 32) |= 1u;
        }
      }
    }
    VfAvlCleanupLockContext((__int64)&v10);
    if ( !v4 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x54456656u);
    }
  }
}
