/*
 * XREFs of ?StartListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DC6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D457C (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ??$make_shared@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@PEB_WPEAUISpatialObjectDevice@Holographic@34@PEAUISpatialObject@634@@std@@YA?AV?$shared_ptr@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@@0@$$QEAPEB_W$$QEAPEAUISpatialObjectDevice@Holographic@Internal@Windows@@$$QEAPEAUISpatialObject@345@@Z @ 0x1800DB164 (--$make_shared@VSpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@PEB_.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StartListeningToSpatialObjects(
        RTL_SRWLOCK *this)
{
  wchar_t *v2; // rdi
  const wchar_t *v3; // rax
  void **v4; // rax
  void *v5; // rcx
  const wchar_t *v6; // rdx
  std::_Ref_count_base *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // [rsp+30h] [rbp-78h] BYREF
  std::_Ref_count_base *v16[2]; // [rsp+38h] [rbp-70h] BYREF
  struct Windows::Internal::Holographic::ISpatialObject *Ptr; // [rsp+48h] [rbp-60h] BYREF
  struct Windows::Internal::Holographic::ISpatialObjectDevice *v18; // [rsp+50h] [rbp-58h] BYREF
  const wchar_t *v19[3]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h] BYREF
  std::_Ref_count_base *v21; // [rsp+78h] [rbp-30h]
  _BYTE v22[16]; // [rsp+80h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v2 = (wchar_t *)&this[25];
  AcquireSRWLockExclusive(this + 25);
  v19[1] = v2;
  if ( this[26].Ptr )
  {
    Ptr = (struct Windows::Internal::Holographic::ISpatialObject *)this[26].Ptr;
    v18 = (struct Windows::Internal::Holographic::ISpatialObjectDevice *)this[15].Ptr;
    v3 = (const wchar_t *)&this[10];
    if ( this[13].Ptr >= (PVOID)8 )
      v3 = *(const wchar_t **)v3;
    v19[0] = v3;
    v4 = (void **)std::make_shared<Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject,wchar_t const *,Windows::Internal::Holographic::ISpatialObjectDevice *,Windows::Internal::Holographic::ISpatialObject *>(
                    &v20,
                    v19,
                    &v18,
                    &Ptr);
    v5 = *v4;
    v6 = (const wchar_t *)v4[1];
    *v4 = 0LL;
    v4[1] = 0LL;
    this[27].Ptr = v5;
    v19[2] = v6;
    v7 = (std::_Ref_count_base *)this[28].Ptr;
    this[28].Ptr = (PVOID)v6;
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    v15 = 0LL;
    v8 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
           &this[9].Ptr,
           &v15);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5C,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
      if ( v2 )
        ReleaseSRWLockExclusive((PSRWLOCK)v2);
      return v9;
    }
    v11 = v15;
    if ( !v15 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
      if ( v2 )
        ReleaseSRWLockExclusive((PSRWLOCK)v2);
      return 2147549183LL;
    }
    *(_OWORD *)v16 = 0LL;
    v12 = (volatile signed __int32 *)this[28].Ptr;
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = (volatile signed __int32 *)this[28].Ptr;
      v11 = v15;
    }
    v16[0] = (std::_Ref_count_base *)this[27].Ptr;
    v16[1] = (std::_Ref_count_base *)v12;
    v13 = (*(__int64 (__fastcall **)(PVOID, _BYTE *))(*(_QWORD *)this[26].Ptr + 48LL))(this[26].Ptr, v22);
    v14 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, __int64, std::_Ref_count_base **))(*(_QWORD *)v11 + 48LL))(
            v11,
            this,
            v13,
            v16);
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
      if ( v2 )
        ReleaseSRWLockExclusive((PSRWLOCK)v2);
      return (unsigned int)v14;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v15);
  }
  if ( v2 )
    ReleaseSRWLockExclusive((PSRWLOCK)v2);
  return 0LL;
}
