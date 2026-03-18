/*
 * XREFs of ?IsInternalVideoOutput@@YG_NW4DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14094C
 * Callers:
 *     ?QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AAEJPAK0@Z @ 0x140AC7 (-QueryDockedOrientationRegistrySetting@CLegacyRotationMgr@@AAEJPAK0@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004 (-xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z.c)
 * Callees:
 *     <none>
 */

bool __thiscall IsInternalVideoOutput(void *this)
{
  return this == (void *)0x80000000 || this == (void *)11 || this == (void *)13;
}
