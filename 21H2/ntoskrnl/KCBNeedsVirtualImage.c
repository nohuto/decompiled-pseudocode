/*
 * XREFs of KCBNeedsVirtualImage @ 0x14023A1EC
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1405FFF90 (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F980 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x14026A510 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x14064B910 (CmpIsSystemEntity.c)
 */

bool KCBNeedsVirtualImage()
{
  __int64 v0; // rcx

  if ( !(unsigned __int8)KCBIsVirtualizable() )
    return 0;
  LOBYTE(v0) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v0) == 0;
}
