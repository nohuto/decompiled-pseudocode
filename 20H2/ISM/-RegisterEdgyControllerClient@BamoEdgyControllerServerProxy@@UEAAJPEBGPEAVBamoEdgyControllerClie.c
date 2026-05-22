/*
 * XREFs of ?RegisterEdgyControllerClient@BamoEdgyControllerServerProxy@@UEAAJPEBGPEAVBamoEdgyControllerClientPrincipal@@@Z @ 0x1800EAE10
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?RegisterEdgyControllerClient@BamoEdgyControllerServerProxyImpl@BamoImpl@@QEAAJPEBGPEAVBamoEdgyControllerClientPrincipal@@@Z @ 0x1800EAE7C (-RegisterEdgyControllerClient@BamoEdgyControllerServerProxyImpl@BamoImpl@@QEAAJPEBGPEAVBamoEdgyC.c)
 */

__int64 __fastcall BamoEdgyControllerServerProxy::RegisterEdgyControllerClient(
        BamoEdgyControllerServerProxy *this,
        const unsigned __int16 *a2,
        struct BamoEdgyControllerClientPrincipal *a3)
{
  BamoEdgyControllerServerProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoEdgyControllerServerProxyImpl::RegisterEdgyControllerClient(
                  (BamoEdgyControllerServerProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
