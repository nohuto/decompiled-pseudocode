/*
 * XREFs of KCBNeedsVirtualImage @ 0x1402787B8
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x14064FA70 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x14064FCAC (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086C570 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x140298FB0 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x140693D90 (CmpIsSystemEntity.c)
 */

bool KCBNeedsVirtualImage()
{
  __int64 v0; // rcx

  if ( !(unsigned __int8)KCBIsVirtualizable() )
    return 0;
  LOBYTE(v0) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v0) == 0;
}
