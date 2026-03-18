/*
 * XREFs of ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x1C0051AC0
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C004FE30 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0050270 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C005167C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0059490 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 */

void __fastcall FxDevice::InstallPackage(FxDevice *this, FxPackage *Package)
{
  FxObject::AddRef(Package, 0LL, 0, 0LL);
  FxObject::AssignParentObject(Package, this);
}
