/*
 * XREFs of ?GetProcessId@BamoActivatableEntityPrincipal@@UEAAIXZ @ 0x180105490
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

__int64 __fastcall BamoActivatableEntityPrincipal::GetProcessId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v3, this[3]);
  LODWORD(v1) = *((_DWORD *)v1 + 18);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned int)v1;
}
