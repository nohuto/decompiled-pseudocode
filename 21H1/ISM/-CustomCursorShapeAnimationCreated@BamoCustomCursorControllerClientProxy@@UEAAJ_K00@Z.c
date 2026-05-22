/*
 * XREFs of ?CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxy@@UEAAJ_K00@Z @ 0x1800E4E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K00@Z @ 0x1800E4EBC (-CustomCursorShapeAnimationCreated@BamoCustomCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoCustomCursorControllerClientProxy::CustomCursorShapeAnimationCreated(
        BamoCustomCursorControllerClientProxy *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  BamoCustomCursorControllerClientProxy *v7; // rbx
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoCustomCursorControllerClientProxyImpl::CustomCursorShapeAnimationCreated(
                  (BamoCustomCursorControllerClientProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9);
  return (unsigned int)v7;
}
