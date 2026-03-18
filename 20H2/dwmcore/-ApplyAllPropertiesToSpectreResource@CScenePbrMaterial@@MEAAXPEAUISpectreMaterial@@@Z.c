/*
 * XREFs of ?ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801EA220
 * Callers:
 *     ?ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801E9EB0 (-ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EA2D4 (-ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EA32C (-ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EA458 (-ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EA49C (-ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CScenePbrMaterial::ApplyAllPropertiesToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v4; // rdx

  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 24LL))(a2);
  (*(void (__fastcall **)(struct ISpectreMaterial *, _QWORD))(*(_QWORD *)a2 + 32LL))(a2, *((unsigned int *)this + 21));
  CScenePbrMaterial::ApplyEmissiveFactorToSpectreResource(this, a2);
  CScenePbrMaterial::ApplyEmissiveInputToSpectreResource(this, a2);
  LOBYTE(v4) = *((_BYTE *)this + 100);
  (*(void (__fastcall **)(struct ISpectreMaterial *, __int64))(*(_QWORD *)a2 + 56LL))(a2, v4);
  CScenePbrMaterial::ApplyNormalInputToSpectreResource(this, a2);
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 72LL))(a2);
  CScenePbrMaterial::ApplyOcclusionInputToSpectreResource(this, a2);
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 80LL))(a2);
}
