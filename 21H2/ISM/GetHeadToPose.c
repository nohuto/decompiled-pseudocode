/*
 * XREFs of GetHeadToPose @ 0x1800D7668
 * Callers:
 *     ?UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEAUIPerceptionTimestamp@Perception@4@PEA_J@Z @ 0x1800DA65C (-UpdateRigTransforms@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GetHeadToPose(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v17[4]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int64 v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+B8h] [rbp+48h] BYREF

  *(_QWORD *)a4 = 1065353216LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 20) = 1065353216LL;
  *(_QWORD *)(a4 + 28) = 0LL;
  *(_DWORD *)(a4 + 36) = 0;
  *(_QWORD *)(a4 + 40) = 1065353216LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 56) = 0;
  *(_DWORD *)(a4 + 60) = 1065353216;
  v19 = 0LL;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
    v8 = (**a1)(a1, &GUID_1dc46154_efc9_4d3c_b5ce_29877f3734a9, &v19);
    if ( v8 < 0 )
      goto LABEL_18;
    goto LABEL_12;
  }
  v16 = 0LL;
  GetSystemTimePreciseAsFileTime(&v16);
  v9 = v16;
  v20 = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, v9, &v20);
  v8 = v10;
  if ( v10 < 0 )
  {
    v11 = (unsigned int)v10;
    v12 = 612LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)v11);
LABEL_10:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
    goto LABEL_18;
  }
  if ( !v20 )
  {
    v8 = -2147418113;
    v11 = 2147549183LL;
    v12 = 613LL;
    goto LABEL_8;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
  v8 = (**v20)(v20, &GUID_1dc46154_efc9_4d3c_b5ce_29877f3734a9, &v19);
  if ( v8 < 0 )
    goto LABEL_10;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v20);
LABEL_12:
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 104LL))(v19, a3);
  v8 = v13;
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v19 + 56LL))(v19, v17);
    v8 = v13;
    if ( v13 >= 0 )
    {
      *(_OWORD *)a4 = v17[0];
      *(_OWORD *)(a4 + 16) = v17[1];
      *(_OWORD *)(a4 + 32) = v17[2];
      *(_OWORD *)(a4 + 48) = v17[3];
      v8 = 0;
      goto LABEL_18;
    }
    v14 = 620LL;
  }
  else
  {
    v14 = 619LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
    (const char *)(unsigned int)v13);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
  return (unsigned int)v8;
}
