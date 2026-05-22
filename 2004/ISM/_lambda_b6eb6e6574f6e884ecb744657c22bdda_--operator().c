/*
 * XREFs of _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x18016A0C4
 * Callers:
 *     wil::details::lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___::_lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___ @ 0x180169B1C (wil--details--lambda_call__lambda_b6eb6e6574f6e884ecb744657c22bdda___--_lambda_call__lambda_b6eb.c)
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016BA40 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800C5284 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     ??$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseData@SpatialInteractionDevices@@AEAU12@@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAJAEAK1AEAPEB_WAEAG3AEA_N4333$$QEA_NAEAEAEAI1AEAUPoseData@1@8@Z @ 0x180168530 (--$ParsingInitialized@AEAJAEAKAEAKAEAPEB_WAEAGAEAGAEA_NAEA_NAEAGAEAGAEAG_NAEAEAEAIAEAKAEAUPoseDa.c)
 *     ?AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBKAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18016A6F4 (-AddSpatialInteractionDeviceIdMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SA.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()(__int64 *a1)
{
  PCWSTR StringRawBuffer; // r13
  __int64 v3; // rdx
  __int64 *v4; // rbx
  char result; // al
  __int64 v6; // [rsp+90h] [rbp-68h] BYREF
  __int64 *v7; // [rsp+98h] [rbp-60h]
  int v8[2]; // [rsp+A0h] [rbp-58h] BYREF
  void *v9[3]; // [rsp+A8h] [rbp-50h] BYREF
  unsigned __int64 v10; // [rsp+C0h] [rbp-38h]

  v7 = a1;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 40), 0LL);
  *(_QWORD *)v8 = StringRawBuffer;
  v3 = *a1;
  LOBYTE(v6) = *(_BYTE *)(*a1 + 1021) != 0;
  v4 = v7;
  SpatialInteractionDevices::SpatialInteractionTrace::ParsingInitialized<long &,unsigned long &,unsigned long &,wchar_t const * &,unsigned short &,unsigned short &,bool &,bool &,unsigned short &,unsigned short &,unsigned short &,bool,unsigned char &,unsigned int &,unsigned long &,SpatialInteractionDevices::PoseData &,SpatialInteractionDevices::PoseData &>(
    (int *)v7[1],
    (unsigned int *)(v3 + 8),
    (unsigned int *)(v3 + 12),
    (const wchar_t **)v8,
    (unsigned __int16 *)(v3 + 184),
    (unsigned __int16 *)(v3 + 186),
    (bool *)(v3 + 456),
    (bool *)(v3 + 440),
    (unsigned __int16 *)(v3 + 1004),
    (unsigned __int16 *)(v3 + 1006),
    (unsigned __int16 *)(v3 + 1008),
    (bool *)&v6,
    (char *)(v3 + 1022),
    (unsigned int *)(v3 + 964),
    (unsigned int *)v7[2],
    (struct SpatialInteractionDevices::PoseData *)(v3 + 508),
    (struct SpatialInteractionDevices::PoseData *)(v3 + 540));
  std::wstring::wstring(v9, (__int64)StringRawBuffer);
  Windows::Internal::Holographic::HolographicDeviceSnapshot::AddSpatialInteractionDeviceIdMapping(*v4 + 8, v9);
  if ( v10 >= 8 )
    std::_Deallocate<16,0>(v9[0], (const struct std::nothrow_t *)(2 * v10 + 2));
  result = *(_BYTE *)(*v4 + 105);
  *(_BYTE *)(*v4 + 105) = 1;
  return result;
}
