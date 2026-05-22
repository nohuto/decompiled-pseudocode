/*
 * XREFs of ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x180086440
 * Callers:
 *     ?StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z @ 0x180084A70 (-StabilizeTargetRay@MPCInputProviderBase@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@AEAV2@@Z @ 0x180085040 (--$emplace_front@AEAVRayStabilizationResult@@@-$deque@VRayStabilizationResult@@V-$allocator@VRay.c)
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800855B0 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180085890 (-PerformDynamicExponential@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x180085C5C (-PerformLowPassFilterStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 *     ?GetStabilizedRay@RayStabilizationResult@@QEBA?AUTargetingRay@@XZ @ 0x180086BB0 (-GetStabilizedRay@RayStabilizationResult@@QEBA-AUTargetingRay@@XZ.c)
 */

void __fastcall RayStabilizer::StabilizeInput(__m128 *this, struct InputInfo *a2)
{
  bool v2; // zf
  __int128 v4; // xmm0
  __int64 v6; // xmm1_8
  __int32 v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 StabilizedRay; // rax
  char v11[32]; // [rsp+20h] [rbp-A8h] BYREF
  int v12; // [rsp+40h] [rbp-88h] BYREF
  __int128 v13; // [rsp+44h] [rbp-84h]
  __int64 v14; // [rsp+54h] [rbp-74h]

  v2 = this[2].m128_u64[0] == 0;
  v4 = *(_OWORD *)((char *)a2 + 120);
  v12 = 1;
  v6 = *((_QWORD *)a2 + 17);
  v13 = v4;
  v14 = v6;
  if ( !v2 )
  {
    v7 = this[2].m128_i32[3];
    if ( (v7 & 1) != 0 )
    {
      RayStabilizer::PerformLowPassFilterStabilization((RayStabilizer *)this, (struct RayStabilizationResult *)&v12);
      v7 = this[2].m128_i32[3];
    }
    if ( (v7 & 2) != 0 )
    {
      RayStabilizer::PerformDropOffStabilization(this, (struct RayStabilizationResult *)&v12);
      v7 = this[2].m128_i32[3];
    }
    if ( (v7 & 4) != 0 )
      RayStabilizer::PerformDynamicExponential((RayStabilizer *)this, (struct RayStabilizationResult *)&v12);
  }
  std::deque<RayStabilizationResult>::emplace_front<RayStabilizationResult &>((__int64 **)this, (__int64)&v12);
  v8 = this[2].m128_u32[2];
  v9 = this[2].m128_u64[0];
  while ( v8 < v9 )
  {
    this[2].m128_u64[0] = --v9;
    if ( !v9 )
      this[1].m128_u64[1] = 0LL;
  }
  StabilizedRay = RayStabilizationResult::GetStabilizedRay(&v12, v11);
  *(_OWORD *)((char *)a2 + 120) = *(_OWORD *)StabilizedRay;
  *((_QWORD *)a2 + 17) = *(_QWORD *)(StabilizedRay + 16);
}
