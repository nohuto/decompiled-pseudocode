/*
 * XREFs of HampConnectionAllocateState @ 0x1800051B0
 * Callers:
 *     HampConnectionCreate @ 0x1800039B0 (HampConnectionCreate.c)
 *     HamConnectForExtendedExecution @ 0x180004F90 (HamConnectForExtendedExecution.c)
 * Callees:
 *     __security_check_cookie @ 0x18000A280 (__security_check_cookie.c)
 */

__int64 __fastcall HampConnectionAllocateState(LONG_PTR a1, void *a2)
{
  char v4; // r15
  RPC_STATUS v5; // eax
  signed int Pointer; // ebx
  bool v7; // cc
  int v8; // eax
  CLIENT_CALL_RETURN v9; // rax
  CLIENT_CALL_RETURN v10; // rax
  CLIENT_CALL_RETURN *v11; // r14
  CLIENT_CALL_RETURN **v12; // r12
  CLIENT_CALL_RETURN *Heap; // rax
  CLIENT_CALL_RETURN *v14; // rbx
  int v15; // esi
  int v17; // [rsp+30h] [rbp-148h]
  __int64 v18; // [rsp+40h] [rbp-138h]
  RPC_BINDING_HANDLE Binding; // [rsp+48h] [rbp-130h] BYREF
  RPC_BINDING_HANDLE v20; // [rsp+50h] [rbp-128h] BYREF
  LONG_PTR v21; // [rsp+58h] [rbp-120h] BYREF
  CLIENT_CALL_RETURN v22; // [rsp+60h] [rbp-118h] BYREF
  CLIENT_CALL_RETURN v23; // [rsp+68h] [rbp-110h] BYREF
  CLIENT_CALL_RETURN v24; // [rsp+70h] [rbp-108h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+78h] [rbp-100h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-D8h] BYREF
  int v27; // [rsp+A8h] [rbp-D0h]
  int v28; // [rsp+ACh] [rbp-CCh]
  __int128 v29; // [rsp+B0h] [rbp-C8h]
  __int128 v30; // [rsp+C0h] [rbp-B8h]
  __int64 v31; // [rsp+D0h] [rbp-A8h]
  CLIENT_CALL_RETURN v32; // [rsp+D8h] [rbp-A0h]
  CLIENT_CALL_RETURN v33; // [rsp+E0h] [rbp-98h]
  RPC_BINDING_HANDLE_OPTIONS_V1 v34; // [rsp+E8h] [rbp-90h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W v35; // [rsp+F8h] [rbp-80h] BYREF

  v21 = a1;
  v4 = 0;
  Binding = 0LL;
  memset(&v35, 0, sizeof(v35));
  *(_QWORD *)&v34.ComTimeout = 5LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  v35.Version = 1;
  v35.ProtocolSequence = 3;
  *(_QWORD *)&v34.Version = 0x100000001LL;
  v26 = 5LL;
  v27 = 1;
  v28 = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v26;
  v5 = RpcBindingCreateW(&v35, &Security, &v34, &Binding);
  Pointer = v5;
  v7 = v5 <= 0;
  if ( v5 || (v5 = RpcBindingBind(0LL, Binding, a2), Pointer = v5, v7 = v5 <= 0, v5) )
  {
    if ( !v7 )
      Pointer = (unsigned __int16)v5 | 0xC0070000;
  }
  else
  {
    v20 = Binding;
    Binding = 0LL;
    Pointer = 0;
  }
  if ( Binding )
    RpcBindingFree(&Binding);
  if ( Pointer >= 0 )
  {
    v4 = 1;
    BYTE4(v18) = 1;
    v8 = *(_DWORD *)(a1 + 112);
    if ( v8 == 2 )
    {
      v9.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015880, 0, 0LL).Pointer;
      *(CLIENT_CALL_RETURN *)&v34.Version = v9;
LABEL_9:
      Pointer = (signed int)v9.Pointer;
      LODWORD(v18) = v9.Pointer;
    }
    else
    {
      switch ( v8 )
      {
        case 0:
          v17 = a1 + 8;
          v10.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158E0, 0, 0LL).Pointer;
          Pointer = (signed int)v10.Pointer;
          v22.Pointer = v10.Pointer;
          LODWORD(v18) = v10.Pointer;
          break;
        case 1:
          Binding = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015DA0, 0, 0LL).Pointer;
          Pointer = (int)Binding;
          LODWORD(v18) = (_DWORD)Binding;
          break;
        case 3:
          v9.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180016020, 0, 0LL).Pointer;
          v24.Pointer = v9.Pointer;
          goto LABEL_9;
        case 4:
          v32.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015D70, 0, 0LL).Pointer;
          Pointer = (signed int)v32.Pointer;
          LODWORD(v18) = v32.Pointer;
          break;
        case 5:
          v33.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015D40, 0, 0LL).Pointer;
          Pointer = (signed int)v33.Pointer;
          LODWORD(v18) = v33.Pointer;
          break;
        case 6:
          v17 = a1 + 8;
          v23.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180015CB0, 0, 0LL).Pointer;
          Pointer = (signed int)v23.Pointer;
          LODWORD(v18) = v23.Pointer;
          break;
        default:
          Pointer = -1073741127;
          LODWORD(v18) = -1073741127;
          break;
      }
    }
    if ( Pointer >= 0 )
    {
      if ( *(_DWORD *)(a1 + 112) >= 4u )
        goto LABEL_34;
      v11 = (CLIENT_CALL_RETURN *)(a1 + 8);
      v12 = (CLIENT_CALL_RETURN **)(a1 + 16);
      v21 = 0LL;
      v22.Simple = 0LL;
      Heap = (CLIENT_CALL_RETURN *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
      v14 = Heap;
      if ( Heap )
      {
        *(_OWORD *)&Heap->Pointer = 0LL;
        *(_OWORD *)&Heap[2].Pointer = 0LL;
        *(_OWORD *)&Heap[4].Pointer = 0LL;
        *(_OWORD *)&Heap[6].Pointer = 0LL;
        Heap[8].Simple = 0LL;
        Heap[6].Pointer = v11->Pointer;
        RtlInitializeSRWLock(&Heap[4]);
        v14[3].Simple = (LONG_PTR)&v14[2];
        v14[2].Simple = (LONG_PTR)&v14[2];
        v14[5].Simple = (LONG_PTR)HampIpcChannelWnfCallback;
        v14[1].Simple = (LONG_PTR)v12;
        LODWORD(v14[8].Pointer) &= ~1u;
        v15 = TpAllocWork(&v22, RmpClientWnfMessageQueueWorker, v14, 0LL);
        if ( v15 >= 0 )
        {
          LODWORD(v23.Pointer) = 0;
          v15 = NtQueryWnfStateData(v11, 0LL, 0LL, &v24, 0LL, &v23, v17);
          if ( (int)(v15 + 0x80000000) < 0 || v15 == -1073741789 )
          {
            v15 = RtlSubscribeWnfStateChangeNotification(
                    &v21,
                    v11->Simple,
                    LODWORD(v24.Pointer),
                    RmpClientWnfSubscriptionWorker,
                    v14,
                    0LL,
                    0,
                    0,
                    v18);
            if ( v15 >= 0 )
            {
              v14->Simple = v21;
              v21 = 0LL;
              v14[7].Pointer = v22.Pointer;
              v22.Simple = 0LL;
              *v12 = v14;
              v14 = 0LL;
              v15 = 0;
            }
          }
        }
      }
      else
      {
        v15 = -1073741801;
      }
      if ( v14 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      if ( v22.Simple )
        ((void (__fastcall *)(_QWORD))TpReleaseWork)((CLIENT_CALL_RETURN)v22.Simple);
      if ( v21 )
        RtlUnsubscribeWnfNotificationWaitForCompletion(v21);
      if ( v15 >= 0 )
        v15 = 0;
      Pointer = v15;
      if ( v15 >= 0 )
LABEL_34:
        Pointer = 0;
    }
  }
  if ( v4 )
    RpcBindingFree(&v20);
  return (unsigned int)Pointer;
}
