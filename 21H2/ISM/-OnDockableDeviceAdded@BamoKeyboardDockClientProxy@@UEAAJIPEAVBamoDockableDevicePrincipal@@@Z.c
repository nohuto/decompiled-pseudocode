/*
 * XREFs of ?OnDockableDeviceAdded@BamoKeyboardDockClientProxy@@UEAAJIPEAVBamoDockableDevicePrincipal@@@Z @ 0x180129030
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnDockableDeviceAdded@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockableDevicePrincipal@@@Z @ 0x18012909C (-OnDockableDeviceAdded@BamoKeyboardDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockableDevicePri.c)
 */

__int64 __fastcall BamoKeyboardDockClientProxy::OnDockableDeviceAdded(
        BamoKeyboardDockClientProxy *this,
        unsigned int a2,
        struct BamoDockableDevicePrincipal *a3)
{
  BamoKeyboardDockClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoKeyboardDockClientProxyImpl::OnDockableDeviceAdded(
                  (BamoKeyboardDockClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
