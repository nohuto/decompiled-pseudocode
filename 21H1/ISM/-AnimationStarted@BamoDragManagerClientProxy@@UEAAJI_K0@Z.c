/*
 * XREFs of ?AnimationStarted@BamoDragManagerClientProxy@@UEAAJI_K0@Z @ 0x1800E3230
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?AnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z @ 0x1800E32A8 (-AnimationStarted@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDragManagerClientProxy::AnimationStarted(
        BamoDragManagerClientProxy *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  BamoDragManagerClientProxy *v7; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoDragManagerClientProxyImpl::AnimationStarted(
                  (BamoDragManagerClientProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v7;
}
