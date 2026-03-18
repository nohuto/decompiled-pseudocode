/*
 * XREFs of ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800F0270
 * Callers:
 *     ?Thunk_Register_5@?$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F0260 (-Thunk_Register_5@-$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1800F0408 (-TryGetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1800F04C0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::Register(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  _QWORD *v2; // rbx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rdx
  Microsoft::BamoImpl::BamoProxyImpl *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // r14
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r8
  const char *v18; // r9
  int v20[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v2[5] + 36LL) == v5 )
        break;
      v2 = (_QWORD *)v2[6];
    }
    while ( v2 );
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 32LL))(v2);
  v7 = v2[5];
  v8 = 0LL;
  v9 = 0LL;
  v10 = v6;
  v11 = *(_QWORD *)(v7 + 24);
  v12 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v11 + 32);
  if ( a2 )
  {
    Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetItem(
             *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v11 + 32),
             *(_DWORD *)(v7 + 36),
             a2);
    if ( !Item
      || (v14 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(*(_QWORD *)Item + 48LL))(Item),
          (v8 = (Microsoft::BamoImpl::BamoProxyImpl *)v14) == 0LL) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x243C,
        (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v9 = v14 - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v20,
    v12);
  v16 = (*(__int64 (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16, v10, v9);
  if ( (int)(v16 + 0x80000000) >= 0 && v16 != -2018375668 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x244B,
      (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v16,
      v20[0]);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v20,
    v15,
    v17,
    v18);
  if ( v8 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v8);
  if ( (v16 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x245A,
      (int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)v16);
  return v16;
}
