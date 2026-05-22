/*
 * XREFs of ??$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAnimationDataProvider@@@Z @ 0x18002C340
 * Callers:
 *     ?Create@AnimationDataProvider@@SA?AV?$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ @ 0x18002C304 (-Create@AnimationDataProvider@@SA-AV-$ComPtr@UIAnimationDataProvider@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??0AnimationDataProvider@@QEAA@XZ @ 0x18002C580 (--0AnimationDataProvider@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D2E0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AnimationDataProvider,IAnimationDataProvider,>(
        _QWORD *a1)
{
  AnimationDataProvider *v2; // rax
  AnimationDataProvider *v3; // rbx
  int v4; // edi

  *a1 = 0LL;
  v2 = (AnimationDataProvider *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = AnimationDataProvider::AnimationDataProvider(v2);
    v4 = (*(__int64 (__fastcall **)(AnimationDataProvider *))(*(_QWORD *)v3 + 72LL))(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(AnimationDataProvider *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_c2b8d4a1_8c81_48a7_b9ab_171b2a64dd6e,
             a1);
    (*(void (__fastcall **)(AnimationDataProvider *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
