/*
 * XREFs of ?SetBootstrapProxyCallout@BamoConnection@dataprovider_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180198320
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall dataprovider_AutoBamos::BamoConnection::SetBootstrapProxyCallout(
        dataprovider_AutoBamos::BamoConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    (dataprovider_AutoBamos::BamoConnection *)((char *)this + 8));
  LODWORD(a2) = (*(__int64 (__fastcall **)(dataprovider_AutoBamos::BamoConnection *, struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 8LL))(
                  this,
                  a2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v8,
    v4,
    v5,
    v6);
  return (unsigned int)a2;
}
