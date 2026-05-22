/*
 * XREFs of ?AttachCustomCursorVisual@BamoSystemCursorControllerClientProxy@@UEAAJ_K0@Z @ 0x1800E3330
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?AttachCustomCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K0@Z @ 0x1800E339C (-AttachCustomCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSystemCursorControllerClientProxy::AttachCustomCursorVisual(
        BamoSystemCursorControllerClientProxy *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  BamoSystemCursorControllerClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoSystemCursorControllerClientProxyImpl::AttachCustomCursorVisual(
                  (BamoSystemCursorControllerClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
