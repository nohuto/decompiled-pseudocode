/*
 * XREFs of ?GetPrimaryUsageId@BamoDockableDeviceProxy@@UEAAGXZ @ 0x1800E68F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

__int64 __fastcall BamoDockableDeviceProxy::GetPrimaryUsageId(BamoDockableDeviceProxy *this)
{
  BamoDockableDeviceProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LOWORD(v1) = *((_WORD *)v1 + 33);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned __int16)v1;
}
