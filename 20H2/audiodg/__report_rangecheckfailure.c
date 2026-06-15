/*
 * XREFs of __report_rangecheckfailure @ 0x14001D168
 * Callers:
 *     ?UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z @ 0x14005F474 (-UpdateRegistryFromResourceS@CAtlModule@ATL@@QEAAJIHPEAU_ATL_REGMAP_ENTRY@2@@Z.c)
 * Callees:
 *     __report_securityfailure @ 0x14001D184 (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
