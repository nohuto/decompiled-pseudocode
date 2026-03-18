/*
 * XREFs of ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UEAAXXZ @ 0x1C011DDA0
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D10F0 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C011E0D8 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 */

void __fastcall CLegacyRotationMgr::AutoRotationUpdateRegistry(CLegacyRotationMgr *this)
{
  CLegacyRotationMgr *v1; // rcx

  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    this,
    gAutoRotationInfo,
    L"LastAutoRequest",
    1u,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
    v1,
    dword_1C0335634,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
