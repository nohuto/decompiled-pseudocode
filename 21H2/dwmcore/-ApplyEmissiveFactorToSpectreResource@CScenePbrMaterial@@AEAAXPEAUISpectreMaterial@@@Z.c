/*
 * XREFs of ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x1801EB014
 * Callers:
 *     ?ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x1801EAF60 (-ApplyAllPropertiesToSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1801EB390 (-OnEmissiveFactorChanged@CScenePbrMaterial@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScenePbrMaterial::ApplyEmissiveFactorToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // xmm0_8
  __int64 v3; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  v2 = *((_QWORD *)this + 11);
  v5 = *((_DWORD *)this + 24);
  v3 = *(_QWORD *)a2;
  v4 = v2;
  (*(void (__fastcall **)(struct ISpectreMaterial *, __int64 *))(v3 + 48))(a2, &v4);
}
