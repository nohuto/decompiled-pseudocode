/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@@Z @ 0x1800958D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x1800898E4 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x1800939D8 (-HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInput.c)
 *     ?IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z @ 0x180094040 (-IsEnabled@RawInputProvidersContinuousTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersContinuousTracing@@P6AXXZ@Z @ 0x180096D18 (-get@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAAPEAVRawInputProvidersC.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendInputReport(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        __int128 *a6)
{
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // rax
  char *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rcx
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37[12]; // [rsp+30h] [rbp-D0h] BYREF
  char v38; // [rsp+60h] [rbp-A0h]
  char v39; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int128 v40; // [rsp+7D8h] [rbp+6D8h]
  __int128 v41; // [rsp+7E8h] [rbp+6E8h]
  __int128 v42; // [rsp+7F8h] [rbp+6F8h]
  __int128 v43; // [rsp+808h] [rbp+708h]
  wil::details::in1diag3 *retaddr; // [rsp+868h] [rbp+768h]

  memset_0(v37, 0, 0x7F0uLL);
  v37[6] = 2032;
  v11 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a2, a3, 512, a4, (__int64)v37);
  if ( v11 < 0 )
  {
    v12 = 528LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v14 = 9LL;
  v38 = 1;
  v15 = &v39;
  do
  {
    v16 = a5[1];
    *(_OWORD *)v15 = *a5;
    v17 = a5[2];
    *((_OWORD *)v15 + 1) = v16;
    v18 = a5[3];
    *((_OWORD *)v15 + 2) = v17;
    v19 = a5[4];
    *((_OWORD *)v15 + 3) = v18;
    v20 = a5[5];
    *((_OWORD *)v15 + 4) = v19;
    v21 = a5[6];
    *((_OWORD *)v15 + 5) = v20;
    v22 = a5[7];
    a5 += 8;
    *((_OWORD *)v15 + 6) = v21;
    v15 += 128;
    *((_OWORD *)v15 - 1) = v22;
    --v14;
  }
  while ( v14 );
  v23 = *((_QWORD *)a5 + 12);
  v24 = a5[1];
  *(_OWORD *)v15 = *a5;
  v25 = a5[2];
  *((_OWORD *)v15 + 1) = v24;
  v26 = a5[3];
  *((_OWORD *)v15 + 2) = v25;
  v27 = a5[4];
  *((_OWORD *)v15 + 3) = v26;
  v28 = a5[5];
  *((_OWORD *)v15 + 4) = v27;
  v29 = *a6;
  *((_OWORD *)v15 + 5) = v28;
  *((_QWORD *)v15 + 12) = v23;
  v30 = a6[1];
  v31 = *(_QWORD *)(a1 - 2744);
  v40 = v29;
  v32 = a6[2];
  v41 = v30;
  v33 = a6[3];
  v42 = v32;
  v43 = v33;
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v31 + 24LL))(v31, v37);
  if ( v11 < 0 )
  {
    v12 = 534LL;
    goto LABEL_3;
  }
  if ( RawInputProvidersContinuousTracing::IsEnabled(v34) )
  {
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::get(
      v35,
      _lambda_f655bc6deafeea110b0bcdbdac4bd35f_::_lambda_invoker_cdecl_);
    RawInputProvidersContinuousTracing::HandInputReportProcessed_(v36, a4, a3, (__int64)v37);
  }
  return 0LL;
}
