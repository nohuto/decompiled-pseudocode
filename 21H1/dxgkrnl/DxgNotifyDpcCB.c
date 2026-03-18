/*
 * XREFs of DxgNotifyDpcCB @ 0x1C0013BD0
 * Callers:
 *     <none>
 * Callees:
 *     DpSynchronizeExecution @ 0x1C0013D40 (DpSynchronizeExecution.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C00510C0 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C005149C (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C00522F0 (DpiMiracastStopMiracastSessionAsync.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C005D048 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DxgNotifyDpcCB(__int64 a1, struct DXGADAPTER *a2)
{
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r9d
  __int64 v16; // rax
  struct MIRACAST_CHUNK *v17; // rax
  struct _KEVENT *v18; // rcx
  _QWORD v19[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v20; // [rsp+40h] [rbp-9h] BYREF
  __int64 v21; // [rsp+50h] [rbp+7h]
  _QWORD v22[2]; // [rsp+58h] [rbp+Fh] BYREF
  int v23; // [rsp+68h] [rbp+1Fh]
  int v24; // [rsp+6Ch] [rbp+23h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+27h] BYREF
  char v26; // [rsp+B0h] [rbp+67h] BYREF

  if ( KeGetCurrentIrql() != 2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v10 + 24) = 81LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v3 = *(volatile signed __int32 **)(a1 + 64);
  if ( (_InterlockedCompareExchange(v3 + 979, 0, 0) & 1) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 64);
    if ( v4 && *(_DWORD *)(v4 + 16) == 1953656900 && *(_DWORD *)(v4 + 20) == 2 )
    {
      a2 = *(struct DXGADAPTER **)(v4 + 3896);
      if ( a2 )
      {
        v5 = *((_QWORD *)a2 + 335);
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v5 + 616) + 8LL) + 16LL))(a1);
        }
        else
        {
          v3 = *(volatile signed __int32 **)(*((_QWORD *)a2 + 334) + 384LL);
          if ( v3 )
            DXGDODPRESENT::NotifyDpc((DXGDODPRESENT *)v3, a2);
        }
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v3, a2);
      *(_QWORD *)(v9 + 24) = a1;
      WdLogEvent5_WdError(v9);
    }
  }
  v6 = *(_QWORD *)(a1 + 64);
  v21 = 0LL;
  v20 = 0LL;
  if ( v6 && *(_DWORD *)(v6 + 16) == 1953656900 && *(_DWORD *)(v6 + 20) == 2 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v7 = *(_QWORD *)(v6 + 3232);
    if ( v7 )
    {
      *(_QWORD *)&v20 = v6;
      *((_QWORD *)&v20 + 1) = *(_QWORD *)(v7 + 488);
      DpSynchronizeExecution(
        a1,
        (unsigned int)MiracastProcessPendingDPCChunks,
        (unsigned int)&v20,
        *(_DWORD *)(v6 + 3908),
        (__int64)&v26);
      if ( BYTE1(v21) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v7);
      }
      else
      {
        if ( (_BYTE)v21 )
          *(_BYTE *)(v7 + 588) = 1;
        if ( HIDWORD(v21) < 0x14 && *(_DWORD *)(v6 + 3252) + 5 < 40 )
        {
          v24 = *(_DWORD *)(v6 + 3216);
          v23 = 0;
          v22[1] = v22;
          v22[0] = v22;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v22, 5u) )
          {
            v15 = *(_DWORD *)(v6 + 3908);
            v19[0] = v22;
            v19[1] = *(_QWORD *)(v6 + 3256);
            DpSynchronizeExecution(a1, (unsigned int)DpiMiracastMoveChunkList, (unsigned int)v19, v15, (__int64)&v26);
            *(_DWORD *)(v6 + 3252) += 5;
          }
          else
          {
            v16 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
            *(_QWORD *)(v16 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v16);
          }
          while ( 1 )
          {
            v17 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v22);
            if ( !v17 )
              break;
            ExFreePoolWithTag(v17, 0);
          }
        }
        if ( BYTE2(v21) || (_BYTE)v21 )
        {
          v18 = *(struct _KEVENT **)(v7 + 496);
          if ( v18 )
            KeSetEvent(v18, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v3, a2);
    *(_QWORD *)(v8 + 24) = v6;
    *(_QWORD *)(v8 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v8);
  }
}
