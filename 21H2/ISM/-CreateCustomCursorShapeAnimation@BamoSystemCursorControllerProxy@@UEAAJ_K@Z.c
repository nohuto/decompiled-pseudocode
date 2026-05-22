/*
 * XREFs of ?CreateCustomCursorShapeAnimation@BamoSystemCursorControllerProxy@@UEAAJ_K@Z @ 0x1800E3E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?CreateCustomCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1800E3E9C (-CreateCustomCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 */

__int64 __fastcall BamoSystemCursorControllerProxy::CreateCustomCursorShapeAnimation(
        BamoSystemCursorControllerProxy *this,
        unsigned __int64 a2)
{
  BamoSystemCursorControllerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoSystemCursorControllerProxyImpl::CreateCustomCursorShapeAnimation(
                  (BamoSystemCursorControllerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
