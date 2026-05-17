/*
 * XREFs of LdrProcessRelocationBlockEx @ 0x1800E3DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int16 *__fastcall LdrProcessRelocationBlockEx(
        unsigned __int16 a1,
        __int64 a2,
        int a3,
        unsigned __int16 *a4,
        __int64 a5)
{
  return LdrProcessRelocationBlockLongLong(a1, a2, a3, a4, a5);
}
