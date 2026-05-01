/*
 * XREFs of atexit @ 0x180044798
 * Callers:
 *     sub_180001170 @ 0x180001170 (sub_180001170.c)
 *     sub_180001190 @ 0x180001190 (sub_180001190.c)
 *     sub_180001260 @ 0x180001260 (sub_180001260.c)
 *     sub_180001280 @ 0x180001280 (sub_180001280.c)
 *     sub_180001310 @ 0x180001310 (sub_180001310.c)
 *     sub_180001400 @ 0x180001400 (sub_180001400.c)
 *     sub_180001420 @ 0x180001420 (sub_180001420.c)
 *     sub_180001460 @ 0x180001460 (sub_180001460.c)
 *     sub_1800014A0 @ 0x1800014A0 (sub_1800014A0.c)
 *     sub_1800014E0 @ 0x1800014E0 (sub_1800014E0.c)
 *     sub_180001520 @ 0x180001520 (sub_180001520.c)
 *     sub_180001560 @ 0x180001560 (sub_180001560.c)
 *     sub_1800015A0 @ 0x1800015A0 (sub_1800015A0.c)
 *     sub_1800015E0 @ 0x1800015E0 (sub_1800015E0.c)
 *     sub_180001620 @ 0x180001620 (sub_180001620.c)
 *     sub_180001660 @ 0x180001660 (sub_180001660.c)
 *     sub_1800016A0 @ 0x1800016A0 (sub_1800016A0.c)
 *     sub_1800016E0 @ 0x1800016E0 (sub_1800016E0.c)
 *     sub_180001720 @ 0x180001720 (sub_180001720.c)
 *     sub_180001760 @ 0x180001760 (sub_180001760.c)
 *     sub_1800017A0 @ 0x1800017A0 (sub_1800017A0.c)
 *     sub_1800017C0 @ 0x1800017C0 (sub_1800017C0.c)
 *     sub_180001800 @ 0x180001800 (sub_180001800.c)
 *     sub_180001820 @ 0x180001820 (sub_180001820.c)
 *     sub_180001840 @ 0x180001840 (sub_180001840.c)
 *     sub_180001880 @ 0x180001880 (sub_180001880.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180027A18 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     ?__scrt_initialize_thread_safe_statics@@YAHXZ @ 0x1800448F0 (-__scrt_initialize_thread_safe_statics@@YAHXZ.c)
 * Callees:
 *     _onexit @ 0x180044740 (_onexit.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit((_onexit_t)a1) != 0LL) - 1;
}
