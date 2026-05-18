/*
 * XREFs of ?uncaught_exception@std@@YA_NXZ @ 0x18012528E
 * Callers:
 *     sub_180032D8C @ 0x180032D8C (sub_180032D8C.c)
 *     sub_1800333FC @ 0x1800333FC (sub_1800333FC.c)
 *     sub_180033D68 @ 0x180033D68 (sub_180033D68.c)
 *     sub_18007174C @ 0x18007174C (sub_18007174C.c)
 *     sub_1800757F0 @ 0x1800757F0 (sub_1800757F0.c)
 *     sub_18007833C @ 0x18007833C (sub_18007833C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool std::uncaught_exception(void)
{
  return __imp_?uncaught_exception@std@@YA_NXZ();
}
