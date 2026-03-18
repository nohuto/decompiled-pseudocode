/*
 * XREFs of ?IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C003BA70
 * Callers:
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C0078F50 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxDeviceDescriptionEntry::IsDeviceReportedMissing(FxDeviceDescriptionEntry *this)
{
  KIRQL v2; // al
  bool v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_DeviceList->m_ListLock);
  v3 = this->m_DescriptionState == DescriptionReportedMissing;
  KeReleaseSpinLock(&this->m_DeviceList->m_ListLock, v2);
  return v3;
}
