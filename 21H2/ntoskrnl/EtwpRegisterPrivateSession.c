/*
 * XREFs of EtwpRegisterPrivateSession @ 0x14093F578
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     RtlRbInsertNodeEx @ 0x14034B1D0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x14034B830 (RtlRbRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     PidNodeCompare @ 0x14093FAF0 (PidNodeCompare.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  _RTL_RB_TREE *v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *Root; // rbx
  BOOLEAN v9; // di
  int v10; // eax
  _RTL_BALANCED_NODE *v11; // rax
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *v13; // rsi
  unsigned int inserted; // ebx
  _RTL_BALANCED_NODE **v15; // r14
  _RTL_BALANCED_NODE *i; // rdi
  _RTL_BALANCED_NODE *v17; // r12
  _RTL_BALANCED_NODE *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  char *v22; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v25; // [rsp+68h] [rbp-29h] BYREF
  __int64 v26; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-19h]
  __int128 v28; // [rsp+80h] [rbp-11h] BYREF
  __int128 v29; // [rsp+90h] [rbp-1h]
  __int128 v30; // [rsp+A0h] [rbp+Fh]

  v4 = (_RTL_RB_TREE *)(a1 + 4080);
  v25 = 0LL;
  Object = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)&v4[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[1], 0LL);
  Root = v4->Root;
  v9 = 0;
  if ( v4->Root )
  {
    while ( 1 )
    {
      v10 = PidNodeCompare(&CurrentThreadProcessId, Root);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v13 = Root;
LABEL_15:
          v15 = &v13[1].Children[1];
          for ( i = v13[1].Children[1]; i != (_RTL_BALANCED_NODE *)v15; i = i->Children[0] )
          {
            if ( *(_WORD *)&i->0 == a2 )
            {
              inserted = -1073741811;
              goto LABEL_24;
            }
            if ( *(_WORD *)&i->0 > a2 )
              break;
          }
          LODWORD(v28) = 48;
          *((_QWORD *)&v28 + 1) = 0LL;
          DWORD2(v29) = 64;
          *(_QWORD *)&v29 = 0LL;
          v30 = 0LL;
          inserted = ObCreateObjectEx(0, EtwpSessionDemuxObjectType, (__int64)&v28, 1, v22, 32, 0, 0, &Object, 0LL);
          if ( !inserted )
          {
            v17 = (_RTL_BALANCED_NODE *)Object;
            *((_WORD *)Object + 8) = a2;
            WORD2(v17->ParentValue) = ++*(_WORD *)(a1 + 4104);
            v17[1].Children[0] = v13;
            v18 = i->Children[1];
            i->Children[1] = v17;
            v18->Children[0] = v17;
            v17->Children[1] = v18;
            v17->Children[0] = i;
            ObReferenceObjectByPointer(v17, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx((char *)v17, 0LL, 0, 0, 0, (__int64)&v26, (unsigned __int64 *)&v25);
            if ( !inserted )
            {
              *a3 = WORD2(v17->ParentValue);
              *a4 = v25;
              goto LABEL_26;
            }
          }
LABEL_24:
          if ( *v15 == (_RTL_BALANCED_NODE *)v15 )
          {
            RtlRbRemoveNode(v4, v13);
            ExFreePoolWithTag(v13, 0);
          }
          goto LABEL_26;
        }
        v11 = Root->Children[0];
        if ( !Root->Children[0] )
          break;
      }
      else
      {
        v11 = Root->Children[1];
        if ( !v11 )
        {
          v9 = 1;
          break;
        }
      }
      Root = v11;
    }
  }
  PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x48777445u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    LODWORD(PoolWithTag[1].Children[0]) = CurrentThreadProcessId;
    PoolWithTag[1].ParentValue = (unsigned __int64)&PoolWithTag[1].Children[1];
    PoolWithTag[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)PoolWithTag + 32);
    RtlRbInsertNodeEx(v4, Root, v9, PoolWithTag);
    goto LABEL_15;
  }
  inserted = -1073741801;
LABEL_26:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
  if ( Object )
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  return inserted;
}
