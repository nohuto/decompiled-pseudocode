/*
 * XREFs of RmConnectToResourceManager @ 0x180009760
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcBindToServer @ 0x180005070 (CempRpcBindToServer.c)
 *     RmpClientConnectToResourceManager @ 0x1800095B8 (RmpClientConnectToResourceManager.c)
 */

__int64 __fastcall RmConnectToResourceManager(_QWORD *a1)
{
  unsigned int v2; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)CempRpcBindToServer(&unk_180015DD0, &Binding) < 0 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v2 = RmpClientConnectToResourceManager((__int64)Binding, a1);
    RpcBindingFree(&Binding);
  }
  return v2;
}
