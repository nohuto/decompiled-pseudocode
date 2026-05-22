/*
 * XREFs of ?BroadcastRemoveDataSource@BamoDataProviderPrincipal@@UEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x180141B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastRemoveDataSource@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x180141B88 (-BroadcastRemoveDataSource@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrinci.c)
 */

__int64 __fastcall BamoDataProviderPrincipal::BroadcastRemoveDataSource(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoDataSourcePrincipal *a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v5, this[3]);
  LODWORD(v3) = BamoImpl::BamoDataProviderPrincipalImpl::BroadcastRemoveDataSource(
                  (BamoImpl::BamoDataProviderPrincipalImpl *)(v3 + 1),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
