/*
 * XREFs of ?BroadcastSetScalarValue@BamoDataSourcePrincipal@@UEAAJIM@Z @ 0x180141D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BroadcastSetScalarValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIM@Z @ 0x180141DB8 (-BroadcastSetScalarValue@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAJIM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourcePrincipal::BroadcastSetScalarValue(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        unsigned int a2,
        float a3)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v4; // rbx
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v6, this[3]);
  LODWORD(v4) = BamoImpl::BamoDataSourcePrincipalImpl::BroadcastSetScalarValue(
                  (BamoImpl::BamoDataSourcePrincipalImpl *)(v4 + 1),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6);
  return (unsigned int)v4;
}
