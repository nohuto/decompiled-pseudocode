/*
 * XREFs of ShowAutorunCursor @ 0x1C01D3CB0
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01DD340 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C00C9BD0 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(int a1)
{
  __int64 v2; // rcx

  EnterCrit(0LL, 1LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (int)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v2);
}
