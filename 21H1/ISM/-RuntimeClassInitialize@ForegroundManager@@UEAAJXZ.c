/*
 * XREFs of ?RuntimeClassInitialize@ForegroundManager@@UEAAJXZ @ 0x180033110
 * Callers:
 *     ??$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundManager@@@Z @ 0x180033574 (--$MakeAndInitialize@VForegroundManager@@UIForegroundManager@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800166E8 (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180018FC0 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?Initialize@?$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_tagActivationObjectNotification@@@Z@std@@@Z @ 0x18002CCE4 (-Initialize@-$KernelInputConnection@U_tagActivationObjectNotification@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800325B8 (-AddRef@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ??0?$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x180033278 (--0-$ListPrincipal@VBamoActivatableEntityPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800334B8 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA18 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18007125C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

__int64 __fastcall ForegroundManager::RuntimeClassInitialize(ForegroundManager *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r10
  int v4; // eax
  __int64 v5; // r8
  Microsoft::Bamo::BaseBamoConnection *BamoServerConnection; // rax
  Microsoft::Bamo::BaseBamoConnection *v7; // rbx
  void (__fastcall ***v8)(_QWORD); // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  void (__fastcall *v11)(__int64, __int64); // rdi
  void *v12; // rax
  __int64 v13; // rax
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = InputTraceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 4u && tlgKeywordOn((__int64)v2, 0x8000LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v3,
      &unk_1801CED30,
      0LL,
      0LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 16);
  v4 = CoreUICreate((char *)this + 16);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\foregroundmanager.cpp",
      (const char *)(unsigned int)v4,
      v15[0]);
    JUMPOUT(0x180033270LL);
  }
  v15[1] = this;
  v15[0] = off_1801B3BF0;
  v15[7] = v15;
  KernelInputConnection<_tagActivationObjectNotification>::Initialize(
    (_QWORD *)this + 3,
    (_QWORD *)this + 2,
    v5,
    (__int64)v15);
  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v7 = BamoServerConnection;
  if ( BamoServerConnection )
    Microsoft::Bamo::BaseBamoConnection::AddRef(BamoServerConnection);
  v8 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)v7 + 23) + 8LL) + 24LL))(*((_QWORD *)v7 + 23) + 8LL);
  v9 = *((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = v8;
  if ( v8 )
    (**v8)(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *((_QWORD *)this + 20);
  v11 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v10 + 8) + 32LL);
  v12 = operator new(0x50uLL);
  v13 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoActivatableEntityPrincipal>::ListPrincipal<BamoActivatableEntityPrincipal>(
          v12,
          v7);
  v11(v10 + 8, v13);
  Microsoft::Bamo::BaseBamoConnection::Release(v7);
  return 0LL;
}
