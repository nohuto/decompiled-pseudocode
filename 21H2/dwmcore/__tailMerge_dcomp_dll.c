/*
 * XREFs of __tailMerge_dcomp_dll @ 0x180102A8D
 * Callers:
 *     __imp_load_OpenFlipProducer @ 0x180102A81 (__imp_load_OpenFlipProducer.c)
 *     __imp_load_OpenFlipConsumer @ 0x180102B0C (__imp_load_OpenFlipConsumer.c)
 *     __imp_load_DCompositionCreateSurfaceHandle @ 0x180103235 (__imp_load_DCompositionCreateSurfaceHandle.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800F39B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_dcomp_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_dcomp_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
