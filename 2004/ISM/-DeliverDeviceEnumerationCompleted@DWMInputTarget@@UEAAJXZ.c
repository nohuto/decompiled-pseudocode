/*
 * XREFs of ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x180041A60
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800190A0 (_tlgKeywordOn.c)
 *     ?Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ @ 0x1800190C8 (-Provider@InputETW@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800295C8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D304 (--_U@YAPEAX_K@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180070C8C (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ??$reset@PEADX@?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAAXPEAD@Z @ 0x18007A2EC (--$reset@PEADX@-$unique_ptr@$$BY0A@DU-$default_delete@$$BY0A@D@std@@@std@@QEAAXPEAD@Z.c)
 *     ??1GetInputReportResult@@QEAA@XZ @ 0x18009B7F0 (--1GetInputReportResult@@QEAA@XZ.c)
 *     ?DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z @ 0x1801032CC (-DeliverInput@NonBamoInputDeliveryServer@@SAJPEBUtagMsgRoutingInfo@@PEBX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputTarget::DeliverDeviceEnumerationCompleted(DWMInputTarget *this)
{
  void *v2; // rax
  void *v3; // rdx
  int v4; // ebx
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r10
  int v9; // [rsp+20h] [rbp-18h] BYREF
  void *v10; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = 0LL;
  v9 = 40;
  v2 = operator new[](0x28uLL);
  std::unique_ptr<char [0]>::reset<char *,void>(&v10, v2);
  v3 = v10;
  *(_DWORD *)v10 = 4;
  v4 = NonBamoInputDeliveryServer::DeliverInput((DWMInputTarget *)((char *)this + 64), v3, v9);
  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v6 = InputETW::Provider(v5);
    if ( *(_DWORD *)v6 > 5u && tlgKeywordOn((__int64)v6, 1LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v7,
        &unk_1801CA816,
        0LL,
        0LL);
  }
  if ( v4 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v4);
  GetInputReportResult::~GetInputReportResult((GetInputReportResult *)&v9);
  return (unsigned int)v4;
}
