/*
 * XREFs of ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x18008003C
 * Callers:
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800812F0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011CD0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     sqrtf_0 @ 0x18004A60B (sqrtf_0.c)
 *     memcpy_0 @ 0x18004A63B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079A68 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x180082110 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 *__fastcall MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(
        MPCSpatialGestureRecognizerHandler *a1,
        unsigned __int64 *a2,
        __int64 a3)
{
  int v6; // eax
  int updated; // eax
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 *); // rbx
  int v9; // eax
  int v10; // eax
  float v11; // xmm0_4
  struct MPCHolographicInputManager *Instance; // rax
  float *v13; // rax
  __int64 v14; // rcx
  float v15; // xmm6_4
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm3
  __m128 v20; // xmm4
  float v21; // xmm5_4
  __m128 v22; // xmm1
  __m128 v23; // xmm2
  float v24; // xmm0_4
  float v25; // xmm6_4
  __int64 v27; // [rsp+28h] [rbp-E0h] BYREF
  float v28[2]; // [rsp+30h] [rbp-D8h] BYREF
  float v29; // [rsp+38h] [rbp-D0h]
  char v30[64]; // [rsp+48h] [rbp-C0h] BYREF
  float v31[564]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+970h] [rbp+868h]
  __int64 v33; // [rsp+988h] [rbp+880h] BYREF
  int v34; // [rsp+990h] [rbp+888h] BYREF

  *a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v34);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      564LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  if ( v34 == 1 )
  {
    updated = MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(a1, *((_QWORD *)a1 + 20));
    if ( updated < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        568LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)updated);
      __debugbreak();
    }
    v33 = 0LL;
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v33);
    v9 = v8(a3, *((_QWORD *)a1 + 16), &v33);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        571LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    if ( v33 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v33 + 48LL))(v33, a2);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          574LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v33);
  }
  else if ( v34 == 3 )
  {
    v27 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a3)(a3, &GUID_dbedfb55_5c2b_443b_a82d_10a749076fc8, &v27) >= 0 )
    {
      LOBYTE(v33) = 0;
      if ( (*(int (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v27 + 48LL))(v27, v28, &v33) >= 0 )
      {
        if ( (_BYTE)v33 )
        {
          v11 = v28[0] * 0.0174532925199433;
          *(float *)a2 = v11;
          *((float *)a2 + 1) = v28[1] * 0.0174532925199433;
          *((_DWORD *)a2 + 2) = 0;
        }
      }
    }
    Instance = MPCHolographicInputManager::GetInstance();
    memcpy_0(v30, Instance, 0x8F0uLL);
    v13 = Windows::Foundation::Numerics::transform(v28, (float *)a2, v31);
    *a2 = *(_QWORD *)v13;
    *((float *)a2 + 2) = v13[2];
    v14 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = sqrtf_0(
          (float)((float)(*((float *)a2 + 1) * *((float *)a2 + 1)) + (float)(*(float *)a2 * *(float *)a2))
        + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)));
  if ( v15 > 0.037999999 )
  {
    v16 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
    v17 = _mm_mul_ps(v16, v16);
    v18 = _mm_shuffle_ps(v17, v17, 102);
    v17.m128_f32[0] = (float)(v17.m128_f32[0] + v18.m128_f32[0]) + _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
    v19 = _mm_div_ps(v16, _mm_sqrt_ps(_mm_shuffle_ps(v17, v17, 0)));
    v20 = _mm_shuffle_ps(v19, v19, 85);
    v21 = _mm_shuffle_ps(v19, v19, 170).m128_f32[0];
    v22 = v19;
    v22.m128_f32[0] = v19.m128_f32[0] * 0.037999999;
    v23 = v20;
    v23.m128_f32[0] = v20.m128_f32[0] * 0.037999999;
    v29 = v21 * 0.037999999;
    *a2 = _mm_unpacklo_ps(v22, v23).m128_u64[0];
    *((float *)a2 + 2) = v29;
    if ( v34 == 3 )
      v24 = FLOAT_0_5;
    else
      v24 = FLOAT_2_1500001;
    v25 = v15 - 0.037999999;
    *(float *)a2 = (float)((float)(v19.m128_f32[0] * v25) * v24) + *(float *)a2;
    *((float *)a2 + 1) = (float)((float)(v20.m128_f32[0] * v25) * v24) + *((float *)a2 + 1);
    *((float *)a2 + 2) = (float)((float)(v21 * v25) * v24) + *((float *)a2 + 2);
  }
  return a2;
}
