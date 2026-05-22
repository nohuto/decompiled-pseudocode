/*
 * XREFs of ?OnDeviceRemoved@SpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800DBBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D44EC (--$As@UISpatialInteractionSourceDeviceCollectionInternal@SpatialInteractions@Internal@Windows@@@.c)
 *     ?reset@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ @ 0x1800DD4D4 (-reset@-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice::OnDeviceRemoved(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *this)
{
  RTL_SRWLOCK *v2; // r14
  int v3; // eax
  int v4; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdx
  std::_Ref_count_base *v10[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v12; // [rsp+50h] [rbp+20h] BYREF
  RTL_SRWLOCK *v13; // [rsp+58h] [rbp+28h]

  v2 = (RTL_SRWLOCK *)((char *)this + 200);
  AcquireSRWLockExclusive((PSRWLOCK)this + 25);
  v13 = v2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 26);
  if ( *((_QWORD *)this + 27) )
  {
    v12 = 0LL;
    v3 = Microsoft::WRL::WeakRef::As<Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal>(
           (_QWORD *)this + 9,
           &v12);
    v4 = v3;
    if ( v3 < 0 )
    {
      v5 = (unsigned int)v3;
      v6 = 75LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)v5);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
      goto LABEL_16;
    }
    v7 = v12;
    if ( !v12 )
    {
      v4 = -2147418113;
      v6 = 76LL;
LABEL_12:
      v5 = (unsigned int)v4;
      goto LABEL_13;
    }
    *(_OWORD *)v10 = 0LL;
    v8 = (volatile signed __int32 *)*((_QWORD *)this + 28);
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = (volatile signed __int32 *)*((_QWORD *)this + 28);
      v7 = v12;
    }
    v10[0] = *((std::_Ref_count_base **)this + 27);
    v10[1] = (std::_Ref_count_base *)v8;
    v4 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeObjectDevice *, std::_Ref_count_base **))(*(_QWORD *)v7 + 56LL))(
           v7,
           this,
           v10);
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
    if ( v4 < 0 )
    {
      v6 = 77LL;
      goto LABEL_12;
    }
    std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::reset((char *)this + 216);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v12);
  }
  v4 = 0;
LABEL_16:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v4;
}
