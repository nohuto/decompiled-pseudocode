/*
 * XREFs of ?SetVector3Value@BamoDataSourceProxyImpl@BamoImpl@@QEAAJIMMM@Z @ 0x1801E0428
 * Callers:
 *     ?Thunk_SetVector3Value_26@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801E0860 (-Thunk_SetVector3Value_26@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEA.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800F04C0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::SetVector3Value(
        BamoImpl::BamoDataSourceProxyImpl *this,
        unsigned int a2,
        float a3,
        float a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE v13[32]; // [rsp+30h] [rbp-48h] BYREF

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  v6 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 144LL))((char *)this - 16, a2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    v7,
    v8,
    v9);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v10, v11);
  return v6;
}
