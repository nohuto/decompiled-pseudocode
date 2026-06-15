/*
 * XREFs of sub_1800EE298 @ 0x1800EE298
 * Callers:
 *     sub_1800ED0E0 @ 0x1800ED0E0 (sub_1800ED0E0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800EE298(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18015E5F0, 32LL, (__int64 *)va);
}
