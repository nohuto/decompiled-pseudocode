/*
 * XREFs of EtwpRegisterPrivateSession @ 0x14093F3A8
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     PsGetCurrentThreadProcessId @ 0x1402ED5E0 (PsGetCurrentThreadProcessId.c)
 *     RtlRbInsertNodeEx @ 0x140340480 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ObReferenceObjectByPointer @ 0x1403600E0 (ObReferenceObjectByPointer.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     PidNodeCompare @ 0x14093F920 (PidNodeCompare.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  unsigned __int64 *v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rbx
  bool v9; // di
  int v10; // eax
  __int64 *v11; // rax
  __int64 *PoolWithTag; // rax
  __int64 *v13; // rsi
  unsigned int inserted; // ebx
  __int64 *v15; // r14
  __int64 *i; // rdi
  _WORD *v17; // r12
  _QWORD *v18; // rax
  char *v19; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v22; // [rsp+68h] [rbp-29h] BYREF
  __int64 v23; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-19h]
  __int128 v25; // [rsp+80h] [rbp-11h] BYREF
  __int128 v26; // [rsp+90h] [rbp-1h]
  __int128 v27; // [rsp+A0h] [rbp+Fh]

  v4 = (unsigned __int64 *)(a1 + 4080);
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
  BugCheckParameter2 = (ULONG_PTR)(v4 + 2);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v4 + 2), 0LL);
  v8 = (__int64 *)*v4;
  v9 = 0;
  if ( *v4 )
  {
    while ( 1 )
    {
      v10 = PidNodeCompare(&CurrentThreadProcessId, v8);
      if ( v10 <= 0 )
      {
        if ( v10 >= 0 )
        {
          v13 = v8;
LABEL_15:
          v15 = v13 + 4;
          for ( i = (__int64 *)v13[4]; i != v15; i = (__int64 *)*i )
          {
            if ( *((_WORD *)i + 8) == a2 )
            {
              inserted = -1073741811;
              goto LABEL_24;
            }
            if ( *((_WORD *)i + 8) > a2 )
              break;
          }
          LODWORD(v25) = 48;
          *((_QWORD *)&v25 + 1) = 0LL;
          DWORD2(v26) = 64;
          *(_QWORD *)&v26 = 0LL;
          v27 = 0LL;
          inserted = ObCreateObjectEx(0, EtwpSessionDemuxObjectType, (__int64)&v25, 1, v19, 32, 0, 0, &Object, 0LL);
          if ( !inserted )
          {
            v17 = Object;
            *((_WORD *)Object + 8) = a2;
            v17[10] = ++*(_WORD *)(a1 + 4104);
            *((_QWORD *)v17 + 3) = v13;
            v18 = (_QWORD *)i[1];
            i[1] = (__int64)v17;
            *v18 = v17;
            *((_QWORD *)v17 + 1) = v18;
            *(_QWORD *)v17 = i;
            ObReferenceObjectByPointer(v17, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx((char *)v17, 0LL, 0, 0, 0, (__int64)&v23, (unsigned __int64 *)&v22);
            if ( !inserted )
            {
              *a3 = v17[10];
              *a4 = v22;
              goto LABEL_26;
            }
          }
LABEL_24:
          if ( (__int64 *)*v15 == v15 )
          {
            RtlRbRemoveNode(v4, (unsigned __int64)v13);
            ExFreePoolWithTag(v13, 0);
          }
          goto LABEL_26;
        }
        v11 = (__int64 *)*v8;
        if ( !*v8 )
          break;
      }
      else
      {
        v11 = (__int64 *)v8[1];
        if ( !v11 )
        {
          v9 = 1;
          break;
        }
      }
      v8 = v11;
    }
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x48777445u);
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_DWORD *)PoolWithTag + 6) = CurrentThreadProcessId;
    PoolWithTag[5] = (__int64)(PoolWithTag + 4);
    PoolWithTag[4] = (__int64)(PoolWithTag + 4);
    RtlRbInsertNodeEx(v4, (unsigned __int64)v8, v9, (unsigned __int64)PoolWithTag);
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
