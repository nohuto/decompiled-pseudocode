/*
 * XREFs of PubSebRegisterRpc @ 0x180024930
 * Callers:
 *     ?EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ @ 0x1800248A4 (-EnsureWNFHandles@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x180024A3C (-Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z.c)
 *     ?PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z @ 0x180024B64 (-PubSebiGetRpcBindingHandle@@YAJPEAPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1802170F8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall PubSebRegisterRpc(__int64 a1, struct _SEB_RPC_PUBLISH_DATA **a2)
{
  int RpcBindingHandle; // ebx
  struct _SEB_RPC_PUBLISH_DATA *Heap; // rax
  struct _SEB_RPC_PUBLISH_DATA *v6; // rsi
  CLIENT_CALL_RETURN v7; // rdx
  CLIENT_CALL_RETURN v8; // rcx
  void *v9; // r8
  void *v11; // [rsp+60h] [rbp+18h] BYREF
  void *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  RpcBindingHandle = PubSebiGetRpcBindingHandle(&v12);
  if ( RpcBindingHandle )
  {
LABEL_10:
    if ( RpcBindingHandle > 0 )
      return (unsigned __int16)RpcBindingHandle | 0x80070000;
    return (unsigned int)RpcBindingHandle;
  }
  Heap = (struct _SEB_RPC_PUBLISH_DATA *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x10uLL);
  v6 = Heap;
  if ( !Heap )
  {
    LOWORD(RpcBindingHandle) = 8;
    return (unsigned __int16)RpcBindingHandle | 0x80070000;
  }
  *(_OWORD *)Heap = 0LL;
  RtlInitializeSRWLock(Heap);
  RpcBindingHandle = (unsigned int)NdrClientCall3(
                                     (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                     0,
                                     0LL,
                                     v12,
                                     a1,
                                     &v11).Pointer;
  if ( RpcBindingHandle )
    goto LABEL_9;
  v9 = v11;
  if ( !v11 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))MicrosoftTelemetryAssertTriggeredNoArgs)(
      (CLIENT_CALL_RETURN)v8.Simple,
      (CLIENT_CALL_RETURN)v7.Simple);
    v9 = v11;
  }
  RpcBindingHandle = ContextTable::Insert((ContextTable *)v8.Pointer, v6, v9);
  if ( RpcBindingHandle )
    RpcBindingHandle = (unsigned int)NdrClientCall3(
                                       (MIDL_STUBLESS_PROXY_INFO *)&CSystemEventBrokerPublisher_ProxyInfo,
                                       2u,
                                       0LL,
                                       v12,
                                       &v11).Pointer;
  else
    *a2 = v6;
  if ( RpcBindingHandle )
  {
LABEL_9:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    goto LABEL_10;
  }
  return (unsigned int)RpcBindingHandle;
}
