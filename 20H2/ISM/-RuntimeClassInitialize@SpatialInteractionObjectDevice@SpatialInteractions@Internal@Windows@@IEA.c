/*
 * XREFs of ?RuntimeClassInitialize@SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@@Z @ 0x1800D8548
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Z @ 0x1800DC2C0 (-RuntimeClassInitialize@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windo.c)
 *     ?RuntimeClassInitialize@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@QEAAJPEAUISpatialInteractionSourceDeviceCollectionInternal@234@PEAUISpatialObjectDDIClientFactory@Holographic@34@PEB_WPEAUISpatialObjectDevice@734@PEAUISpatialObject@734@@Z @ 0x1800E1460 (-RuntimeClassInitialize@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@Z @ 0x18007D1F4 (--4-$ComPtr@UISpatialObjectDDIClientFactory@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAE.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x1800C6D8C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ??$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@YAJPEAUISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@PEAVWeakRef@01@@Z @ 0x1800D467C (--$AsWeak@UISpatialGraphNodePoseValidityChangedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800D5D78 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::RuntimeClassInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *a2,
        struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory *a3,
        const wchar_t *a4,
        struct Windows::Internal::Holographic::ISpatialObjectDevice *a5)
{
  unsigned __int64 v7; // r8
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v9; // rcx
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v10; // rsi
  __int64 *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *v16; // [rsp+40h] [rbp+8h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a4[v7] );
  std::wstring::assign((char *)this + 80, a4, v7);
  v9 = (struct Windows::Internal::Holographic::ISpatialObjectDevice *)*((_QWORD *)this + 15);
  v10 = a5;
  if ( v9 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *))(*(_QWORD *)a5 + 8LL))(a5);
      v9 = (struct Windows::Internal::Holographic::ISpatialObjectDevice *)*((_QWORD *)this + 15);
    }
    *((_QWORD *)this + 15) = v10;
    if ( v9 )
      (*(void (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectDevice *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialObjectDDIClientFactory>::operator=(
    (__int64 *)this + 14,
    (__int64)a3);
  v16 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal *))(*(_QWORD *)a2 + 8LL))(a2);
  a5 = (Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *)((char *)this + 72);
  v11 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&a5);
  v12 = Microsoft::WRL::AsWeak<Windows::Internal::Holographic::ISpatialGraphNodePoseValidityChangedCallback>(
          (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2,
          v11);
  v13 = v12;
  if ( v12 >= 0 )
    v13 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v12);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v16);
  return v13;
}
