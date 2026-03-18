/*
 * XREFs of ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801E9F18
 * Callers:
 *     ?ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801E9EB0 (-ApplyAllPropertiesToSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@.c)
 *     ?OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x1801E9FFC (-OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  void (__fastcall *v2)(struct ISpectreMaterial *, __int128 *); // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(void (__fastcall **)(struct ISpectreMaterial *, __int128 *))(*(_QWORD *)a2 + 40LL);
  v3 = *(_OWORD *)((char *)this + 136);
  v2(a2, &v3);
}
