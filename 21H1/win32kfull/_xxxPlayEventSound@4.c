/*
 * XREFs of _xxxPlayEventSound@4 @ 0xA95E6
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _xxxSnapWindow@8 @ 0x1A20A2 (_xxxSnapWindow@8.c)
 *     _xxxTrackPopupMenuEx@24 @ 0x1A8190 (_xxxTrackPopupMenuEx@24.c)
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AAEJK@Z @ 0xA1BB8 (-PlaySync@CUserPlaySound@@AAEJK@Z.c)
 */

int __stdcall xxxPlayEventSound(unsigned int a1)
{
  CUserPlaySound *v1; // esi

  if ( (_gdwPUDFlags & 0x1000000) != 0 && (*(_BYTE *)(_gptiCurrent + 264) & 4) == 0 )
  {
    v1 = (CUserPlaySound *)CUserPlaySound::s_pUserPlaySound;
    UserSessionSwitchLeaveCrit();
    CUserPlaySound::PlaySync(v1, a1);
    EnterCrit(0, 1);
  }
  return 1;
}
