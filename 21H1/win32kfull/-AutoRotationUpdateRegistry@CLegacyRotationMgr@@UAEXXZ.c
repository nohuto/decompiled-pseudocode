/*
 * XREFs of ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UAEXXZ @ 0xD1612
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z @ 0x140E60 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UAEJK@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z @ 0xAC6E8 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AAEJKPBGK0@Z.c)
 */

void __thiscall CLegacyRotationMgr::AutoRotationUpdateRegistry(CLegacyRotationMgr *this)
{
  CLegacyRotationMgr *v1; // ecx

  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    this,
    gAutoRotationInfo[0],
    L"LastAutoRequest",
    1u,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v1,
    Data[0],
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
