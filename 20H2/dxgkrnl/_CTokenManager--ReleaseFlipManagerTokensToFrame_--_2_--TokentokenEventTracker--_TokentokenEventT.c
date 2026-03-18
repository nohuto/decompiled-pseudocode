/*
 * XREFs of _CTokenManager::ReleaseFlipManagerTokensToFrame_::_2_::TokentokenEventTracker::_TokentokenEventTracker @ 0x1C00629A4
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C0013110 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ReleaseFlipManagerTokensToFrame_::_2_::TokentokenEventTracker::_TokentokenEventTracker(
        __int64 a1,
        __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal(a1, a2);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38048) + 96LL))(
           *(_QWORD *)a1,
           *(unsigned int *)(a1 + 8));
}
