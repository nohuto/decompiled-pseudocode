/*
 * XREFs of _ShowAutorunCursor@4 @ 0x1433B4
 * Callers:
 *     ?DeviceCDROMNotify@@YGJPAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PAU_CDROM_NOTIFY@@@Z @ 0x14AC55 (-DeviceCDROMNotify@@YGJPAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PAU_CDROM_NOTIFY@@@Z.c)
 * Callees:
 *     _SetRITTimer@16 @ 0xA4BF6 (_SetRITTimer@16.c)
 */

int __thiscall ShowAutorunCursor(void *this, int a2)
{
  EnterCrit(0, 1);
  gtmridAutorunCursor = SetRITTimer((char *)gtmridAutorunCursor, (unsigned int)this, (int)HideAutorunCursor, 1);
  return UserSessionSwitchLeaveCrit();
}
