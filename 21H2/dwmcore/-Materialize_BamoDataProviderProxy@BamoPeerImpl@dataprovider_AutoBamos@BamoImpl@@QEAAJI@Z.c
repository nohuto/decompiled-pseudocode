/*
 * XREFs of ?Materialize_BamoDataProviderProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800F1FB0
 * Callers:
 *     ?Thunk_Materialize_BamoDataProviderProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F1FA0 (-Thunk_Materialize_BamoDataProviderProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1800269A0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800269E8 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18004F61C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0DataProviderProxy@@QEAA@XZ @ 0x1800F2094 (--0DataProviderProxy@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x1800F801C (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::Materialize_BamoDataProviderProxy(
        BamoImpl::dataprovider_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  DataProviderProxy *v4; // rax
  DataProviderProxy *v5; // rbx
  __int64 v6; // rdx
  DataProviderProxy *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-38h]
  _BYTE v15[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v15,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  v4 = (DataProviderProxy *)DefaultHeap::AllocClear(0xA8uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v4, 0, 0xA8uLL);
  v7 = DataProviderProxy::DataProviderProxy(v5);
  if ( !v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderfactory.cpp",
      (const char *)0x8007000ELL);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1EEE,
      (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)0x8007000ELL,
      v14);
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v15,
    v6,
    v8,
    v9);
  v10 = (*(__int64 (__fastcall **)(DataProviderProxy *))(*(_QWORD *)v7 + 56LL))(v7);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(v10 + 16, this);
  *(_DWORD *)(v10 + 24) = a2;
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v11 + 40LL))(
          v11,
          *((unsigned int *)this + 9),
          a2,
          v10);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E93,
      (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v12,
      v14);
  return 0LL;
}
