/*
 * XREFs of ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000B66C
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18000C080 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 * Callees:
 *     ?make_float4x4_look_at@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@00@Z @ 0x18000D01C (-make_float4x4_look_at@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@00@Z.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x18000DA2C (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GetLightToCameraMatrix(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CCompositionLight *a3,
        const struct Windows::Foundation::Numerics::float3 *a4)
{
  bool v8; // r15
  const struct CCompositionLight *v9; // rax
  int LightPosition; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  float v13; // xmm1_4
  float v14; // xmm2_4
  _OWORD *float4x4_look_at; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  struct D2D_VECTOR_3F *v20; // [rsp+28h] [rbp-29h]
  float v21; // [rsp+38h] [rbp-19h] BYREF
  float v22; // [rsp+3Ch] [rbp-15h]
  float v23; // [rsp+40h] [rbp-11h]
  float v24; // [rsp+48h] [rbp-9h] BYREF
  float v25; // [rsp+4Ch] [rbp-5h]
  float v26; // [rsp+50h] [rbp-1h]
  _BYTE v27[64]; // [rsp+58h] [rbp+7h] BYREF

  v8 = (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 232LL))(a2) == 1;
  v9 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 216LL))(a2);
  LightPosition = ShadowHelpers::GetLightPosition(this, a2, v9, (struct CVisual *)&v24, v20);
  v12 = LightPosition;
  if ( LightPosition < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, LightPosition, 0x9Au, 0LL);
  }
  else
  {
    v21 = v24;
    v22 = v25;
    v23 = v26;
    if ( v8 )
    {
      v13 = v25 + *((float *)a3 + 1);
      v14 = v26 + *((float *)a3 + 2);
      v21 = v24 + *(float *)a3;
      v22 = v13;
      v23 = v14;
    }
    v24 = 0.0;
    v26 = 0.0;
    v25 = *(float *)&FLOAT_1_0;
    float4x4_look_at = (_OWORD *)Windows::Foundation::Numerics::make_float4x4_look_at(v27, &v21, a3, &v24);
    v16 = float4x4_look_at[1];
    v17 = float4x4_look_at[2];
    v18 = float4x4_look_at[3];
    *(_OWORD *)a4 = *float4x4_look_at;
    *((_OWORD *)a4 + 1) = v16;
    *((_OWORD *)a4 + 2) = v17;
    *((_OWORD *)a4 + 3) = v18;
    *((_DWORD *)a4 + 16) = 0;
  }
  return v12;
}
