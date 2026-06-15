/*
 * XREFs of VerifyCriticalProcessing @ 0x180122AB8
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x1801227A0 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180047B78 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     GetPackedSysFx2List @ 0x18012245C (GetPackedSysFx2List.c)
 *     ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x180123210 (-LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z.c)
 *     ?GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z @ 0x1801268AC (-GetAtmosCheckInstance@CSpatialAudioTech@@CAJPEAPEAVAtmosCheck@@@Z.c)
 *     ?IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z @ 0x180136EB4 (-IsSpeakerOverrideEnabled@AtmosCheck@@QEAAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VerifyCriticalProcessing(CEndpointCharacteristics *a1, __int64 a2, bool *a3)
{
  int IsSpeakerOverrideEnabled; // esi
  unsigned __int16 *v7; // r15
  int v8; // eax
  int v9; // ebx
  int PackedSysFx2List; // ebx
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // r8d
  LPVOID pv; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int16 *v16; // [rsp+28h] [rbp-18h] BYREF
  GUID v17; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct AtmosCheck *v19; // [rsp+80h] [rbp+40h] BYREF
  int v20; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0;
  v16 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v16,
    0LL);
  if ( (int)mmdDevGetInterfaceIdFromMMDevice(a2, &v16) < 0 )
    goto LABEL_10;
  IsSpeakerOverrideEnabled = 0;
  v7 = v16;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v19);
  v8 = CSpatialAudioTech::GetAtmosCheckInstance(&v19);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( v19 )
    {
      IsSpeakerOverrideEnabled = AtmosCheck::IsSpeakerOverrideEnabled(v19, v7);
      v9 = 0;
    }
    else
    {
      v9 = -2147418113;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80,
      (__int64)"avcore\\audiocore\\server\\lib\\spatialsettings\\SpatialProviders.h",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v19);
  if ( v9 >= 0 && IsSpeakerOverrideEnabled )
  {
    *a3 = 1;
    PackedSysFx2List = 0;
  }
  else
  {
LABEL_10:
    v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    PackedSysFx2List = GetPackedSysFx2List(a1, &v17, &v20);
    if ( PackedSysFx2List >= 0 )
    {
      v17 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      PackedSysFx2List = GetPackedSysFx2List(a1, &v17, &v19);
      if ( PackedSysFx2List >= 0 )
      {
        v11 = v20 | (unsigned int)v19;
        *a3 = ((v20 | (unsigned int)v19) & 0x28800) == 0;
        pv = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v12 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv);
        PackedSysFx2List = v12;
        if ( v12 >= 0 )
        {
          LogSpatialCriticalProcessingList((const unsigned __int16 *)pv, v11, v13, *a3);
          PackedSysFx2List = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xFE,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v12);
        }
        if ( pv )
          CoTaskMemFree(pv);
      }
    }
  }
  if ( v16 )
    CoTaskMemFree(v16);
  return (unsigned int)PackedSysFx2List;
}
