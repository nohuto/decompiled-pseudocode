/*
 * XREFs of ?uncaught_exception@std@@YA_NXZ @ 0x18011F9BE
 * Callers:
 *     sub_18002D4BC @ 0x18002D4BC (sub_18002D4BC.c)
 *     sub_18002DB2C @ 0x18002DB2C (sub_18002DB2C.c)
 *     sub_18002E498 @ 0x18002E498 (sub_18002E498.c)
 *     sub_18006BE7C @ 0x18006BE7C (sub_18006BE7C.c)
 *     sub_18006FF20 @ 0x18006FF20 (sub_18006FF20.c)
 *     sub_180072A6C @ 0x180072A6C (sub_180072A6C.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
bool std::uncaught_exception(void)
{
  return __imp_?uncaught_exception@std@@YA_NXZ();
}
