/*
 * XREFs of ObpIncrementHandleCount @ 0x1408DF8CC
 * Callers:
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 * Callees:
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 */

__int64 __fastcall ObpIncrementHandleCount(
        unsigned int a1,
        __int64 a2,
        struct _KPROCESS *a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6)
{
  return ObpIncrementHandleCountEx(a1, a2, a3, a4, a5, a6, 0LL);
}
