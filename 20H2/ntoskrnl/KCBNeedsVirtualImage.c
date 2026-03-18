/*
 * XREFs of KCBNeedsVirtualImage @ 0x140319D18
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x1406C4A0C (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x1406C4C5C (CmpVEExecuteCreateLogic.c)
 *     CmKeyBodyRemapToVirtual @ 0x140871FF0 (CmKeyBodyRemapToVirtual.c)
 * Callees:
 *     KCBIsVirtualizable @ 0x140210DA0 (KCBIsVirtualizable.c)
 *     CmpIsSystemEntity @ 0x14060D910 (CmpIsSystemEntity.c)
 */

bool __fastcall KCBNeedsVirtualImage(__int64 a1)
{
  __int64 v1; // rcx

  if ( !KCBIsVirtualizable(a1) )
    return 0;
  LOBYTE(v1) = KeGetCurrentThread()->PreviousMode;
  return (unsigned __int8)CmpIsSystemEntity(v1) == 0;
}
