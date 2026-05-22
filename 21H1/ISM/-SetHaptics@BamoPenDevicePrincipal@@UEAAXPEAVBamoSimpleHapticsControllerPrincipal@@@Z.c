/*
 * XREFs of ?SetHaptics@BamoPenDevicePrincipal@@UEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x180131CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E4 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetHaptics@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x180131D44 (-SetHaptics@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoSimpleHapticsControllerPrincipal@@.c)
 */

void __fastcall BamoPenDevicePrincipal::SetHaptics(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct BamoSimpleHapticsControllerPrincipal *a2)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v4, this[3]);
  BamoImpl::BamoPenDevicePrincipalImpl::SetHaptics((BamoImpl::BamoPenDevicePrincipalImpl *)(this + 1), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v4);
}
