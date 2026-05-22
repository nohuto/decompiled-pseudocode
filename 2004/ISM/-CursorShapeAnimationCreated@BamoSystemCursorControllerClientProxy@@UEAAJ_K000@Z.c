/*
 * XREFs of ?CursorShapeAnimationCreated@BamoSystemCursorControllerClientProxy@@UEAAJ_K000@Z @ 0x1800E4640
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?CursorShapeAnimationCreated@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K000@Z @ 0x1800E46C4 (-CursorShapeAnimationCreated@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K000@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSystemCursorControllerClientProxy::CursorShapeAnimationCreated(
        BamoSystemCursorControllerClientProxy *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  BamoSystemCursorControllerClientProxy *v8; // rbx
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v8) = BamoImpl::BamoSystemCursorControllerClientProxyImpl::CursorShapeAnimationCreated(
                  (BamoSystemCursorControllerClientProxy *)((char *)v8 + 8),
                  a2,
                  a3,
                  a4,
                  a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10);
  return (unsigned int)v8;
}
