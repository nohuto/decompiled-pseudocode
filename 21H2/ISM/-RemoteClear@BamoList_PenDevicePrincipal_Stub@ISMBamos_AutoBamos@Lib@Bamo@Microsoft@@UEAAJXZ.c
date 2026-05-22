/*
 * XREFs of ?RemoteClear@BamoList_PenDevicePrincipal_Stub@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ @ 0x18012FE30
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?RemoteClear@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJXZ @ 0x18012FE7C (-RemoteClear@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft.c)
 */

__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub::RemoteClear(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub *this)
{
  Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v1) = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_StubImpl::RemoteClear((Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Stub *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned int)v1;
}
