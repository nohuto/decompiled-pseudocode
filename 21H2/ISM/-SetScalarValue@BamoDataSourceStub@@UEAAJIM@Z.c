/*
 * XREFs of ?SetScalarValue@BamoDataSourceStub@@UEAAJIM@Z @ 0x180144360
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z @ 0x1801443CC (-SetScalarValue@BamoDataSourceStubImpl@BamoImpl@@QEAAJIM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoDataSourceStub::SetScalarValue(BamoDataSourceStub *this, unsigned int a2, float a3)
{
  BamoDataSourceStub *v4; // rbx
  Microsoft::BamoImpl::BamoImplObject *v6; // [rsp+40h] [rbp+8h] BYREF

  v4 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v6,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 6) + 24LL));
  LODWORD(v4) = BamoImpl::BamoDataSourceStubImpl::SetScalarValue((BamoDataSourceStub *)((char *)v4 + 8), a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v6);
  return (unsigned int)v4;
}
