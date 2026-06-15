/*
 * XREFs of sub_1800EE2F4 @ 0x1800EE2F4
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_1800ED0E0 @ 0x1800ED0E0 (sub_1800ED0E0.c)
 * Callees:
 *     <none>
 */

__int64 sub_1800EE2F4(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &unk_18015E5F0, a2, (__int64 *)va);
}
