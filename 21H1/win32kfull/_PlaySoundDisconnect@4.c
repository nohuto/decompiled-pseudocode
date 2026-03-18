/*
 * XREFs of _PlaySoundDisconnect@4 @ 0x27A60E
 * Callers:
 *     ?Connect@CUserPlaySound@@AAEJPAX@Z @ 0xEA274 (-Connect@CUserPlaySound@@AAEJPAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AAEJXZ @ 0xEC2DE (-Disconnect@CUserPlaySound@@AAEJXZ.c)
 *     _CleanupPlaySound@0 @ 0xF0E6E (_CleanupPlaySound@0.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __thiscall PlaySoundDisconnect(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(*Binding);
  if ( !result )
  {
    result = RpcBindingFree(Binding);
    if ( !result )
      *Binding = 0;
  }
  return result;
}
