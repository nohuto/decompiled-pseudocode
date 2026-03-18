/*
 * XREFs of ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C00B025C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00B028C (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 */

MULTIDEVLOCKOBJ *__fastcall MULTIDEVLOCKOBJ::`scalar deleting destructor'(MULTIDEVLOCKOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  MULTIDEVLOCKOBJ::vUnlock(this);
  if ( (*(_DWORD *)this & 2) != 0 )
    Win32FreePool(*((_QWORD *)this + 1), v2, v3);
  Win32FreePool((__int64)this, v2, v3);
  return this;
}
