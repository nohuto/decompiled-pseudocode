/*
 * XREFs of ?ApplyBaseColorFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x18023D514
 * Callers:
 *     ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x18023D580 (-IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 *     ?OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x18023D5EC (-OnBaseColorFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyBaseColorFactorToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)a2;
  v3 = *((_OWORD *)this + 9);
  (*(void (__fastcall **)(struct ISpectreMaterial *, __int128 *))(v2 + 40))(a2, &v3);
}
