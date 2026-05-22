/*
 * XREFs of ?ParametersChanged@BamoSystemCursorControllerClientProxy@@UEAAJ_KAEBUCursorParametersInfo@@@Z @ 0x1800E9B40
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?ParametersChanged@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_KAEBUCursorParametersInfo@@@Z @ 0x1800E9BAC (-ParametersChanged@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_KAEBUCursorParamete.c)
 */

__int64 __fastcall BamoSystemCursorControllerClientProxy::ParametersChanged(
        BamoSystemCursorControllerClientProxy *this,
        unsigned __int64 a2,
        const struct CursorParametersInfo *a3)
{
  BamoSystemCursorControllerClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoSystemCursorControllerClientProxyImpl::ParametersChanged(
                  (BamoSystemCursorControllerClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
