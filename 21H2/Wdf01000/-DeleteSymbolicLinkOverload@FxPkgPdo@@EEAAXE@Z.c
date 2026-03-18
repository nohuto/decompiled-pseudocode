/*
 * XREFs of ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C0083510
 * Callers:
 *     <none>
 * Callees:
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C002BB4C (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ?IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ @ 0x1C005C218 (-IsDeviceReportedMissing@FxDeviceDescriptionEntry@@QEAAEXZ.c)
 */

void __fastcall FxPkgPdo::DeleteSymbolicLinkOverload(FxPkgPdo *this, unsigned __int8 GracefulRemove)
{
  if ( !GracefulRemove && FxDeviceDescriptionEntry::IsDeviceReportedMissing(this->m_Description) )
    FxDevice::DeleteSymbolicLink(this->m_Device);
}
