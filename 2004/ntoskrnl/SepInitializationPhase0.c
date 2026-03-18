/*
 * XREFs of SepInitializationPhase0 @ 0x140A5E210
 * Callers:
 *     SeInitSystem @ 0x140A5E1DC (SeInitSystem.c)
 * Callees:
 *     ObInitializeFastReference @ 0x140613C00 (ObInitializeFastReference.c)
 *     SeMakeSystemToken @ 0x140A5E800 (SeMakeSystemToken.c)
 *     SepInitializeWorkList @ 0x140A5F2EC (SepInitializeWorkList.c)
 *     SepTokenInitialization @ 0x140A5F39C (SepTokenInitialization.c)
 *     SepVariableInitialization @ 0x140A5F45C (SepVariableInitialization.c)
 *     SepRmDbInitialization @ 0x140A6ACB4 (SepRmDbInitialization.c)
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
