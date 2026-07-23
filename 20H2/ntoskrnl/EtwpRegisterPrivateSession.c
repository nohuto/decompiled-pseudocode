/*
 * XREFs of EtwpRegisterPrivateSession @ 0x140941BD8
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x140211210 (PsGetCurrentThreadProcessId.c)
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByPointer @ 0x1402E15A0 (ObReferenceObjectByPointer.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     PidNodeCompare @ 0x140942150 (PidNodeCompare.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  struct _DMA_ADAPTER *v17; // r12
  _DMA_OPERATIONS *v18; // rax
  __int64 v19; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v22; // [rsp+68h] [rbp-29h] BYREF
  __int64 v23; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-19h]
  __int128 v25; // [rsp+80h] [rbp-11h] BYREF
  __int128 v26; // [rsp+90h] [rbp-1h]
  __int128 v27; // [rsp+A0h] [rbp+Fh]

  v4 = (_RTL_RB_TREE *)(a1 + 4080);
  v22 = 0LL;
  Object = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
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
          LODWORD(v25) = 48;
          *((_QWORD *)&v25 + 1) = 0LL;
          DWORD2(v26) = 64;
          *(_QWORD *)&v26 = 0LL;
          v27 = 0LL;
          inserted = ObCreateObjectEx(0, EtwpSessionDemuxObjectType, (int)&v25, 1u, v19, 32, 0, 0, &Object, 0LL);
          if ( !inserted )
          {
            v17 = (struct _DMA_ADAPTER *)Object;
            *((_WORD *)Object + 8) = a2;
            *(&v17[1].Size + 1) = ++*(_WORD *)(a1 + 4104);
            v17[1].DmaOperations = (_DMA_OPERATIONS *)v13;
            v18 = (_DMA_OPERATIONS *)i->Children[1];
            i->Children[1] = (_RTL_BALANCED_NODE *)v17;
            *(_QWORD *)&v18->Size = v17;
            v17->DmaOperations = v18;
            *(_QWORD *)&v17->Version = i;
            ObReferenceObjectByPointer(v17, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx(v17, 0LL, 0, 0, 0, (__int64)&v23, &v22);
            if ( !inserted )
            {
              *a3 = *(&v17[1].Size + 1);
              *a4 = v22;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  return inserted;
}
