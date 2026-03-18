/*
 * XREFs of ?UpdateRestrictToProcessId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801E0920
 * Callers:
 *     ?Thunk_UpdateRestrictToProcessId_5@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801E08F0 (-Thunk_UpdateRestrictToProcessId_5@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801E0A50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxy.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800F04C0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessId(
        BamoImpl::BamoDataSourceProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  unsigned int v4; // edi
  char v5; // si
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  int v16[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *((_BYTE *)this + 28);
  v4 = a3;
  v5 = a2;
  if ( v3 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v4);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        11511LL,
        (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v7,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      v8,
      v9,
      v10);
    v3 = *((_BYTE *)this + 28);
  }
  *((_DWORD *)this + 10) = v4;
  if ( v3 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        11522LL,
        (__int64)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v11,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      v12,
      v13,
      v14);
  }
  if ( v5 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
