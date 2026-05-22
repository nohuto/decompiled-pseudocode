/*
 * XREFs of ?OnMouseSnappedToGaze@BamoMPCManagerClientProxy@@UEAAJXZ @ 0x180109F90
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnMouseSnappedToGaze@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x180109FDC (-OnMouseSnappedToGaze@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnMouseSnappedToGaze(BamoMPCManagerClientProxy *this)
{
  BamoMPCManagerClientProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoMPCManagerClientProxyImpl::OnMouseSnappedToGaze((BamoMPCManagerClientProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned int)v1;
}
