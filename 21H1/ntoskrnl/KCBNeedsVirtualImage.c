/*
 * XREFs of KCBNeedsVirtualImage @ 0x14030B554
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1406D0150 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406D038C (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086B220 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x1402064A0 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 */

bool __fastcall KCBNeedsVirtualImage(__int64 a1)
{
  __int64 v1; // rcx

  if ( !KCBIsVirtualizable(a1) )
    return 0;
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v1) == 0;
}
