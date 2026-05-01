/*
 * XREFs of sub_180062244 @ 0x180062244
 * Callers:
 *     sub_18003F734 @ 0x18003F734 (sub_18003F734.c)
 * Callees:
 *     <none>
 */

RPC_STATUS sub_180062244()
{
  __int64 v0; // rdi
  RPC_IF_HANDLE *v1; // rbx
  RPC_BINDING_VECTOR *v2; // rdx
  RPC_STATUS result; // eax

  v0 = 0LL;
  v1 = (RPC_IF_HANDLE *)&off_1800B3290;
  do
  {
    v2 = (RPC_BINDING_VECTOR *)v1[2];
    if ( v2 )
    {
      RpcEpUnregister(*v1, v2, 0LL);
      RpcBindingVectorFree((RPC_BINDING_VECTOR **)&(&(&off_1800B3290)[2 * v0 + 2])[v0]);
      result = RpcServerUnregisterIf(*v1, 0LL, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    v1 += 3;
  }
  while ( (unsigned int)v0 < 0xD );
  return result;
}
