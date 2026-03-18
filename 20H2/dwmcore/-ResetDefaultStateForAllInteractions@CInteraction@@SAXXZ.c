/*
 * XREFs of ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801C64A8
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180223038 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ?ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x1801C6400 (-ResetDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 */

void __fastcall CInteraction::ResetDefaultStateForAllInteractions(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdi

  v4 = 0;
  if ( dword_180348448 > 0 )
  {
    v5 = 0LL;
    do
    {
      CInteraction::ResetDefaultInteractionForCurrentMC(
        *(CInteraction **)((char *)CInteraction::s_DefaultStateLockedInteractions + v5),
        0,
        a3,
        a4);
      ++v4;
      v5 += 8LL;
    }
    while ( v4 < dword_180348448 );
  }
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll();
}
