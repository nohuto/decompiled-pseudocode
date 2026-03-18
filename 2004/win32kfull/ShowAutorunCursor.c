/*
 * XREFs of ShowAutorunCursor @ 0x1C01D4AC0
 * Callers:
 *     ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01DE000 (-DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     SetRITTimer @ 0x1C010A3A0 (SetRITTimer.c)
 */

__int64 __fastcall ShowAutorunCursor(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  EnterCrit(0LL, 1LL);
  gtmridAutorunCursor = SetRITTimer(gtmridAutorunCursor, a1, (__int64)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit(v3, v2, v4);
}
