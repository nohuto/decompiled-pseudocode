/*
 * XREFs of sub_18003F884 @ 0x18003F884
 * Callers:
 *     sub_18003F734 @ 0x18003F734 (sub_18003F734.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003F884(RPC_IF_HANDLE IfSpec, __int64 a2, void *a3, RPC_BINDING_VECTOR **a4)
{
  RPC_STATUS v7; // eax
  unsigned int v8; // edi

  *a4 = 0LL;
  if ( !(unsigned int)RpcServerRegisterIf3(IfSpec, 0LL, 0LL, 41LL, 1234, 0, 0LL, a2) )
  {
    if ( a3 )
      v7 = RpcServerInqBindingsEx(a3, a4);
    else
      v7 = RpcServerInqBindings(a4);
    if ( !v7 && !RpcEpRegisterW(IfSpec, *a4, 0LL, 0LL) )
      return 0;
    RpcServerUnregisterIf(IfSpec, 0LL, 0);
  }
  v8 = -1073741823;
  if ( *a4 )
  {
    RpcBindingVectorFree(a4);
    *a4 = 0LL;
  }
  return v8;
}
