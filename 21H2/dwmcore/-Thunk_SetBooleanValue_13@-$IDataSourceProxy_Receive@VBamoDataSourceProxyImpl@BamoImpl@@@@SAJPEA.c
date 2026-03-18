/*
 * XREFs of ?Thunk_SetBooleanValue_13@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801E05C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800F04C0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetBooleanValue_13(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        unsigned int **a2)
{
  char v3; // di
  unsigned int v4; // ebx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_BYTE *)a2[1];
  v4 = **a2;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
  LOBYTE(v5) = v3;
  v6 = (*(__int64 (__fastcall **)(char *, _QWORD, __int64))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v4, v5);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v13,
    v7,
    v8,
    v9);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v10, v11);
  return v6;
}
