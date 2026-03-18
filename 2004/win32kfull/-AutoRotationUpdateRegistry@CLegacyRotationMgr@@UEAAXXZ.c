/*
 * XREFs of ?AutoRotationUpdateRegistry@CLegacyRotationMgr@@UEAAXXZ @ 0x1C0055EF0
 * Callers:
 *     ?xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z @ 0x1C01D1F00 (-xxxAutoRotateScreen@CLegacyRotationMgr@@UEAAJK@Z.c)
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C0056228 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
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
    dword_1C0336614,
    L"LastOrientation",
    0,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
}
