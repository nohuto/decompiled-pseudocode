/*
 * XREFs of ?OnInputProviderChanged@BamoMPCManagerClientProxy@@UEAAJAEBULegacyDeviceInfo@@I@Z @ 0x1801096A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnInputProviderChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@I@Z @ 0x18010970C (-OnInputProviderChanged@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJAEBULegacyDeviceInfo@@I@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnInputProviderChanged(
        BamoMPCManagerClientProxy *this,
        const struct LegacyDeviceInfo *a2,
        unsigned int a3)
{
  BamoMPCManagerClientProxy *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMPCManagerClientProxyImpl::OnInputProviderChanged(
                  (BamoMPCManagerClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
