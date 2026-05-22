/*
 * XREFs of ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x18015C1B0
 * Callers:
 *     ?GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUHSTRING__@@PEAUDynamicNodeInfo@234@@Z @ 0x18004C980 (-GetDynamicNodeForDevice@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJPEAUHSTR.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800C51F4 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$GetDynamicNodeForDevice@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAPEB_WAEAUDynamicNodeInfo@234@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEAPEB_WAEAUDynamicNodeInfo@234@@Z @ 0x18014E3A0 (--$GetDynamicNodeForDevice@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@.c)
 *     ?AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBUDynamicNodeInfo@234@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180159698 (-AddSpatialNodeMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEB.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B2B4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeForDevice(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        HSTRING a2,
        struct Windows::Internal::Holographic::DynamicNodeInfo *a3)
{
  const wchar_t *v5; // r14
  Windows::Internal::Holographic::HolographicDriverHandleWrapper *v6; // rcx
  int v7; // ebx
  __int64 v8; // rdx
  _QWORD *v10; // rax
  UINT32 length; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-BCh] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-B8h] BYREF
  char *v14; // [rsp+50h] [rbp-B0h] BYREF
  void *v15; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp-90h]
  _BYTE v17[400]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  length = 0;
  *(_OWORD *)a3 = `Zero<Windows::Internal::Holographic::DynamicNodeInfo>'::`2'::zero;
  *((_DWORD *)a3 + 4) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  v5 = StringRawBuffer;
  memset_0(v17, 0, sizeof(v17));
  _o_wcsncpy_s(v17, 200LL, v5, length);
  v6 = (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)*((_QWORD *)this + 11);
  v12 = 0;
  v7 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
         v6,
         0x5B841Cu,
         v17,
         0x190u,
         a3,
         0x10u,
         &v12);
  if ( v7 < 0 )
  {
    v8 = 949LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( v12 != 16 )
  {
    v7 = -2147418113;
    v8 = 951LL;
    goto LABEL_3;
  }
  v7 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::SpatialGraphDriverClient *, struct Windows::Internal::Holographic::DynamicNodeInfo *, char *))(*(_QWORD *)this + 144LL))(
         this,
         a3,
         (char *)a3 + 16);
  if ( v7 < 0 )
  {
    v8 = 953LL;
    goto LABEL_3;
  }
  v14 = (char *)this - 8;
  HolographicDriverClientTrace::GetDynamicNodeForDevice<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,wchar_t const * &,Windows::Internal::Holographic::DynamicNodeInfo &>(
    (const void **)&v14,
    (const struct _GUID *)((char *)this + 72),
    &StringRawBuffer,
    a3);
  v10 = std::wstring::wstring(&v15, (__int64)v5);
  Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialNodeMapping(
    (__int64)this + 72,
    (__int64)a3,
    (__int64)v10);
  if ( v16 >= 8 )
    std::_Deallocate<16,0>(v15, (const struct std::nothrow_t *)(2 * v16 + 2));
  return 0LL;
}
