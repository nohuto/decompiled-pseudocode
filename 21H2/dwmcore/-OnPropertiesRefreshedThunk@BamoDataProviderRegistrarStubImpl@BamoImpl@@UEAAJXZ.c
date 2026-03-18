/*
 * XREFs of ?OnPropertiesRefreshedThunk@BamoDataProviderRegistrarStubImpl@BamoImpl@@UEAAJXZ @ 0x1801BA850
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarStubImpl::OnPropertiesRefreshedThunk(
        BamoImpl::BamoDataProviderRegistrarStubImpl *this)
{
  BamoImpl::BamoDataProviderRegistrarStubImpl *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  const char *v5; // r9
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = this;
  v2 = *((_QWORD *)this + 3);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v7,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 32LL));
  LODWORD(v1) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 - 16) + 72LL))(v2 - 16, (__int64)v1 - 16);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v7,
    v3,
    v4,
    v5);
  return (unsigned int)v1;
}
