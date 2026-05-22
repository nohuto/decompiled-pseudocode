/*
 * XREFs of ?DestroyCursorShapeAnimation@BamoSystemCursorControllerProxy@@UEAAJ_K0@Z @ 0x1800E4BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DestroyCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0@Z @ 0x1800E4C4C (-DestroyCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K0@Z.c)
 */

__int64 __fastcall BamoSystemCursorControllerProxy::DestroyCursorShapeAnimation(
        BamoSystemCursorControllerProxy *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  BamoSystemCursorControllerProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoSystemCursorControllerProxyImpl::DestroyCursorShapeAnimation(
                  (BamoSystemCursorControllerProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
