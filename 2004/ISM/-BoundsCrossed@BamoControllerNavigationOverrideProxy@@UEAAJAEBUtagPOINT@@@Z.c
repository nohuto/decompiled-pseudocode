/*
 * XREFs of ?BoundsCrossed@BamoControllerNavigationOverrideProxy@@UEAAJAEBUtagPOINT@@@Z @ 0x18011E140
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?BoundsCrossed@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z @ 0x18011E19C (-BoundsCrossed@BamoControllerNavigationOverrideProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall BamoControllerNavigationOverrideProxy::BoundsCrossed(
        BamoControllerNavigationOverrideProxy *this,
        const struct tagPOINT *a2)
{
  BamoControllerNavigationOverrideProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoControllerNavigationOverrideProxyImpl::BoundsCrossed(
                  (BamoControllerNavigationOverrideProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
