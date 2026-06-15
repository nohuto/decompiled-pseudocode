/*
 * XREFs of ?CreateApoEndpointInstance@CEndpointInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@IPEAPEAV1@@Z @ 0x14004A5A0
 * Callers:
 *     ?CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140046918 (-CreateApoEndpointInstance@CPipeInstance@@QEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessin.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012E2C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14003CB6C (--$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESC.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14004A3F0 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointInstance::CreateApoEndpointInstance(
        struct IDeviceGraphObjectCache *a1,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IAudioProcessingObject *a3,
        struct IAudioMediaType *a4,
        unsigned int a5,
        struct CEndpointInstance **a6)
{
  struct CEndpointInstance **v6; // rdi
  int v7; // ebx
  struct CEndpointInstance **v8; // rax
  struct BRIDGE_STREAM_DESCRIPTOR *v10; // [rsp+30h] [rbp-10h] BYREF
  struct IDeviceGraphObjectCache *v11; // [rsp+38h] [rbp-8h] BYREF
  struct IAudioEndpointRT *v12; // [rsp+60h] [rbp+20h] BYREF
  struct CEndpointInstance **v13; // [rsp+68h] [rbp+28h]
  struct IAudioMediaType *v14; // [rsp+70h] [rbp+30h] BYREF
  struct IAudioProcessingObject *v15; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v6 = a6;
  *a6 = 0LL;
  v14 = a4;
  v15 = a3;
  v10 = a2;
  v11 = a1;
  v12 = 0LL;
  a6 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a6);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CApoEndpoint,CApoEndpoint,IDeviceGraphObjectCache * &,BRIDGE_STREAM_DESCRIPTOR * &,IAudioProcessingObject * &,IAudioMediaType * &,unsigned int &>(
         (CApoEndpoint **)&a6,
         &v11,
         &v10,
         &v15,
         &v14,
         &a5);
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(struct CEndpointInstance **, GUID *, struct IAudioEndpointRT **))*a6)(
           a6,
           &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
           &v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a6);
  if ( v7 < 0 )
    goto LABEL_8;
  v8 = (struct CEndpointInstance **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  a6 = v8;
  if ( v8 )
    v8 = (struct CEndpointInstance **)CEndpointInstance::CEndpointInstance(
                                        (CEndpointInstance *)v8,
                                        (struct IUnknown *)v12,
                                        0LL,
                                        0LL);
  v13 = v8;
  if ( !v8 )
  {
    v7 = -2147024882;
LABEL_8:
    AudDGTraceLoggingErrorHelper("CEndpointInstance::CreateApoEndpointInstance", 0x27Du, v7);
    goto LABEL_9;
  }
  v13 = 0LL;
  *v6 = (struct CEndpointInstance *)v8;
LABEL_9:
  if ( v12 )
    ((void (__fastcall *)(struct IAudioEndpointRT *))v12->lpVtbl->Release)(v12);
  return (unsigned int)v7;
}
