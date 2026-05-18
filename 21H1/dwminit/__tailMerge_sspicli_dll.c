/*
 * XREFs of __tailMerge_sspicli_dll @ 0x18000588C
 * Callers:
 *     __imp_load_LogonUserExExW @ 0x180005880 (__imp_load_LogonUserExExW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180004D70 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_sspicli_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_SspiCli_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
