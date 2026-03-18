/*
 * XREFs of _execute_onexit_table @ 0x1800E3CBE
 * Callers:
 *     __scrt_dllmain_uninitialize_c @ 0x1800E2CDC (__scrt_dllmain_uninitialize_c.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl execute_onexit_table(_onexit_table_t *Table)
{
  return _execute_onexit_table(Table);
}
