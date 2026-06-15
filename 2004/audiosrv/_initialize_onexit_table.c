/*
 * XREFs of _initialize_onexit_table @ 0x18006B612
 * Callers:
 *     __scrt_initialize_onexit_tables @ 0x18006AA2C (__scrt_initialize_onexit_tables.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl initialize_onexit_table(_onexit_table_t *Table)
{
  return _o__initialize_onexit_table(Table);
}
