/*
 * XREFs of ?GetRestrictToProcessId@BamoDataSourceProxy@@UEAAIXZ @ 0x1801BC9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026A28 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180026A5C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 */

__int64 __fastcall BamoDataSourceProxy::GetRestrictToProcessId(BamoDataSourceProxy *this)
{
  BamoDataSourceProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = *((_DWORD *)v1 + 12);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v3);
  return (unsigned int)v1;
}
