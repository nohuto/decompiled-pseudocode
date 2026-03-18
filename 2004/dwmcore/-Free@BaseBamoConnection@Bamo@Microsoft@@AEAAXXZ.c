/*
 * XREFs of ?Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x180167B78
 * Callers:
 *     ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180167680 (--_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801681F0 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::Free(Microsoft::Bamo::BaseBamoConnection *this)
{
  if ( this )
    (**(void (__fastcall ***)(Microsoft::Bamo::BaseBamoConnection *, __int64))this)(this, 1LL);
}
