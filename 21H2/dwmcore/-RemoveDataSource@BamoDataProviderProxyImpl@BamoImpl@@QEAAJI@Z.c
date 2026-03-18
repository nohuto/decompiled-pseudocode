/*
 * XREFs of ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1801E00B8
 * Callers:
 *     ?Thunk_RemoveDataSource_5@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801E05A0 (-Thunk_RemoveDataSource_5@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1800F0408 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800F04C0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::RemoveDataSource(
        BamoImpl::BamoDataProviderProxyImpl *this,
        unsigned int a2)
{
  __int64 v2; // r9
  Microsoft::BamoImpl::BamoProxyImpl *v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  v3 = 0LL;
  v4 = 0LL;
  v6 = *(_QWORD *)(v2 + 24);
  v7 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32);
  if ( a2 )
  {
    Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
             *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32),
             *(unsigned int *)(v2 + 36),
             a2);
    if ( !Item
      || (v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 48LL))(Item),
          (v3 = (Microsoft::BamoImpl::BamoProxyImpl *)v9) == 0LL) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2396,
        (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v4 = v9 - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v19,
    v7);
  v10 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16, v4);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v19,
    v11,
    v12,
    v13);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v14, v15);
  if ( v3 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v3, v16, v17);
  return v10;
}
