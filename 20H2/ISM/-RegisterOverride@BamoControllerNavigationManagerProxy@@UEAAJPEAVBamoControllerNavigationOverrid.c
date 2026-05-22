/*
 * XREFs of ?RegisterOverride@BamoControllerNavigationManagerProxy@@UEAAJPEAVBamoControllerNavigationOverridePrincipal@@@Z @ 0x1800EB5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?RegisterOverride@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoControllerNavigationOverridePrincipal@@@Z @ 0x1800EB5FC (-RegisterOverride@BamoControllerNavigationManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoControllerNavi.c)
 */

__int64 __fastcall BamoControllerNavigationManagerProxy::RegisterOverride(
        BamoControllerNavigationManagerProxy *this,
        struct BamoControllerNavigationOverridePrincipal *a2)
{
  BamoControllerNavigationManagerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoControllerNavigationManagerProxyImpl::RegisterOverride(
                  (BamoControllerNavigationManagerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
