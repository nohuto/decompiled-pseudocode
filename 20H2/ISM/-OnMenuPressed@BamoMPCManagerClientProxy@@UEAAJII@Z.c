/*
 * XREFs of ?OnMenuPressed@BamoMPCManagerClientProxy@@UEAAJII@Z @ 0x180109850
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJII@Z @ 0x1801098BC (-OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJII@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnMenuPressed(
        BamoMPCManagerClientProxy *this,
        unsigned int a2,
        unsigned int a3)
{
  BamoMPCManagerClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMPCManagerClientProxyImpl::OnMenuPressed(
                  (BamoMPCManagerClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
