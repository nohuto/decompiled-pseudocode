/*
 * XREFs of ??$emplace_front@AEAVRayStabilizationResult@@@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@QEAAAEAVRayStabilizationResult@@AEAV2@@Z @ 0x180084FA0
 * Callers:
 *     ?StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z @ 0x1800863A0 (-StabilizeInput@RayStabilizer@@QEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@VRayStabilizationResult@@V?$allocator@VRayStabilizationResult@@@std@@@std@@AEAAX_K@Z @ 0x180086654 (-_Growmap@-$deque@VRayStabilizationResult@@V-$allocator@VRayStabilizationResult@@@std@@@std@@AEA.c)
 */

__int64 __fastcall std::deque<RayStabilizationResult>::emplace_front<RayStabilizationResult &>(
        __int64 **a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  bool v5; // zf
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 *v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rcx

  v4 = (unsigned __int64)a1[2];
  if ( v4 <= (unsigned __int64)a1[4] + 1 )
  {
    std::deque<RayStabilizationResult>::_Growmap(a1);
    v4 = (unsigned __int64)a1[2];
  }
  v5 = ((v4 - 1) & (unsigned __int64)a1[3]) == 0;
  a1[3] = (__int64 *)((v4 - 1) & (unsigned __int64)a1[3]);
  v6 = a1[3];
  if ( v5 )
    v6 = a1[2];
  v7 = 0LL;
  v8 = (__int64 *)((char *)v6 - 1);
  v9 = a1[1];
  v10 = (unsigned __int64)v8 & ((unsigned __int64)a1[2] - 1);
  if ( !v9[v10] )
  {
    a1[1][v10] = (__int64)std::_Allocate<16,std::_Default_allocate_traits,0>(0x64uLL);
    v9 = a1[1];
  }
  v11 = v9[v10];
  *(_OWORD *)v11 = *(_OWORD *)a2;
  *(_OWORD *)(v11 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v11 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v11 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v11 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(v11 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(v11 + 96) = *(_DWORD *)(a2 + 96);
  a1[4] = (__int64 *)((char *)a1[4] + 1);
  a1[3] = v8;
  if ( *a1 )
    v7 = **a1;
  return *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((unsigned __int64)v8 & (*(_QWORD *)(v7 + 16) - 1LL)));
}
