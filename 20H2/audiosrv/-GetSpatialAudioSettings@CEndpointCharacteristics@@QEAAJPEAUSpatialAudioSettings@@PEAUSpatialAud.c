/*
 * XREFs of ?GetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@_KPEAI@Z @ 0x18002A310
 * Callers:
 *     ?GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180028AA0 (-GetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x180029DAC (Create_SpatialAudioDevicePropertyReader.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetSpatialAudioSettings(
        struct IPropertyStore **this,
        struct SpatialAudioSettings *a2,
        struct SpatialAudioEncoderDescriptor *a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  unsigned int v8; // esi
  unsigned int *v9; // rdi
  int SpatialAudioDevicePropertyReader; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // [rsp+20h] [rbp-38h]
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v16[0] = 0LL;
  v18 = 0;
  v8 = 0;
  v9 = a5;
  if ( a3 && !a5 )
  {
    v11 = -2147024809;
    v13 = 7096LL;
LABEL_15:
    v14 = v11;
    goto LABEL_16;
  }
  v16[0] = 0LL;
  SpatialAudioDevicePropertyReader = Create_SpatialAudioDevicePropertyReader(0LL, this[5], v16);
  v11 = SpatialAudioDevicePropertyReader;
  if ( SpatialAudioDevicePropertyReader < 0 )
  {
    v14 = (unsigned int)SpatialAudioDevicePropertyReader;
    v13 = 7098LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v14,
      v15);
    goto LABEL_9;
  }
  if ( v9 )
  {
    *v9 = 0;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v16[0] + 96LL))(v16[0], &v18) >= 0 )
    {
      if ( a3 )
      {
        v8 = 834 * v18;
        if ( a4 < 834 * v18 )
        {
          v11 = -2147024774;
          v13 = 7108LL;
          goto LABEL_15;
        }
      }
    }
  }
  if ( (*(int (__fastcall **)(__int64, struct SpatialAudioSettings *, struct SpatialAudioEncoderDescriptor *, _QWORD))(*(_QWORD *)v16[0] + 104LL))(
         v16[0],
         a2,
         a3,
         v8) < 0 )
    memset_0(a2, 0, 0x48uLL);
  else
    *v9 = v18;
  v11 = 0;
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v16);
  return v11;
}
