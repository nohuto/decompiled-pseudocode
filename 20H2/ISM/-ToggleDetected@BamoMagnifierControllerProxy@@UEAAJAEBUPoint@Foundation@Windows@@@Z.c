/*
 * XREFs of ?ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x1801009B0
 * Callers:
 *     ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18017E330 (-DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?ToggleDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x180100A0C (-ToggleDetected@BamoMagnifierControllerProxyImpl@BamoImpl@@QEAAJAEBUPoint@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall BamoMagnifierControllerProxy::ToggleDetected(
        BamoMagnifierControllerProxy *this,
        const struct Windows::Foundation::Point *a2)
{
  BamoMagnifierControllerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMagnifierControllerProxyImpl::ToggleDetected(
                  (BamoMagnifierControllerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
