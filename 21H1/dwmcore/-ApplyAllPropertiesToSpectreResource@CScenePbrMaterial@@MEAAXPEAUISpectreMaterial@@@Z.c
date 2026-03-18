/*
 * XREFs of ?ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801EE9E0
 * Callers:
 *     ?ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801EE670 (-ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEA94 (-ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEAEC (-ApplyEmissiveInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEC18 (-ApplyNormalInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EEC5C (-ApplyOcclusionInputToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
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
