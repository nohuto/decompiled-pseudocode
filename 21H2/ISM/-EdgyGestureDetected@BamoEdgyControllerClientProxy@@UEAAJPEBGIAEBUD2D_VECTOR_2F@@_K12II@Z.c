/*
 * XREFs of ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x1800FFBF0
 * Callers:
 *     ?NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@PEBUEdgyPointerInfo@@2@Z @ 0x180177974 (-NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetecte.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x1800FFCA8 (-EdgyGestureDetected@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEBGIAEBUD2D_VECTOR_2F@@_K.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoEdgyControllerClientProxy::EdgyGestureDetected(
        BamoEdgyControllerClientProxy *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        const struct D2D_VECTOR_2F *a4,
        unsigned __int64 a5,
        const struct D2D_VECTOR_2F *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9)
{
  BamoEdgyControllerClientProxy *v12; // rbx
  Microsoft::BamoImpl::BamoImplObject *v14; // [rsp+60h] [rbp+8h] BYREF

  v12 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v14,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v12) = BamoImpl::BamoEdgyControllerClientProxyImpl::EdgyGestureDetected(
                   (BamoEdgyControllerClientProxy *)((char *)v12 + 8),
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7,
                   a8,
                   a9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v14);
  return (unsigned int)v12;
}
