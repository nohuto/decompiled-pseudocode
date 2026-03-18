/*
 * XREFs of ?AllocatePeerThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x1800F8600
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::AllocatePeerThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF
  struct Microsoft::Bamo::BaseBamoPeer *v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v9 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    this);
  LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, struct Microsoft::Bamo::BaseBamoPeer **))(*(_QWORD *)v2 + 72LL))(
                  v2,
                  &v9);
  *a2 = v9;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    v4,
    v5,
    v6);
  return (unsigned int)v2;
}
