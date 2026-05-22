/*
 * XREFs of ?StopListeningToSpatialObjects@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DCA90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D457C (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ?reset@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ @ 0x1800DD564 (-reset@-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::StopListeningToSpatialObjects(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  std::_Ref_count_base **v3; // rdi
  int v4; // eax
  unsigned int v5; // r14d
  __int64 v7; // rcx
  volatile signed __int32 *Ptr; // rdx
  int v9; // esi
  const char *v10; // r9
  std::_Ref_count_base *v11[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v14; // [rsp+58h] [rbp+10h]

  v2 = this + 25;
  AcquireSRWLockExclusive(this + 25);
  v14 = v2;
  v3 = (std::_Ref_count_base **)&this[27];
  if ( this[27].Ptr )
  {
    v13 = 0LL;
    v4 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
           &this[9].Ptr,
           &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)(unsigned int)v4);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      return v5;
    }
    v7 = v13;
    if ( !v13 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)0x8000FFFFLL);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      return 2147549183LL;
    }
    *(_OWORD *)v11 = 0LL;
    Ptr = (volatile signed __int32 *)this[28].Ptr;
    if ( Ptr )
    {
      _InterlockedIncrement(Ptr + 2);
      Ptr = (volatile signed __int32 *)this[28].Ptr;
      v7 = v13;
    }
    try
    {
      v11[0] = *v3;
      v11[1] = (std::_Ref_count_base *)Ptr;
      v9 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *, std::_Ref_count_base **))(*(_QWORD *)v7 + 56LL))(
             v7,
             this,
             v11);
      if ( v11[1] )
        std::_Ref_count_base::_Decref(v11[1]);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x6F,
                             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
                             v10);
    }
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      return (unsigned int)v9;
    }
    std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::reset(v3);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
