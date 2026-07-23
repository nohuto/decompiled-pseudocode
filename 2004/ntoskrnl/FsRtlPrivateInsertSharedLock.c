/*
 * XREFs of FsRtlPrivateInsertSharedLock @ 0x1402D5E48
 * Callers:
 *     FsRtlPrivateInsertLock @ 0x1402D7B14 (FsRtlPrivateInsertLock.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x1402D7C48 (FsRtlFindFirstOverlappingSharedNode.c)
 *     RtlSplay @ 0x1402D7E40 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x140330430 (RtlRealSuccessor.c)
 *     RtlDeleteNoSplay @ 0x140330680 (RtlDeleteNoSplay.c)
 *     FsRtlSplitLocks @ 0x1403308E8 (FsRtlSplitLocks.c)
 */

char __fastcall FsRtlPrivateInsertSharedLock(__int64 a1, _RTL_SPLAY_LINKS *a2)
{
  _RTL_SPLAY_LINKS **p_Parent; // r15
  PRTL_SPLAY_LINKS *v4; // rbp
  __int64 v5; // rcx
  __int64 FirstOverlappingSharedNode; // rax
  _RTL_SPLAY_LINKS *v7; // rbx
  _RTL_SPLAY_LINKS *v8; // rax
  PRTL_SPLAY_LINKS v9; // rcx
  _RTL_SPLAY_LINKS *v10; // rax
  _RTL_SPLAY_LINKS **v11; // r14
  _RTL_SPLAY_LINKS *v12; // rax
  _RTL_SPLAY_LINKS **v13; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // r8
  _RTL_SPLAY_LINKS *v15; // rax
  PRTL_SPLAY_LINKS v16; // rdi
  _RTL_SPLAY_LINKS *Parent; // rdx
  PRTL_SPLAY_LINKS v18; // rax
  _RTL_SPLAY_LINKS *v19; // rsi
  char v21; // [rsp+60h] [rbp+8h] BYREF
  _RTL_SPLAY_LINKS *v22; // [rsp+68h] [rbp+10h] BYREF

  p_Parent = &a2[2].Parent;
  v4 = (PRTL_SPLAY_LINKS *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  v22 = 0LL;
  v21 = 0;
  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(
                                 v5,
                                 (int)a2 + 8,
                                 (int)a2 + 48,
                                 (unsigned int)&v22,
                                 (__int64)&v21);
  v7 = (_RTL_SPLAY_LINKS *)FirstOverlappingSharedNode;
  if ( FirstOverlappingSharedNode )
  {
    v11 = (_RTL_SPLAY_LINKS **)(FirstOverlappingSharedNode - 24);
    v12 = *(_RTL_SPLAY_LINKS **)(FirstOverlappingSharedNode - 24);
    v13 = v11;
    if ( v12 )
    {
      LeftChild = a2->LeftChild;
      do
      {
        if ( LeftChild < v12->LeftChild || LeftChild == v12->LeftChild && (!a2->RightChild || v12->RightChild) )
          break;
        v13 = &v12->Parent;
        v12 = v12->Parent;
      }
      while ( v12 );
    }
    v15 = *v13;
    if ( !*v13 )
    {
      v7[1].Parent = a2;
      v15 = *v13;
    }
    a2->Parent = v15;
    *v13 = a2;
    *v4 = RtlSplay(v7);
    if ( *p_Parent > v7[-1].RightChild )
    {
      v7[-1].RightChild = *p_Parent;
      while ( 1 )
      {
        v18 = RtlRealSuccessor(v7);
        v19 = v18;
        if ( !v18 )
          break;
        v16 = v18 - 1;
        Parent = v18[-1].Parent;
        if ( Parent->LeftChild > v7[-1].RightChild )
          break;
        if ( !LOBYTE(v7[-1].LeftChild) && LOBYTE(v16->LeftChild) )
        {
          FsRtlSplitLocks(&v18[-1], 0LL, 0LL, 0LL);
          Parent = v16->Parent;
        }
        v7[1].Parent->Parent = Parent;
        v7[1].Parent = v16[2].Parent;
        if ( v16->RightChild > v7[-1].RightChild )
        {
          if ( LOBYTE(v16->LeftChild) )
            LOBYTE(v7[-1].LeftChild) = 1;
          v7[-1].RightChild = v16->RightChild;
        }
        RtlDeleteNoSplay(v19, v4);
        ExFreeToNPagedLookasideList(&FsRtlLockTreeNodeLookasideList, &v19[-1]);
      }
    }
    if ( LOBYTE(v7[-1].LeftChild) )
      FsRtlSplitLocks(v11, 0LL, 0LL, 0LL);
  }
  else
  {
    v8 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
    if ( !v8 )
      return (char)v8;
    v9 = v8 + 1;
    LOBYTE(v8->LeftChild) = 0;
    v8[2].Parent = a2;
    v8->Parent = a2;
    v8[1].Parent = v8 + 1;
    v8[1].LeftChild = 0LL;
    v8[1].RightChild = 0LL;
    v8->RightChild = *p_Parent;
    v10 = v22;
    a2->Parent = 0LL;
    if ( v10 )
    {
      if ( v21 )
        v10->LeftChild = v9;
      else
        v10->RightChild = v9;
      v9->Parent = v10;
      v9 = RtlSplay(v9);
    }
    *v4 = v9;
  }
  LOBYTE(v8) = 1;
  return (char)v8;
}
