/*
 * XREFs of _EtwTraceMessage @ 0x4B2EA100
 * Callers:
 *     <none>
 * Callees:
 *     _EtwTraceMessageVa@24 @ 0x4B2EA130 (_EtwTraceMessageVa@24.c)
 */

int EtwTraceMessage(int a1, int a2, int a3, int a4, int a5, ...)
{
  va_list va; // [esp+1Ch] [ebp+1Ch] BYREF

  va_start(va, a5);
  return EtwTraceMessageVa(a1, a2, a3, a4, a5, va);
}
