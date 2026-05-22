/*
 * XREFs of ?StopFeedback@BamoSimpleHapticsControllerProxy@@UEAAJXZ @ 0x1800ECB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?StopFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJXZ @ 0x1800ECB9C (-StopFeedback@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoSimpleHapticsControllerProxy::StopFeedback(BamoSimpleHapticsControllerProxy *this)
{
  BamoSimpleHapticsControllerProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoSimpleHapticsControllerProxyImpl::StopFeedback((BamoSimpleHapticsControllerProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned int)v1;
}
