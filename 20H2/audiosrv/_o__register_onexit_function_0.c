/*
 * XREFs of _o__register_onexit_function_0 @ 0x18006ACDC
 * Callers:
 *     _onexit @ 0x18006A280 (_onexit.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o__register_onexit_function_0(_onexit_table_t *Table, _onexit_t Function)
{
  return _register_onexit_function(Table, Function);
}
