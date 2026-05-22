/*
 * XREFs of ?SetPanelId@BamoDockDevicePrincipal@@UEAAJPEBG@Z @ 0x180127BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x180127C38 (-SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall BamoDockDevicePrincipal::SetPanelId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const unsigned __int16 *a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v5, this[3]);
  LODWORD(v3) = BamoImpl::BamoDockDevicePrincipalImpl::SetPanelId((BamoImpl::BamoDockDevicePrincipalImpl *)(v3 + 1), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
