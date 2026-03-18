/*
 * XREFs of ?RemoveAll@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAXXZ @ 0x1800E2660
 * Callers:
 *     _dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__ @ 0x1800F3990 (_dynamic_atexit_destructor_for__CInteraction--s_DefaultStateLockedInteractions__.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x1801C64A8 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll()
{
  if ( CInteraction::s_DefaultStateLockedInteractions )
  {
    operator delete(CInteraction::s_DefaultStateLockedInteractions);
    CInteraction::s_DefaultStateLockedInteractions = 0LL;
  }
  dword_180348448 = 0;
  dword_18034844C = 0;
}
