/*
 * XREFs of ?QueryForInterface@FxDeviceBase@@QEAAJPEBU_GUID@@PEAU_INTERFACE@@GGPEAXPEAU_DEVICE_OBJECT@@@Z @ 0x1C004EF40
 * Callers:
 *     imp_WdfFdoQueryForInterface @ 0x1C0038BC0 (imp_WdfFdoQueryForInterface.c)
 *     ?QuerySecureDeviceToken@FxCompanionTarget@@UEAAJPEA_K@Z @ 0x1C0042FF0 (-QuerySecureDeviceToken@FxCompanionTarget@@UEAAJPEA_K@Z.c)
 *     ?QueryForPowerThread@FxPkgFdo@@EEAAJXZ @ 0x1C0083E50 (-QueryForPowerThread@FxPkgFdo@@EEAAJXZ.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x1C0083EC0 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x1C008B918 (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 * Callees:
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C0040ADC (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 */

__int64 __fastcall FxDeviceBase::QueryForInterface(
        FxDeviceBase *this,
        const _GUID *InterfaceType,
        _INTERFACE *Interface,
        unsigned __int16 Size,
        unsigned __int16 Version,
        _NAMED_PIPE_CREATE_PARAMETERS *InterfaceSpecificData,
        _DEVICE_OBJECT *TargetDevice)
{
  _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  unsigned int v11; // ebx

  AttachedDeviceReference = TargetDevice;
  if ( TargetDevice )
    ObfReferenceObject(TargetDevice);
  else
    AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_DeviceObject.m_DeviceObject);
  v11 = FxQueryInterface::_QueryForInterface(
          AttachedDeviceReference,
          InterfaceType,
          Interface,
          Size,
          Version,
          InterfaceSpecificData);
  ObfDereferenceObject(AttachedDeviceReference);
  return v11;
}
