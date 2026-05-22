/*
 * XREFs of ?SetMatrix4x4Value@BamoDataSourceStub@@UEAAJIAEBU_D3DMATRIX@@@Z @ 0x180143A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z @ 0x180143ADC (-SetMatrix4x4Value@BamoDataSourceStubImpl@BamoImpl@@QEAAJIAEBU_D3DMATRIX@@@Z.c)
 */

__int64 __fastcall BamoDataSourceStub::SetMatrix4x4Value(
        BamoDataSourceStub *this,
        unsigned int a2,
        const struct _D3DMATRIX *a3)
{
  BamoDataSourceStub *v5; // rbx
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v5) = BamoImpl::BamoDataSourceStubImpl::SetMatrix4x4Value((BamoDataSourceStub *)((char *)v5 + 8), a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7);
  return (unsigned int)v5;
}
