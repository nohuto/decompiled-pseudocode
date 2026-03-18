/*
 * XREFs of ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x18023D854
 * Callers:
 *     ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x18023D770 (-PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x18023DD9C (-PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x180199B14 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 */

void __fastcall CScenePbrMaterial::ApplyInputToSpectreResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct ISpectreTexture *v4; // r14
  __int64 v5; // r15
  struct CResource *v9; // rdx
  __int128 *v10; // rbp
  unsigned __int64 v11; // rsi
  void (__fastcall *v12)(__int64, __int128 *, struct ISpectreTexture *, __int64); // r13
  __int128 v13; // xmm0
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  struct ISpectreTexture *v16; // [rsp+30h] [rbp-78h] BYREF
  __int128 v17; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-60h]
  __int64 v19; // [rsp+50h] [rbp-58h]

  v4 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  if ( a4 )
  {
    v9 = *(struct CResource **)(a4 + 80);
    if ( v9 )
    {
      CSceneResourceManager::GetSpectreTexture(*(CSceneResourceManager **)(*(_QWORD *)(a1 + 16) + 288LL), v9, &v16);
      v4 = v16;
    }
    v5 = *(_QWORD *)(a4 + 72);
  }
  v10 = (__int128 *)a3;
  v11 = *(_QWORD *)(a3 + 16);
  v12 = *(void (__fastcall **)(__int64, __int128 *, struct ISpectreTexture *, __int64))(*(_QWORD *)a2 + 96LL);
  if ( *(_QWORD *)(a3 + 24) >= 0x10uLL )
    v10 = *(__int128 **)a3;
  if ( v11 >= 0x10 )
  {
    v14 = v11 | 0xF;
    if ( (v11 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v17 = std::_Allocate<16,std::_Default_allocate_traits,0>(v14 + 1);
    memcpy_0((void *)v17, v10, v11 + 1);
    v19 = v14;
  }
  else
  {
    v13 = *v10;
    v19 = 15LL;
    v17 = v13;
  }
  v18 = v11;
  v12(a2, &v17, v4, v5);
  v15 = *(_QWORD *)(a3 + 24);
  if ( v15 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a3, v15 + 1);
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 24) = 15LL;
  *(_BYTE *)a3 = 0;
}
