/*
 * XREFs of ??$_Emplace_reallocate@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@QEAAPEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@QEAU234@$$QEAU234@@Z @ 0x180105F60
 * Callers:
 *     ?RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource@2@@Z @ 0x180108748 (-RegisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAJPEAVCStreamResource.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009324 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x1800F213C (-_Change_array@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$alloc.c)
 */

__int64 __fastcall std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Emplace_reallocate<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rcx
  _QWORD *v13; // r11
  unsigned __int64 v14; // r9
  _QWORD *v15; // rdx
  _QWORD *v16; // r10
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // r12
  unsigned __int64 v20; // r8
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rsi

  v6 = (__int64)(a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v13[v6] = *a3;
  v14 = a1[1];
  v15 = (_QWORD *)*a1;
  v16 = v13;
  v17 = 0LL;
  if ( a2 == v14 )
  {
    v18 = (v14 - (unsigned __int64)v15 + 7) >> 3;
    if ( (unsigned __int64)v15 > v14 )
      v18 = 0LL;
    if ( v18 )
    {
      do
      {
        *v16++ = *v15++;
        ++v17;
      }
      while ( v17 != v18 );
    }
  }
  else
  {
    v19 = 0LL;
    v20 = (a2 - (unsigned __int64)v15 + 7) >> 3;
    if ( (unsigned __int64)v15 > a2 )
      v20 = 0LL;
    if ( v20 )
    {
      do
      {
        *v16++ = *v15++;
        ++v19;
      }
      while ( v19 != v20 );
      v14 = a1[1];
    }
    v21 = &v13[v6 + 1];
    v22 = (v14 - a2 + 7) >> 3;
    if ( a2 > v14 )
      v22 = 0LL;
    if ( v22 )
    {
      v23 = a2 - (_QWORD)v21;
      do
      {
        *v21 = *(_QWORD *)((char *)v21 + v23);
        ++v21;
        ++v17;
      }
      while ( v17 != v22 );
    }
  }
  std::vector<Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription>::_Change_array(
    (__int64)a1,
    (__int64)v13,
    v8,
    v11);
  return *a1 + 8 * v6;
}
