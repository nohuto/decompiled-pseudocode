/*
 * XREFs of ?ForcePrimaryInputType@BamoMPCManagerProxy@@UEAAJW4InputType@@@Z @ 0x1801078E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?ForcePrimaryInputType@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@@Z @ 0x18010793C (-ForcePrimaryInputType@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@@Z.c)
 */

__int64 __fastcall BamoMPCManagerProxy::ForcePrimaryInputType(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMPCManagerProxyImpl::ForcePrimaryInputType(v3 + 8, a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
