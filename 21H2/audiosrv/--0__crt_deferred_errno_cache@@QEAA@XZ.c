/*
 * XREFs of ??0__crt_deferred_errno_cache@@QEAA@XZ @ 0x180069050
 * Callers:
 *     sub_1801352FC @ 0x1801352FC (sub_1801352FC.c)
 *     sub_1801356EC @ 0x1801356EC (sub_1801356EC.c)
 *     sub_1801376CC @ 0x1801376CC (sub_1801376CC.c)
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__crt_deferred_errno_cache *__fastcall __crt_deferred_errno_cache::__crt_deferred_errno_cache(
        __crt_deferred_errno_cache *this)
{
  *(_QWORD *)this = 0LL;
  return this;
}
