/*
 * XREFs of xxxPlayEventSound @ 0x1C0114880
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxSnapWindow @ 0x1C015294C (xxxSnapWindow.c)
 *     xxxMNCancel @ 0x1C0237E64 (xxxMNCancel.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023C570 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1C00FD010 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1, __int64 a2, __int64 a3)
{
  RPC_BINDING_HANDLE *v3; // rbx

  if ( (gdwPUDFlags & 0x1000000) != 0 && (*(_DWORD *)(gptiCurrent + 480LL) & 4) == 0 )
  {
    v3 = CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit(a1, gptiCurrent, a3);
    CUserPlaySound::PlaySync(v3);
    EnterCrit(0LL, 1LL);
  }
  return 1LL;
}
