/*
 * XREFs of ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x1801EEB30
 * Callers:
 *     ?ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EE72C (-ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial.c)
 *     ?ApplyMetallicRoughnessInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EE774 (-ApplyMetallicRoughnessInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectre.c)
 *     ?ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEAEC (-ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEC18 (-ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEC5C (-ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScenePbrMaterial::ApplyInputToSpectreResource(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // r15
  __int64 v8; // rax
  __int128 *v9; // r14
  unsigned __int64 v10; // rbp
  void (__fastcall *v11)(__int64, __int128 *, __int64, __int64); // r13
  __int128 v12; // xmm0
  __int64 v13; // rbx
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]

  v4 = 0LL;
  v7 = 0LL;
  if ( a4 )
  {
    v8 = *(_QWORD *)(a4 + 72);
    if ( v8 )
      v4 = *(_QWORD *)(v8 + 144);
    v7 = *(_QWORD *)(a4 + 64);
  }
  v9 = a3;
  v10 = *((_QWORD *)a3 + 2);
  v11 = *(void (__fastcall **)(__int64, __int128 *, __int64, __int64))(*(_QWORD *)a2 + 96LL);
  if ( *((_QWORD *)a3 + 3) >= 0x10uLL )
    v9 = *(__int128 **)a3;
  if ( v10 >= 0x10 )
  {
    v13 = v10 | 0xF;
    if ( (v10 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v13 = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)&v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13 + 1);
    memcpy_0((void *)v14, v9, v10 + 1);
    v16 = v13;
  }
  else
  {
    v12 = *v9;
    v16 = 15LL;
    v14 = v12;
  }
  v15 = v10;
  v11(a2, &v14, v4, v7);
  std::string::_Tidy_deallocate((__int64)a3);
}
