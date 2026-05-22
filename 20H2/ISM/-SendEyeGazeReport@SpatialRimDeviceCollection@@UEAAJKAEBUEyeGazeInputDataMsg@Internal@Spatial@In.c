/*
 * XREFs of ?SendEyeGazeReport@SpatialRimDeviceCollection@@UEAAJKAEBUEyeGazeInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x180095110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180089484 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendEyeGazeReport(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct Windows::UI::Input::Spatial::Internal::EyeGazeInputDataMsg *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int128 v11; // xmm1
  int v12[12]; // [rsp+30h] [rbp-808h] BYREF
  char v13; // [rsp+60h] [rbp-7D8h]
  __int128 v14; // [rsp+2F0h] [rbp-548h]
  __int128 v15; // [rsp+300h] [rbp-538h]
  __int64 v16; // [rsp+310h] [rbp-528h]
  wil::details::in1diag3 *retaddr; // [rsp+838h] [rbp+0h]

  memset_0(v12, 0, 0x7F0uLL);
  v12[6] = 2032;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 12, 0x200000, a2, (__int64)v12);
  if ( v6 < 0 )
  {
    v7 = 564LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *(_OWORD *)a3;
  v10 = *((_QWORD *)this - 343);
  v11 = *((_OWORD *)a3 + 1);
  v13 = 1;
  v14 = v9;
  v16 = *((_QWORD *)a3 + 4);
  v15 = v11;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 24LL))(v10, v12);
  if ( v6 < 0 )
  {
    v7 = 570LL;
    goto LABEL_3;
  }
  return 0LL;
}
