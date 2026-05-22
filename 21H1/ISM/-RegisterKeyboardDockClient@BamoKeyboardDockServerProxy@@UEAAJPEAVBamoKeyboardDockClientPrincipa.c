/*
 * XREFs of ?RegisterKeyboardDockClient@BamoKeyboardDockServerProxy@@UEAAJPEAVBamoKeyboardDockClientPrincipal@@@Z @ 0x1800EB7E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?RegisterKeyboardDockClient@BamoKeyboardDockServerProxyImpl@BamoImpl@@QEAAJPEAVBamoKeyboardDockClientPrincipal@@@Z @ 0x1800EB83C (-RegisterKeyboardDockClient@BamoKeyboardDockServerProxyImpl@BamoImpl@@QEAAJPEAVBamoKeyboardDockC.c)
 */

__int64 __fastcall BamoKeyboardDockServerProxy::RegisterKeyboardDockClient(
        BamoKeyboardDockServerProxy *this,
        struct BamoKeyboardDockClientPrincipal *a2)
{
  BamoKeyboardDockServerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoKeyboardDockServerProxyImpl::RegisterKeyboardDockClient(
                  (BamoKeyboardDockServerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
