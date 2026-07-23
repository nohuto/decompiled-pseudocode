/*
 * XREFs of FsRtlSplitLocks @ 0x1403308E8
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x1402D5E48 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleShared @ 0x1402D5F9C (FsRtlFastUnlockSingleShared.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140330124 (FsRtlPrivateFastUnlockAll.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     RtlRealSuccessor @ 0x140330430 (RtlRealSuccessor.c)
 */

void __fastcall FsRtlSplitLocks(__int64 a1, _RTL_SPLAY_LINKS *a2, unsigned __int64 *a3, _RTL_SPLAY_LINKS **a4)
{
  _RTL_SPLAY_LINKS *v5; // rbp
  _RTL_SPLAY_LINKS *v6; // rbx
  int v7; // r13d
  unsigned __int64 v8; // rdi
  _RTL_SPLAY_LINKS *Parent; // r14
  unsigned __int64 v10; // rcx
  _RTL_SPLAY_LINKS *LeftChild; // rsi
  _RTL_SPLAY_LINKS *v12; // rax
  unsigned __int64 v13; // rax
  _RTL_SPLAY_LINKS *v14; // rax
  _RTL_SPLAY_LINKS *v15; // rax
  _RTL_SPLAY_LINKS *v16; // r15
  _RTL_SPLAY_LINKS *v17; // r14
  PRTL_SPLAY_LINKS v18; // rax
  _RTL_SPLAY_LINKS *RightChild; // rax
  unsigned __int64 v20; // [rsp+50h] [rbp+8h]

  v5 = (_RTL_SPLAY_LINKS *)a1;
  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v8 = *(_QWORD *)(a1 + 16);
    a2 = (_RTL_SPLAY_LINKS *)a1;
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    v8 = *a3;
    v6 = *a4;
    if ( *a3 <= (unsigned __int64)*a4 || !*(_QWORD *)a1 )
      return;
  }
  Parent = a2->Parent;
  v10 = *(_QWORD *)(a1 + 16);
  v20 = v10;
  if ( a2->Parent )
  {
    LeftChild = 0LL;
    v12 = a2->Parent;
    do
    {
      if ( v5->Parent == v12 )
      {
        v6 = Parent[2].Parent;
        LeftChild = Parent->LeftChild;
        if ( v10 <= v8 )
          v5->RightChild = v6;
        goto LABEL_10;
      }
      v13 = (unsigned __int64)Parent->LeftChild;
      if ( v13 > (unsigned __int64)v6 && (Parent->RightChild || (_RTL_SPLAY_LINKS *)v13 != LeftChild) )
      {
        v15 = (_RTL_SPLAY_LINKS *)ExAllocateFromNPagedLookasideList(&FsRtlLockTreeNodeLookasideList);
        v16 = v15;
        if ( v15 )
        {
          v17 = v15 + 1;
          LOBYTE(v15->LeftChild) = 0;
          v15[1].Parent = v15 + 1;
          v18 = v5 + 1;
          v17->LeftChild = 0LL;
          v17->RightChild = 0LL;
          if ( v5[1].RightChild )
          {
            v18 = RtlRealSuccessor(v5 + 1);
            v18->LeftChild = v17;
          }
          else
          {
            v5[1].RightChild = v17;
          }
          v17->Parent = v18;
          Parent = v16;
          v16->Parent = a2->Parent;
          a2->Parent = 0LL;
          v16[2].Parent = v5[2].Parent;
          RightChild = v5->RightChild;
          v5[2].Parent = a2;
          v16->RightChild = RightChild;
          v5->RightChild = v6;
          if ( v7 )
            v7 = 0;
          else
            LOBYTE(v5->LeftChild) = 0;
          v10 = v20;
          v5 = v16;
          goto LABEL_10;
        }
        v10 = v20;
        if ( LOBYTE(v5->LeftChild) )
          v7 = 1;
        LOBYTE(v5->LeftChild) = 1;
      }
      if ( v10 > v8 && Parent->LeftChild > (_RTL_SPLAY_LINKS *)v8 )
        return;
      v14 = Parent[2].Parent;
      if ( v6 < v14 )
      {
        v6 = Parent[2].Parent;
        if ( v10 <= v8 )
          v5->RightChild = v14;
      }
LABEL_10:
      a2 = Parent;
      Parent = Parent->Parent;
      v12 = Parent;
    }
    while ( Parent );
  }
  v5->RightChild = v6;
}
