/*
 * XREFs of ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008368
 * Callers:
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     ESM_RunStateMachine @ 0x1C0007FA0 (ESM_RunStateMachine.c)
 *     ESM_SmWorker @ 0x1C004E8A0 (ESM_SmWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_qLLL @ 0x1C0008910 (WPP_RECORDER_SF_qLLL.c)
 *     ESM_ShouldQueueWorkItem @ 0x1C00190DC (ESM_ShouldQueueWorkItem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(unsigned int *Context)
{
  unsigned int v1; // r15d
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdi
  int v6; // eax
  _DWORD *v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // rdx
  _DWORD *v11; // rax
  int v12; // edx
  int v13; // r8d
  unsigned int v14; // r9d
  KIRQL v15; // r13
  __int64 v16; // r12
  int *v17; // rcx
  char v18; // r10
  int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // ebx
  char v25; // cl
  __int64 v26; // rax
  unsigned int v27; // edi
  int v29; // [rsp+20h] [rbp-68h]
  int v30; // [rsp+90h] [rbp+8h]

  v1 = Context[244];
  v3 = *((_QWORD *)Context + 121);
  v4 = Context[220];
  v5 = *(_QWORD *)(v3 + 8LL * (Context[v4 + 213] - v1));
  v6 = (*(__int64 (**)(void))(v5 + 8))();
  v7 = *(_DWORD **)(v5 + 24);
  v30 = v6;
  if ( v7 )
  {
    while ( 1 )
    {
      LODWORD(v8) = 0;
      if ( v7[1] == 1002 )
        goto LABEL_6;
      v9 = Context[238];
      v10 = 0LL;
      v11 = v7;
      while ( (v9 & *v11) != v9 )
      {
        v8 = (unsigned int)(v8 + 1);
        v10 = (unsigned int)v8;
        v11 = &v7[2 * v8];
        if ( v11[1] == 1002 )
          goto LABEL_6;
      }
      v21 = v7[2 * v10 + 1];
      if ( v21 == 1002 )
      {
LABEL_6:
        v30 = 1001;
        goto LABEL_7;
      }
      v4 = (unsigned int)(v4 + 1);
      Context[v4 + 213] = v21;
      v22 = Context[244] == 2000;
      Context[220] = v4;
      if ( v22 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v10,
          v8,
          v9,
          v29,
          *((_QWORD *)Context + 120),
          Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
          232,
          v21);
      Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v21;
      Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v4;
      Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
      *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
      v5 = *(_QWORD *)(v3 + 8LL * (v21 - v1));
      LOBYTE(v10) = *(_BYTE *)(v5 + 16) & 0x10;
      if ( (unsigned __int8)ESM_ShouldQueueWorkItem(Context, v10) )
        break;
      v23 = (*(__int64 (__fastcall **)(unsigned int *))(v5 + 8))(Context);
      v7 = *(_DWORD **)(v5 + 24);
      v30 = v23;
      if ( !v7 )
        goto LABEL_7;
    }
    IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
    return 1003;
  }
  else
  {
LABEL_7:
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
    while ( 1 )
    {
      LODWORD(v16) = 0;
      if ( *(_DWORD *)(v5 + 32) != 1000 )
      {
        v17 = (int *)(v5 + 32);
        do
        {
          if ( v17[1] != 1000 )
            break;
          LOBYTE(v12) = *((_BYTE *)Context + 948);
          v18 = 0;
          LOBYTE(v14) = *((_BYTE *)Context + 949);
          LOBYTE(v13) = v12;
          v19 = *v17;
          if ( (_BYTE)v12 != (_BYTE)v14 )
          {
            do
            {
              v14 = Context[(unsigned __int8)v13 + 221];
              if ( v14 == v19 )
              {
                v18 = 1;
              }
              else
              {
                v20 = (unsigned __int8)v12;
                LOBYTE(v12) = (v12 + 1) & 0xF;
                Context[v20 + 221] = v14;
              }
              LOBYTE(v14) = *((_BYTE *)Context + 949);
              LOBYTE(v13) = (v13 + 1) & 0xF;
            }
            while ( (_BYTE)v13 != (_BYTE)v14 );
          }
          v25 = v12;
          if ( (_BYTE)v12 != (_BYTE)v14 )
          {
            do
            {
              v26 = v25 & 0xF;
              v25 = (v25 + 1) & 0xF;
              Context[v26 + 221] = 1000;
            }
            while ( v25 != *((_BYTE *)Context + 949) );
          }
          *((_BYTE *)Context + 949) = v12;
          if ( v18 )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v15);
            v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 105);
          }
          v16 = (unsigned int)(v16 + 1);
          v17 = (int *)(v5 + 32 + 8 * v16);
        }
        while ( *v17 != 1000 );
      }
      if ( (*(_DWORD *)(v5 + 16) & 8) == 0 )
        break;
      v4 = (unsigned int)(v4 - 1);
      v27 = Context[v4 + 213];
      if ( Context[244] == 2000 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qLLL(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          v13,
          v14,
          v29,
          *((_QWORD *)Context + 120),
          Context[3 * ((*((_BYTE *)Context + 832) - 1) & 0x3F) + 1],
          232,
          Context[v4 + 213]);
      Context[3 * *((unsigned __int8 *)Context + 832) + 1] = v27;
      Context[3 * *((unsigned __int8 *)Context + 832) + 2] = v4;
      Context[3 * *((unsigned __int8 *)Context + 832)] = 1000;
      *((_BYTE *)Context + 832) = (*((_BYTE *)Context + 832) + 1) & 0x3F;
      v5 = *(_QWORD *)(v3 + 8LL * (Context[v4 + 213] - v1));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)Context + 105, v15);
    v24 = v30;
    Context[220] = v4;
  }
  return v24;
}
