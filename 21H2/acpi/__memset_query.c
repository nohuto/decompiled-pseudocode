/*
 * XREFs of __memset_query @ 0x1C0030240
 * Callers:
 *     __memset_repmovs @ 0x1C00301C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C002FCE0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
