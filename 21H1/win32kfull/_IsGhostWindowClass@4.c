/*
 * XREFs of _IsGhostWindowClass@4 @ 0x72C42
 * Callers:
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1965E (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _IsWindowGhosted@4 @ 0x72B34 (_IsWindowGhosted@4.c)
 *     __GhostWindowFromHungWindow@4 @ 0x72BC6 (__GhostWindowFromHungWindow@4.c)
 *     _xxxRegisterGhostWindow@8 @ 0xC20E8 (_xxxRegisterGhostWindow@8.c)
 *     ?_ShouldGhostWindow@@YGHPAUtagWND@@@Z @ 0xC25FC (-_ShouldGhostWindow@@YGHPAUtagWND@@@Z.c)
 *     _NtUserSetWindowArrangement@16 @ 0x169EA1 (_NtUserSetWindowArrangement@16.c)
 *     ?_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z @ 0x16FC5F (-_ShouldFrostCrashedWindow@@YGHPAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z @ 0x16FD0E (-_ShouldFrostSiblingWindow@@YGHPAUtagWND@@@Z.c)
 *     _xxxRegisterSiblingFrostWindow@8 @ 0x1708E7 (_xxxRegisterSiblingFrostWindow@8.c)
 *     ?ArrangeActionCompatibleWithStyle@@YGHPAUtagWND@@W4_WARR_ACTIONS@@@Z @ 0x170BFD (-ArrangeActionCompatibleWithStyle@@YGHPAUtagWND@@W4_WARR_ACTIONS@@@Z.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z @ 0x19FE53 (-xxxValidateCapture@CMoveSizeRequest@@CG_NPAUtagWND@@KPAUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsGhostWindowClass(_DWORD *this)
{
  return **(_WORD **)(this[19] + 4) == *(_WORD *)(_gpsi + 500);
}
