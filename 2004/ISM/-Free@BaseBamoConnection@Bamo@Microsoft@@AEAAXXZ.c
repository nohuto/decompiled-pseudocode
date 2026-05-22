/*
 * XREFs of ?Free@BaseBamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x1800724F0
 * Callers:
 *     ?OnDelete@?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAXXZ @ 0x180042B80 (-OnDelete@-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAXXZ.c)
 *     ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180071870 (--_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 *     ?OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180073370 (-OnZeroReferenceCount@BaseBamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::Bamo::BaseBamoConnection::Free(Microsoft::Bamo::BaseBamoConnection *this)
{
  if ( this )
    (**(void (__fastcall ***)(Microsoft::Bamo::BaseBamoConnection *, __int64))this)(this, 1LL);
}
