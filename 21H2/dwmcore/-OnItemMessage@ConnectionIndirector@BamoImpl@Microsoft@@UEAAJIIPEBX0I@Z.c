/*
 * XREFs of ?OnItemMessage@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEBX0I@Z @ 0x1800D7300
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800D73B0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800D73E4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        int a2,
        __int64 a3,
        const void *a4,
        const void *a5,
        unsigned int a6)
{
  Microsoft::BamoImpl::ConnectionIndirector *v7; // rbx
  __int64 v9; // rsi
  __int64 v10; // r8
  const void *v11; // rdx
  int v12; // eax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    (Microsoft::BamoImpl::InternalLock *)&v14,
    (Microsoft::BamoImpl::ConnectionIndirector *)((char *)this - 16));
  v9 = *((_QWORD *)v7 + 2);
  v10 = a6;
  v11 = a5;
  *(_DWORD *)(v9 + 32) = a2;
  v12 = (*(__int64 (__fastcall **)(const void *, const void *, __int64))(*(_QWORD *)a4 + 24LL))(a4, v11, v10);
  *(_DWORD *)(v9 + 32) = 0;
  LODWORD(v7) = v12;
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v14);
  return (unsigned int)v7;
}
