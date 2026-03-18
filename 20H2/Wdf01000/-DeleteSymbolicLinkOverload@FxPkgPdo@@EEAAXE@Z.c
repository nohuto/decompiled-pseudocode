/*
 * XREFs of ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C0078670
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C003B1A0 (-IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C004FCD0 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgPdo::DeleteSymbolicLinkOverload(FxPkgPdo *this, unsigned __int8 GracefulRemove)
{
  if ( !GracefulRemove && FxDeviceDescriptionEntry::IsDeviceReportedMissing(this->m_Description) )
    FxDevice::DeleteSymbolicLink(this->m_Device);
}
