/*
 * XREFs of ?OnPeerDisconnectedThunk@BamoConnectionImpl@DiagnosticCallbacks_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x180197800
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl::OnPeerDisconnectedThunk(
        BamoImpl::DiagnosticCallbacks_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        char a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  _BYTE v11[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v5 = *((_QWORD *)this + 2);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v11,
    this);
  LOBYTE(v6) = a3;
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 96LL))(v5, v3, v6);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v11,
    v7,
    v8,
    v9);
  return (unsigned int)v3;
}
