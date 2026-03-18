/*
 * XREFs of ?UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJ_NPEBU_LUID@@@Z @ 0x1800F0468
 * Callers:
 *     ?Thunk_UpdateUniqueId_8@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F8E80 (-Thunk_UpdateUniqueId_8@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJP.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801E0A30 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoPro.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800F04C0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateUniqueId(
        BamoImpl::BamoDataProviderProxyImpl *this,
        char a2,
        const struct _LUID *a3)
{
  char v5; // cl
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  const char *v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  int v16[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *((_BYTE *)this + 28);
  if ( v5 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v8 = (*(__int64 (__fastcall **)(char *, const struct _LUID *))(*((_QWORD *)this - 2) + 88LL))((char *)this - 16, a3);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2317,
        (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v8,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      v9,
      v10,
      v11);
    v5 = *((_BYTE *)this + 28);
  }
  *((struct _LUID *)this + 4) = *a3;
  if ( v5 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 96LL))((char *)this - 16);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2322,
        (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v12,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      v13,
      v14,
      v15);
  }
  if ( a2 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this);
  return 0LL;
}
