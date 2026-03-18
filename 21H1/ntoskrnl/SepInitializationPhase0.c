/*
 * XREFs of SepInitializationPhase0 @ 0x140A60D5C
 * Callers:
 *     SeInitSystem @ 0x140A60D28 (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x1406F7064 (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x140A6134C (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x140A61E38 (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x140A61EE8 (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x140A61FA8 (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x140A6AA54 (SepRmDbInitialization.c)
 */

bool SepInitializationPhase0()
{
  _KPROCESS *Process; // rbx
  ULONG_PTR SystemToken; // rax

  if ( !(unsigned __int8)SepVariableInitialization()
    || !(unsigned __int8)SepRmDbInitialization()
    || !(unsigned __int8)SepTokenInitialization()
    || !(unsigned __int8)SepInitializeWorkList() )
  {
    return 0;
  }
  *($8F66661DB6C9C59E7BD0F880B8A64BC5 *)((char *)&KeGetCurrentThread()[1].116 + 4) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)&KeGetCurrentThread()[1].SwapListEntry + 2, 0xFFFFFFF7);
  ObInitializeFastReference(&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5], 0LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemToken = SeMakeSystemToken();
  ObInitializeFastReference(&Process[1].Affinity.Bitmap[5], SystemToken);
  SepMandatoryObjectTypePolicyLock = 0LL;
  SepDefaultMandatorySid = SeMediumMandatorySid;
  return KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] != 0;
}
