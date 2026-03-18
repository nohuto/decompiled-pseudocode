/*
 * XREFs of __tailMerge_cabinet_dll @ 0x180101D3E
 * Callers:
 *     __imp_load_Compress @ 0x180101D32 (__imp_load_Compress.c)
 *     __imp_load_CreateCompressor @ 0x180101DBD (__imp_load_CreateCompressor.c)
 *     __imp_load_CloseCompressor @ 0x180101DCF (__imp_load_CloseCompressor.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800F39B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_cabinet_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_cabinet_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
