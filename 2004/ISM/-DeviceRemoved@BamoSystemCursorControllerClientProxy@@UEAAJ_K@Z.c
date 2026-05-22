/*
 * XREFs of ?DeviceRemoved@BamoSystemCursorControllerClientProxy@@UEAAJ_K@Z @ 0x1800E5100
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DeviceRemoved@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1800E515C (-DeviceRemoved@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 */

__int64 __fastcall BamoSystemCursorControllerClientProxy::DeviceRemoved(
        BamoSystemCursorControllerClientProxy *this,
        unsigned __int64 a2)
{
  BamoSystemCursorControllerClientProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoSystemCursorControllerClientProxyImpl::DeviceRemoved(
                  (BamoSystemCursorControllerClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
