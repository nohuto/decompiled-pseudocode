/*
 * XREFs of ?ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801EE670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EE6D8 (-ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMateria.c)
 *     ?ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EE72C (-ApplyBaseColorInputToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial.c)
 *     ?ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801EE9E0 (-ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyAllPropertiesToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  CScenePbrMaterial::ApplyAllPropertiesToSpectreResource(this, a2);
  CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(this, a2);
  CSceneMetallicRoughnessMaterial::ApplyBaseColorInputToSpectreResource(this, a2);
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 64LL))(a2);
  CSceneMetallicRoughnessMaterial::ApplyMetallicRoughnessInputToSpectreResource(this, a2);
}
