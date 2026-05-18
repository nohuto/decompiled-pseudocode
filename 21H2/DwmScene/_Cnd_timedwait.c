/*
 * XREFs of _Cnd_timedwait @ 0x180125380
 * Callers:
 *     sub_180076B50 @ 0x180076B50 (sub_180076B50.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl Cnd_timedwait(_Cnd_t a1, _Mtx_t a2, const xtime *a3)
{
  return _Cnd_timedwait(a1, a2, a3);
}
