/*
 * XREFs of ?SetConvertGraspToSystemGesture@BamoMPCManagerProxy@@UEAAJ_NI@Z @ 0x18010B430
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetConvertGraspToSystemGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18010B49C (-SetConvertGraspToSystemGesture@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJ_NI@Z.c)
 */

__int64 __fastcall BamoMPCManagerProxy::SetConvertGraspToSystemGesture(
        BamoMPCManagerProxy *this,
        bool a2,
        unsigned int a3)
{
  BamoMPCManagerProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMPCManagerProxyImpl::SetConvertGraspToSystemGesture(
                  (BamoMPCManagerProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
